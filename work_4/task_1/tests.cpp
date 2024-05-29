#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

// what to test
#include "./task.cpp"

TEST(TestFindMax, TestMaxIsPositive) {
  int array[] = {1, 5, 2, 10, 3};

  int max = find_max(array, 5);
  EXPECT_EQ(max, 10);
}

TEST(TestFindMax, TestMaxIsNegative) {
  int array[] = {-1, -5, -2, -10, -3};

  int max = find_max(array, 5);
  EXPECT_EQ(max, -1);
}

TEST(TestFindPositive, TestSomePositive) {
  int array[] = {1, -5, 2, -10, 3};

  int indexes[5];
  int count = find_positive_indexes(array, 5, indexes);

  EXPECT_EQ(count, 3);

  int expected_indexes[] = {0, 2, 4};
  for (int i=0; i < 3; i++) {
    EXPECT_EQ(indexes[i], expected_indexes[i]);
  }
}

TEST(TestFindPositive, TestNoPositive) {
  int array[] = {-1, -5, -2, -10, -3};

  int indexes[5];
  int count = find_positive_indexes(array, 5, indexes);

  EXPECT_EQ(count, 0);
}
