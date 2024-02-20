#include <iostream>
#include "task.cpp"

// main entry point
int main(int argc, char **argv)
{
    std::cout << "Enter a number: ";
    int number;
    std::cin >> number;

    int result = number_sign(number);

    if (result == 0)
    {
        std::cout << "Number is neither positive nor negative" << std::endl;
        return 0;
    }

    if (number > 0)
    {
        std::cout << "Number is positive" << std::endl;
        return 0;
    }

    std::cout << "Number is negative" << std::endl;
    return 0;
}
