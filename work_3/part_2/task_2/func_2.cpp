#include <iostream>
#include <string>

#include "include/commons.h"
#include "include/helpers.h"

coord_string func_2(double x, double a, double c, int precision = 2)
{
    std::string x_str = double_to_string(x, precision);

    std::string result_str;
    try
    {
        double result = divide((x - a), (x - c));

        result_str = double_to_string(result, precision);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;

        result_str = "NaN";
    }

    return build_coord(x_str, result_str);
}