/* BASED ON
 * http://qtcreator.blogspot.de/2009/10/running-multiple-unit-tests.html
 */
#ifndef QT_TEST_COLLECTOR_H
#define QT_TEST_COLLECTOR_H

#include <QtTest>
#include <memory>
#include <map>
#include <string>
#include <iostream>

namespace QtTestCollector {
    typedef std::map<std::string, std::shared_ptr<QObject> > TestList;
    inline TestList& GetTestList() {
        static TestList list;
        return list;
    }

    inline int RunAllTests(int argc, char **argv) {
        int result = 0;
        for (const auto&i:GetTestList()) {
            result += QTest::qExec(i.second.get(), argc, argv);
        }
        return result;
    }

    template <class T>
    class UnitTestClass {
    public:
        UnitTestClass(const std::string& pTestName) {
            auto& testList = QtTestCollector::GetTestList();
            if (0==testList.count(pTestName)) {
                testList.insert(std::make_pair(pTestName, std::make_shared<T>()));
            }
        }
    };
}

#define ADD_TEST(className) static QtTestCollector::UnitTestClass<className> \
    test(#className);

#define QTEST_COLLECTOR_APPLESS_MAIN \
int main(int argc, char *argv[], char *envp[]) { \
    for (char **env = envp; *env != 0; env++) { \
        std::cout << *env << std::endl; \
    } \
    auto nFailedTests = QtTestCollector::RunAllTests(argc, argv); \
    std::cout << "Total number of failed tests: " \
              << nFailedTests << std::endl; \
    return nFailedTests; \
}

#endif // QT_TEST_COLLECTOR_H
