#include "go_unit_test.h"

using namespace testing;

class GoFuncTest1 : public GoUnitTest {
protected:

    virtual void SetUp() {
        GoUnitTest::SetUp();
    }

    virtual void TearDown() {
        GoUnitTest::TearDown();
    }

};

TEST_F(GoFuncTest1, test1) {
    ASSERT_TRUE(true);
}
