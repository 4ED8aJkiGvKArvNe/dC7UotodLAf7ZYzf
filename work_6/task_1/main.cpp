#include <iostream>

#include "include/commons.h"
#include "task.cpp"

// main entry point
int main(int argc, char **argv)
{
    // ask user for a start number (float)
    float start;
    std::cout << "Enter a start point: ";
    std::cin >> start;

    // validate if the input is a number
    if (std::cin.fail())
    {
        std::cout << "Invalid input. Start point must be a float." << std::endl;
        return 1;
    }

    // ask user to enter an end number (float)
    float end;
    std::cout << "Enter an end point: ";
    std::cin >> end;

    // validate if the input is a number
    if (std::cin.fail())
    {
        std::cout << "Invalid input. End point must be a float." << std::endl;
        return 1;
    }

    // validate if the end point is greater than the start point
    if (end < start)
    {
        std::cout << "Invalid input. End point must be greater than the start point." << std::endl;
        return 1;
    }

    // ask user to enter a step (float)
    float step;
    std::cout << "Enter a step: ";
    std::cin >> step;

    // validate if the input is a number
    if (std::cin.fail())
    {
        std::cout << "Invalid input. Step must be a float." << std::endl;
        return 1;
    }

    // validate the step is a positive number (not zero)
    if (step <= 0)
    {
        std::cout << "Invalid input. Step must be a positive number." << std::endl;
        return 1;
    }

    // calculate the number of steps
    int steps = (end - start) / step;

    Coord min = calculate(start);
    Coord max = calculate(start);

    // iterate over the range and print the results
    for (int i = 0; i <= steps; i++)
    {
        double x = start + i * step;
        Coord coord = calculate(x);

        print_coordinate(coord);

        if (std::get<1>(coord) < std::get<1>(min))
        {
            min = coord;
        }
        if (std::get<1>(coord) > std::get<1>(max))
        {
            max = coord;
        }
    }

    std::cout << std::endl;
    std::cout << "Min: ";
    print_coordinate(min);

    std::cout << "Max: ";
    print_coordinate(max);

    return 0;
}
