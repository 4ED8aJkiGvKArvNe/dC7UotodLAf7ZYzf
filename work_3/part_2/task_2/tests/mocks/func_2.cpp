#include <iostream>
#include <string>

#include "../../include/commons.h"
#include "../../include/helpers.h"

coord_string func_2(double x, double a, double c, int precision)
{
  std::cout << "mocks/func_2(" << x << "," << a << "," << c << "," << precision << ")" << std::endl;

  return std::make_pair("22", "22");
}