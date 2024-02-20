#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

// what to test
#include "task.cpp"

TEST(TestTask1, TestPositiveNumber)
{
  int result = number_sign(123);

  EXPECT_EQ(result, 1);
}

TEST(TestTask1, TestNegativeNumber)
{
  int result = number_sign(-123);

  EXPECT_EQ(result, -1);
}

TEST(TestTask1, TestZero)
{
  int result = number_sign(0);

  EXPECT_EQ(result, 0);
}
