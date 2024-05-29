#include <iostream>
#include <string>
#include <iomanip>

#include "include/commons.h"
#include "include/helpers.h"
#include "include/func_1.h"
#include "include/func_2.h"
#include "include/func_3.h"

/**
 * @brief calculate the function
 */
coord_list calculate_function(
    double a, 
    double b, 
    double c, 
    double x_start, 
    double x_end, 
    double dx, 
    int precision = 2
)
{
    coord_list results;

    for (double x = x_start; x <= x_end; x += dx)
    {
        coord_string coordinate;
        if (x < 0 && b != 0)
        {
            coordinate = func_1(x, a, b, precision);
        }
        else if (x > 0 && b == 0)
        {
            coordinate = func_2(x, a, c, precision);
        }
        else
        {
            coordinate = func_3(x, c, precision);
        }
        results.push_back(coordinate);
    }

    return results;
}

/**
 * @brief print the list of coordinates as a table
 */
void print_table(const coord_list &coordinates)
{
    const int width_column_1 = coordinates[0].first.size() > 2 ? coordinates[0].first.size() : 2;
    const int width_column_2 = coordinates.at(0).second.length() > 5 ? coordinates.at(0).second.length() : 5;

    // top border
    std::cout << "┌"
              << std::string(width_column_1, '-')
              << "┬"
              << std::string(width_column_2, '-')
              << "┐"
              << '\n';

    // table header
    std::cout << std::left
              << "|"
              << std::setw(width_column_1)
              << "x"
              << "|"
              << std::setw(width_column_2) << "f(x)"
              << "|"
              << std::endl;

    // middle border
    std::cout << "|"
              << std::string(width_column_1, '-')
              << "┼"
              << std::string(width_column_2, '-')
              << "|"
              << '\n';

    for (const auto &coord : coordinates)
    {
        // table row
        std::cout << std::left
                  << "|"
                  << std::setw(width_column_1)
                  << coord.first
                  << "|"
                  << std::setw(width_column_2)
                  << coord.second
                  << "|"
                  << std::endl;
    }

    // bottom border
    std::cout << "└"
              << std::string(width_column_1, '-')
              << "┴"
              << std::string(width_column_2, '-')
              << "┘"
              << '\n';
}
