#ifndef HELPERS_H
#define HELPERS_H

#include <string>

#include "commons.h"

double divide(double a, double b);

std::string double_to_string(double x, int precision = 2);

coord_string build_coord(std::string x, std::string y);

#endif
