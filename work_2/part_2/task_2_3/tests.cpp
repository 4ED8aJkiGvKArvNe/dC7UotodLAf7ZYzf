#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

// what to test
#include "task.cpp"

TEST(TestTask2, TestGrageA)
{
  int points = 90;

  std::string result = points_to_grade(points);

  EXPECT_EQ(result, "A");
}

TEST(TestTask2, TestGrageB)
{
  int points = 89;

  std::string result = points_to_grade(points);

  EXPECT_EQ(result, "B");
}

TEST(TestTask2, TestGrageC)
{
  int points = 84;

  std::string result = points_to_grade(points);

  EXPECT_EQ(result, "C");
}

TEST(TestTask2, TestGrageD)
{
  int points = 74;

  std::string result = points_to_grade(points);

  EXPECT_EQ(result, "D");
}

TEST(TestTask2, TestGrageE)
{
  int points = 69;

  std::string result = points_to_grade(points);

  EXPECT_EQ(result, "E");
}

TEST(TestTask2, TestGrageFX)
{
  int points = 59;

  std::string result = points_to_grade(points);

  EXPECT_EQ(result, "FX");
}

TEST(TestTask2, TestGrageF)
{
  int points = 34;
  std::string result = points_to_grade(points);

  EXPECT_EQ(result, "F");
}

TEST(TestTask2, TestInvalidPoints)
{
  int points = 0;
  
  std::string result = points_to_grade(points);

  EXPECT_EQ(result, "Invalid points");
}
