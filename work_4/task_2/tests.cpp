#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

// what to test
#include "./task.cpp"

TEST(TestFindMax, TestMatrix3x3) {
  // define matrix of integers
  int matrix[10][10] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  int array[3];

  find_min_array(matrix, 3, 3, array);

  int expected_array[] = {1, 4, 7};
  for (int i=0; i < 3; i++) {
    EXPECT_EQ(array[i], expected_array[i]);
  }
}

TEST(TestFindMax, TestMatrix5x2) {
  // define matrix of integers
  int matrix[10][10] = {
    {1, 2},
    {4, -5},
    {7, 8},
    {10, -11},
    {13, 14}
  };

  int array[5];

  find_min_array(matrix, 5, 2, array);

  int expected_array[] = {1, -5, 7, -11, 13};
  for (int i=0; i < 5; i++) {
    EXPECT_EQ(array[i], expected_array[i]);
  }
}
