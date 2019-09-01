#include "qt_unit_test.h"

// add necessary includes here

class FuncTest : public QtUnitTest {
    Q_OBJECT

public:
    FuncTest();
    ~FuncTest();

private slots:
    void initTestCase();
    void cleanupTestCase();

    void test_func_case();

};

FuncTest::FuncTest() {

}

FuncTest::~FuncTest() {

}

void FuncTest::initTestCase() {
    QtUnitTest::initTestCase();
}

void FuncTest::cleanupTestCase() {
    QtUnitTest::cleanupTestCase();
}

void FuncTest::test_func_case() {

}

QTEST_APPLESS_MAIN(FuncTest)

#include "tst_functest.moc"
