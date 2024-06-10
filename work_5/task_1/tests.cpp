#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

// what to test
#include "task.cpp"

TEST(TestBubbleSort, TestBubbleSortDesc) {
  int arr[] = {-5, 4, -3, 2, -1};
  int size = 5;

  bubble_sort_desc(arr, size);

  int expected_arr[] = {4, 2, -1, -3, -5};
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(arr[i], expected_arr[i]);
  }
}

TEST(TestLinearSearch, TestNumberFound)
{
  int arr[] = {1, 2, 3, 4, 5};
  int size = 5;
  int number = 3;

  int index = linear_search(arr, size, number);

  EXPECT_EQ(index, 2);
}

TEST(TestLinearSearch, TestNumberNotFound)
{
  int arr[] = {1, 2, 3, 4, 5};
  int size = 5;
  int number = 6;

  int index = linear_search(arr, size, number);

  EXPECT_EQ(index, -1);
}
