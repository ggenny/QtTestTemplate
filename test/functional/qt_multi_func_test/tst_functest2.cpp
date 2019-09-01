#include "qt_unit_test.h"
#include "qt_test_collector.h"

// add necessary includes here

class FuncTest2 : public QtUnitTest {
    Q_OBJECT

public:
    FuncTest2();
    ~FuncTest2();

private slots:
    void initTestCase();
    void cleanupTestCase();

    void test_case1();

};

FuncTest2::FuncTest2() {

}

FuncTest2::~FuncTest2() {

}

void FuncTest2::initTestCase() {
    QtUnitTest::initTestCase();
}

void FuncTest2::cleanupTestCase() {
    QtUnitTest::cleanupTestCase();
}

void FuncTest2::test_case1() {

}

ADD_TEST(FuncTest2)

#include "tst_functest2.moc"
