#include <iostream>

#include "task.cpp"

// main entry point
int main(int argc, char **argv)
{
    int number_a, number_b, number_c;

    std::cout << "Enter the first number: ";
    std::cin >> number_a;

    std::cout << "Enter the second number: ";
    std::cin >> number_b;

    std::cout << "Enter the third number: ";
    std::cin >> number_c;

    int result = max_number(number_a, number_b, number_c);

    std::cout << "The maximum number is: " << result << std::endl;

    return 0;
}
