#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

// what to test
#include "task.cpp"

TEST(TestSelectionSort, TestSelectionSort)
{
  short matrix[10][10] = {
    {3, 2, -1},
    {9, 8, -7},
    {6, -5, -4}
  };

  selection_sort_columns_asc(matrix, 3);

  short expected_matrix[3][3] = {
    {3, -5, -7},
    {6, 2, -4},
    {9, 8, -1}
  };

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      EXPECT_EQ(matrix[i][j], expected_matrix[i][j]);
    }
  }
}
