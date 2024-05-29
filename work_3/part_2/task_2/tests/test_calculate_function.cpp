#include "gtest/gtest.h"
#include <iostream>
#include <sstream>
#include "../include/commons.h"
#include "../task.cpp"

// Test case
TEST(TestCalculateFunction, TestFunc_1andFunc_3Called)
{
  std::stringstream buffer;
  std::streambuf *prevcountbuf = std::cout.rdbuf(buffer.rdbuf());

  // Call the calculate function
  calculate_function(1.0, 3.0, 4.0, -1.0, 1.0, 0.5, 2);

  std::cout.rdbuf(prevcountbuf); // restore the standard output

  std::string output = buffer.str();

  // Check if functions were called in correct order
  // and with correct parameters
  std::string expected_line_1 = "mocks/func_1(-1,1,3,2)\n";
  std::string expected_line_2 = "mocks/func_1(-0.5,1,3,2)\n";
  std::string expected_line_3 = "mocks/func_3(0,4,2)\n";
  std::string expected_line_4 = "mocks/func_3(0.5,4,2)\n";
  std::string expected_line_5 = "mocks/func_3(1,4,2)\n";
  EXPECT_EQ(output, expected_line_1 + expected_line_2 + expected_line_3 + expected_line_4 + expected_line_5);
}

TEST(TestCalculateFunction, TestFunc_2andFunc_3Called)
{
  std::stringstream buffer;
  std::streambuf *prevcountbuf = std::cout.rdbuf(buffer.rdbuf());

  // Call the calculate function
  calculate_function(1.0, 0, 4.0, -1.0, 1.0, 0.5, 2);

  std::cout.rdbuf(prevcountbuf); // restore the standard output

  std::string output = buffer.str();

  // Check if functions were called in correct order
  // and with correct parameters
  std::string expected_line_1 = "mocks/func_3(-1,4,2)\n";
  std::string expected_line_2 = "mocks/func_3(-0.5,4,2)\n";
  std::string expected_line_3 = "mocks/func_3(0,4,2)\n";
  std::string expected_line_4 = "mocks/func_2(0.5,1,4,2)\n";
  std::string expected_line_5 = "mocks/func_2(1,1,4,2)\n";
  EXPECT_EQ(output, expected_line_1 + expected_line_2 + expected_line_3 + expected_line_4 + expected_line_5);
}
