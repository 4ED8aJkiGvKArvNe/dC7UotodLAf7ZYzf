#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

// what to test
#include "task.cpp"

TEST(Task1, TestDistanceBetweenPoints)
{
  point p1 = {0, 0};
  point p2 = {10, 10};

  double result = distance_between_points(p1, p2);

  EXPECT_NEAR(result, 14.1421, 0.0001);
}

TEST(Task1, TestLargestSegment) {
  point p1 = {0, 0};
  point p2 = {0, 10};
  point p3 = {10, 0};

  point_list list = {p1, p2, p3};

  std::tuple<double, point, point> result = largest_segment(list);
  
  // largest distance
  EXPECT_NEAR(std::get<0>(result), 14.1421, 0.0001);

  // first point
  EXPECT_EQ(std::get<1>(result), p2);

  // second point
  EXPECT_EQ(std::get<2>(result), p3);
}
