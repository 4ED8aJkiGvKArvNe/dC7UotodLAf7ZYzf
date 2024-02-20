#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

// what to test
#include "task.cpp"

TEST(TestTask1, TestFirstQuarter)
{
  int x = 5;
  int y = 5;

  int result = define_quarter(x, y);

  EXPECT_EQ(result, 1);
}

TEST(TestTask1, TestSecondQuarter)
{
  int x = -5;
  int y = 5;

  int result = define_quarter(x, y);

  EXPECT_EQ(result, 2);
}

TEST(TestTask1, TestThirdQuarter)
{
  int x = -5;
  int y = -5;
  
  int result = define_quarter(x, y);

  EXPECT_EQ(result, 3);
}

TEST(TestTask1, TestForthQuarter)
{
  int x = 5;
  int y = -5;
 
  int result = define_quarter(x, y);

  EXPECT_EQ(result, 4);
}

TEST(TestTask1, TestSpecialCase)
{
  int x = 0;
  int y = 0;

  int result = define_quarter(x, y);

  EXPECT_EQ(result, 0);
}
