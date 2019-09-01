#include "go_unit_test.h"

using namespace testing;

class GoFuncTest : public GoUnitTest {
protected:

    virtual void SetUp() {
        GoUnitTest::SetUp();
    }

    virtual void TearDown() {
        GoUnitTest::TearDown();
    }

};

TEST_F(GoFuncTest, test1) {
    ASSERT_TRUE(true);
}
