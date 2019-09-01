#include "qt_unit_test.h"
#include "qt_test_collector.h"

// add necessary includes here

class FuncTest1 : public QtUnitTest {
    Q_OBJECT

public:
    FuncTest1();
    ~FuncTest1();

private slots:
    void initTestCase();
    void cleanupTestCase();

    void test_case1();

};

FuncTest1::FuncTest1() {

}

FuncTest1::~FuncTest1() {

}

void FuncTest1::initTestCase() {
    QtUnitTest::initTestCase();
}

void FuncTest1::cleanupTestCase() {
    QtUnitTest::cleanupTestCase();
}

void FuncTest1::test_case1() {

}

ADD_TEST(FuncTest1)

#include "tst_functest1.moc"
