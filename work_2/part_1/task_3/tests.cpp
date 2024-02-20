#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

// what to test
#include "task.cpp"

TEST(TestTask3, TestFirstNumberIsBigger)
{
  int number_a = 7;
  int number_b = 5;
  int number_c = -1;

  int result = max_number(number_a, number_b, number_c);

  EXPECT_EQ(result, 7);
}

TEST(TestTask3, TestSecondNumberIsBigger)
{
  int number_a = -3;
  int number_b = 5;
  int number_c = 0;

  int result = max_number(number_a, number_b, number_c);

  EXPECT_EQ(result, 5);
}

TEST(TestTask3, TestThirdNumberIsBigger)
{
  int number_a = -5;
  int number_b = 0;
  int number_c = 3;

  int result = max_number(number_a, number_b, number_c);

  EXPECT_EQ(result, 3);
}
