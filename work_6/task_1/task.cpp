#include <iostream>
#include <string>
#include <iomanip>

#include "include/commons.h"
#include "include/func_1.h"
#include "include/func_2.h"
#include "include/func_3.h"

// get quadrant
int get_quadrant(double x, double f_x)
{
    if (x > 0 && f_x > 0)
    {
        return 1;
    }
    else if (x < 0 && f_x > 0)
    {
        return 2;
    }
    else if (x < 0 && f_x < 0)
    {
        return 3;
    }
    else if (x > 0 && f_x < 0)
    {
        return 4;
    }
    else
    {
        return 0;
    }
}

/**
 * @brief Convert a double to a string with a given precision
 */
std::string double_to_string(double value, int precision = 5)
{
    std::ostringstream out;
    out << std::fixed << std::setprecision(precision) << value;
    return out.str();
}

// print coordinate and quadrant
void print_coordinate(Coord coord)
{
    double x = std::get<0>(coord);
    double f_x = std::get<1>(coord);
    int quadrant = std::get<2>(coord);

    std::cout << "x = "
              << double_to_string(x)
              << ",\tf(x) = "
              << double_to_string(f_x)
              << ",\tquadrant = "
              << quadrant << std::endl;
}

/**
 * @brief Calculate the function for the given x
 */
Coord calculate(double x)
{
    double f_x;
    if (x <= -1)
    {
        f_x = func_1(x);
    }
    else if (x >= 0)
    {
        f_x = func_3(x);
    }
    else
    {
        f_x = func_2(x);
    }

    int quadrant = get_quadrant(x, f_x);

    return Coord(x, f_x, quadrant);
}
