#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

// what to test
#include "task.cpp"

TEST(TestTask4, TestNegativeNumber)
{
  int number = -5;

  int result = abs_value(number);

  EXPECT_EQ(result, 5);
}

TEST(TestTask4, TestPositiveNumber)
{
  int number = 7;
  
  int result = abs_value(number);

  EXPECT_EQ(result, 7);
}
