#ifndef GO_UNIT_TEST_H
#define GO_UNIT_TEST_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

class GoUnitTest : public ::testing::Test {
public:
    GoUnitTest() {

    }

    virtual ~GoUnitTest() {

    }

    // Sets up the test fixture.
    virtual void SetUp() {

    }

    // Tears down the test fixture.
    virtual void TearDown() {

    }

};

#endif // GO_UNIT_TEST_H
