#include "go_unit_test.h"

using namespace testing;

class GoFuncTest2 : public GoUnitTest {
protected:

    virtual void SetUp() {
        GoUnitTest::SetUp();
    }

    virtual void TearDown() {
        GoUnitTest::TearDown();
    }

};

TEST_F(GoFuncTest2, test1) {
    ASSERT_TRUE(true);
}
