#include <gtest/gtest.h>
#include "../func_1.cpp"
#include "../func_2.cpp"
#include "../func_3.cpp"

TEST(TestFunc_1_2_3, TestFunc_1) {
  double f_x_1 = func_1(-2.0);
  EXPECT_NEAR(f_x_1, -2.99591, 0.00001);

  double f_x_2 = func_1(-8.0);
  EXPECT_NEAR(f_x_2, -8.67538, 0.00001);
}

TEST(TestFunc_1_2_3, TestFunc_2) {
  double f_x_1 = func_2(-0.75);
  EXPECT_NEAR(f_x_1, 0.29577, 0.00001);

  double f_x_2 = func_2(-0.5);
  EXPECT_NEAR(f_x_2, 0.01783, 0.00001);
}

TEST(TestFunc_1_2_3, TestFunc_3) {
  double f_x_1 = func_3(1.5);
  EXPECT_NEAR(f_x_1, 4.85338, 0.00001);

  double f_x_2 = func_3(3);
  EXPECT_NEAR(f_x_2, 5.70489, 0.00001);
}
