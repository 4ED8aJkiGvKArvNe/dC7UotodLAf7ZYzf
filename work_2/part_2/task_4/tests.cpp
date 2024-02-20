#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

// what to test
#include "task.cpp"

TEST(TestTask4, TestValue1)
{
  double x = 0;

  double result = calculate_function_value(x);

  EXPECT_NEAR(result, 0.540302, 0.000001);
}

TEST(TestTask4, TestValue2)
{
  double x = 0.1;

  double result = calculate_function_value(x);

  EXPECT_NEAR(result, 0.844254, 0.000001);
}

TEST(TestTask4, TestValue3)
{
  double x = 0.5;

  double result = calculate_function_value(x);

  EXPECT_NEAR(result, 0.912241, 0.000001);
}

TEST(TestTask4, TestValue4)
{
  double x = 0.6;
  
  double result = calculate_function_value(x);

  EXPECT_NEAR(result, 1.57863, 0.00001);
}
