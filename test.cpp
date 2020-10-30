#include <gtest/gtest.h>
#include <iostream>
#include "newton.h"

using namespace std;

TEST(NewtonTest, simple_ints)
{
    EXPECT_EQ(newton(5, 2), 10);
    EXPECT_EQ(newton(5, 1), 5);
    EXPECT_EQ(newton(10, 6), 210);
}


int main(int argc, char* argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  cout << std::setprecision(20) << newton(40, 20)<<endl;
  cout << std::setprecision(20) << newton(40, 40)<<endl;
  cout << std::setprecision(20) << newton(40, 1)<<endl;
  cout << std::setprecision(20) << newton(67, 33)<<endl;
  return RUN_ALL_TESTS();
}
