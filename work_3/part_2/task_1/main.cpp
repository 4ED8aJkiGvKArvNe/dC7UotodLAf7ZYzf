#include <iostream>

#include "task.cpp"

// main entry point
int main(int argc, char **argv)
{
    int from, to;

    std::cout << "Enter the first number: ";
    std::cin >> from;

    std::cout << "Enter the second number: ";
    std::cin >> to;

    std::vector<int> result = get_even_numbers(from, to);

    if (result.size() == 0)
    {
        std::cout << "No even numbers found" << std::endl;
    }
    else
    {
        std::cout << "Even numbers: ";
        for (int i = 0; i < result.size(); i++)
        {
            std::cout << result[i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
