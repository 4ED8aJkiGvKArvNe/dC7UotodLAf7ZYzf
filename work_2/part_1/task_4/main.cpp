#include <iostream>

#include "task.cpp"

// main entry point
int main(int argc, char **argv)
{
    int number_a;

    std::cout << "Enter a number: ";
    std::cin >> number_a;

    int result = abs_value(number_a);
    std::cout << "The absolute value is: " << result << std::endl;

    return 0;
}
