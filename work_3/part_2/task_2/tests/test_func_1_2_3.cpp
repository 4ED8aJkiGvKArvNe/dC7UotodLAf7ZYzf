#include <gtest/gtest.h>
#include "../func_1.cpp"
#include "../func_2.cpp"
#include "../func_3.cpp"

TEST(TestFunc_1_2_3, TestFunc_1) {
  coord_string result1 = func_1(-1.0, 3.0, 4.0, 2);
  EXPECT_EQ(result1.first, "-1.00");
  EXPECT_EQ(result1.second, "3.07");

  coord_string result2 = func_1(-3.0, 5.0, -4.0, 2);
  EXPECT_EQ(result2.first, "-3.00");
  EXPECT_EQ(result2.second, "5.50");
}

TEST(TestFunc_1_2_3, TestFunc_2) {
  coord_string result1 = func_2(3.0, 1.0, 2.0, 2);
  EXPECT_EQ(result1.first, "3.00");
  EXPECT_EQ(result1.second, "2.00");

  coord_string result2 = func_2(5.0, -2.0, 2.0, 2);
  EXPECT_EQ(result2.first, "5.00");
  EXPECT_EQ(result2.second, "2.33");
}

TEST(TestFunc_1_2_3, TestFunc_3) {
  coord_string result1 = func_3(3.0, 2.0, 2);
  EXPECT_EQ(result1.first, "3.00");
  EXPECT_EQ(result1.second, "10.00");

  coord_string result2 = func_3(-2.0, 3.0, 2);
  EXPECT_EQ(result2.first, "-2.00");
  EXPECT_EQ(result2.second, "-5.33");

}
