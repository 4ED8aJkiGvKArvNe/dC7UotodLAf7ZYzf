#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

// what to test
#include "task.cpp"

TEST(TestTask2, TestFirstNumberIsSmaller)
{
  int number_a = 5;
  int number_b = 7;

  int result = min_number(number_a, number_b);

  EXPECT_EQ(result, 5);
}

TEST(TestTask2, TestFirstNumberIsBigger)
{
  int number_a = 7;
  int number_b = 5;

  int result = min_number(number_a, number_b);

  EXPECT_EQ(result, 5);
}

TEST(TestTask2, TestNumbersAreEqual)
{
  int number_a = 1;
  int number_b = 1;

  int result = min_number(number_a, number_b);

  EXPECT_EQ(result, 1);
}