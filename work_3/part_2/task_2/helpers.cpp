#include <sstream>
#include <iomanip>
#include <iostream>

#include "include/commons.h"

/**
 * @brief Divide two numbers. If the denominator is zero, throw an exception.
*/
double divide(double a, double b)
{
  if (b == 0)
  {
    throw bad_denominator();
  }
  return a / b; // b can't possibly be zero here
}

/**
 * @brief Convert a double to a string with a given precision
*/
std::string double_to_string(double value, int precision = 2)
{
  std::ostringstream out;
  out << std::fixed << std::setprecision(precision) << value;
  return out.str();
}

/**
 * @brief Build a pair of strings
*/
coord_string build_coord(std::string x, std::string y)
{
  return std::make_pair(x, y);
}