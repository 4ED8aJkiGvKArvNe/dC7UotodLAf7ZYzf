#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

// what to test
#include "task.cpp"

TEST(TestSumPositiveNumbers, TestSumRow) {
  int arr[] = {0, -1, 2, -3, 4, -5, 6, -7, 8, -9};

  EXPECT_EQ(sum_positive_numbers_row(arr), 20);
}

TEST(TestSumPositiveNumbers, TestSumMatrix) {
  int arr2d[10][10] = {
    { 1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    {-1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
    {-1, -1,  1,  1,  1,  1,  1,  1,  1,  1},
    {-1, -1, -1,  1,  1,  1,  1,  1,  1,  1},
    {-1, -1, -1, -1,  1,  1,  1,  1,  1,  1},
    {-1, -1, -1, -1, -1,  1,  1,  1,  1,  1},
    {-1, -1, -1, -1, -1, -1,  1,  1,  1,  1},
    {-1, -1, -1, -1, -1, -1, -1,  1,  1,  1},
    {-1, -1, -1, -1, -1, -1, -1, -1,  1,  1},
    {-1, -1, -1, -1, -1, -1, -1, -1, -1,  1},
  };

  int sum_array[10];
  sum_positive_numbers_2d(arr2d, sum_array);

  // test some of the values
  EXPECT_EQ(sum_array[0], 10);
  EXPECT_EQ(sum_array[5], 5);
  EXPECT_EQ(sum_array[9], 1);
}
