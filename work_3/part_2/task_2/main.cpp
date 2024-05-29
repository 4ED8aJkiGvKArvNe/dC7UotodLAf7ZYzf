#include <iomanip>
#include <iostream>
#include <stdexcept>

#include "task.cpp"
#include "include/commons.h"

// main entry point
int main(int argc, char **argv)
{
    double a;
    std::cout << "Enter a: ";
    std::cin >> a;

    double b;
    std::cout << "Enter b: ";
    std::cin >> b;

    double c;
    std::cout << "Enter c: ";
    std::cin >> c;

    double x_start;
    std::cout << "Enter x_start: ";
    std::cin >> x_start;

    double x_end;
    std::cout << "Enter x_end: ";
    std::cin >> x_end;

    double dx;
    std::cout << "Enter dx: ";
    std::cin >> dx;

    coord_list results = calculate_function(a, b, c, x_start, x_end, dx, 5);

    print_table(results);

    return 0;
}
