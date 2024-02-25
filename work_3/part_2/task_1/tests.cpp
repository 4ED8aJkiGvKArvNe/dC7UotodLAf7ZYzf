#include <gtest/gtest.h>
#include <gmock/gmock.h>

// what to test
#include "task.cpp"

TEST(TestEvenNumbers, TestPositiveNumbersInRange)
{
  int from = 1;
  int to = 11;

  std::vector<int> result = get_even_numbers(from, to);

  std::vector<int> expected = {2, 4, 6, 8, 10};
  EXPECT_EQ(result, expected);
}

TEST(TestEvenNumbers, TestEqualEvenPositiveNumbers)
{
  int from = 24;
  int to = 24;

  std::vector<int> result = get_even_numbers(from, to);

  std::vector<int> expected = {24};
  EXPECT_EQ(result, expected);
}

TEST(TestEvenNumbers, TestEqualOddPositiveNumbers)
{
  int from = 17;
  int to = 17;

  std::vector<int> result = get_even_numbers(from, to);

  std::vector<int> expected = {};
  EXPECT_EQ(result, expected);
}

TEST(TestEvenNumbers, TestNegativeNumbersInRange)
{
  int from = -17;
  int to = -12;

  std::vector<int> result = get_even_numbers(from, to);

  std::vector<int> expected = {-16, -14, -12};
  EXPECT_EQ(result, expected);
}

TEST(TestEvenNumbers, TestRangeFromNegativeToPositive)
{
  int from = -5;
  int to = 5;

  std::vector<int> result = get_even_numbers(from, to);

  std::vector<int> expected = {-4, -2, 0, 2, 4};
  EXPECT_EQ(result, expected);
}

TEST(TestEvenNumbers, TestSwappedRangePoints)
{
  int from = 8;
  int to = 1;

  std::vector<int> result = get_even_numbers(from, to);

  std::vector<int> expected = {2, 4, 6, 8};
  EXPECT_EQ(result, expected);
}

TEST(TestEveryThirdNumber, TestSmallRange)
{
  int from = 1;
  int to = 2;

  std::vector<int> result = get_every_third_number(from, to);

  std::vector<int> expected = {};
  EXPECT_EQ(result, expected);
}


TEST(TestEveryThirdNumber, Test3NumbersInRange)
{
  int from = 1;
  int to = 3;

  std::vector<int> result = get_every_third_number(from, to);

  std::vector<int> expected = {3};
  EXPECT_EQ(result, expected);
}

TEST(TESTEveryTrirdNumber, TestRange)
{
  int from = 1;
  int to = 10;

  std::vector<int> result = get_every_third_number(from, to);

  std::vector<int> expected = {3, 6, 9};
  EXPECT_EQ(result, expected);
}
