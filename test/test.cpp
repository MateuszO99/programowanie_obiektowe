#include <gtest/gtest.h>
#include <iostream>

#include "../zadanie/newton.h"

using namespace std;

TEST(NewtonTest, simple_ints)
{
    EXPECT_EQ(newton(5, 2), 10);
    EXPECT_EQ(newton(5, 1), 5);
    EXPECT_EQ(newton(10, 6), 210);
    EXPECT_EQ(newton(40, 1), 40);
    EXPECT_EQ(newton(40, 40), 1);
    EXPECT_DOUBLE_EQ(newton(40, 20), 137846528820);
}


int main(int argc, char* argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
