#include <iostream>
#include <string>

#include "../../include/commons.h"
#include "../../include/helpers.h"

coord_string func_3(double x, double c, int precision)
{
  std::cout << "mocks/func_3(" << x << "," << c << "," << precision << ")" << std::endl;

  return std::make_pair("33", "33");
}