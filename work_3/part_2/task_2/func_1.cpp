#include <iostream>
#include <string>

#include "include/commons.h"
#include "include/helpers.h"

coord_string func_1(double x, double a, double b, int precision)
{
  std::string x_str = double_to_string(x, precision);

  std::string result_str;
  try
  {
    double result = a - divide(x, (10 + b));

    result_str = double_to_string(result, precision);
  }
  catch (std::exception &e)
  {
    std::cerr << e.what() << std::endl;

    result_str = "NaN";
  }

  return build_coord(x_str, result_str);
}
