#include <func.hpp>
#include <gtest/gtest.h>

class UnitTest : public ::testing::Test {
};

TEST(UnitTest, test1) {
  EXPECT_EQ(2, func_2(1));
}
TEST(UnitTest, test2) {
  EXPECT_NE(3, func_2(2));
}
