#include "gtest/gtest.h"
#include <iostream>
#include <sstream>
#include "../include/commons.h"
#include "../task.cpp"

// Test case
TEST(TestCalculateFunction, TestFunc_1Called)
{
  std::stringstream buffer;
  std::streambuf *prevcountbuf = std::cout.rdbuf(buffer.rdbuf());

  // Call the calculate function
  calculate(-2);

  std::cout.rdbuf(prevcountbuf); // restore the standard output

  std::string output = buffer.str();

  // Check if the correct function was called
  std::string expected_line = "mocks/func_1(-2)\n";
  EXPECT_EQ(output, expected_line);
}

TEST(TestCalculateFunction, TestFunc_2Called)
{
  std::stringstream buffer;
  std::streambuf *prevcountbuf = std::cout.rdbuf(buffer.rdbuf());

  // Call the calculate function
  calculate(-.5);

  std::cout.rdbuf(prevcountbuf); // restore the standard output

  std::string output = buffer.str();

  // Check if the correct function was called
  std::string expected_line = "mocks/func_2(-0.5)\n";
  EXPECT_EQ(output, expected_line);
}

TEST(TestCalculateFunction, TestFunc_3Called)
{
  std::stringstream buffer;
  std::streambuf *prevcountbuf = std::cout.rdbuf(buffer.rdbuf());

  // Call the calculate function
  calculate(2);

  std::cout.rdbuf(prevcountbuf); // restore the standard output

  std::string output = buffer.str();

  // Check if the correct function was called
  std::string expected_line = "mocks/func_3(2)\n";
  EXPECT_EQ(output, expected_line);
}
