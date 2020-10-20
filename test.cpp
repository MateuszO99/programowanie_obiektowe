#include <gtest/gtest.h>

#include "newton.h"

TEST(NewtonTest, simple_ints)
{
    EXPECT_EQ(newton(5, 2), 10);
    EXPECT_EQ(newton(5, 1), 5);
    EXPECT_EQ(newton(10, 6), 210);
}


int main(int argc, char* argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
