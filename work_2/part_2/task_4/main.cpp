#include <iostream>

#include "task.cpp"

// main entry point
int main(int argc, char **argv)
{
    double x;
    std::cout << "Task function is #5" << std::endl;
    std::cout << "Enter X: ";
    std::cin >> x;

    double result = calculate_function_value(x);

    std::cout << "The value of the function is: " << result << std::endl;

    return 0;
}
