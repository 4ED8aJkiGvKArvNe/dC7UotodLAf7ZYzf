#include <iostream>
#include <string>

#include "../../include/commons.h"
#include "../../include/helpers.h"

coord_string func_1(double x, double a, double b, int precision)
{
  std::cout << "mocks/func_1(" << x << "," << a << "," << b << "," << precision << ")" << std::endl;

  return std::make_pair("11", "11");
}