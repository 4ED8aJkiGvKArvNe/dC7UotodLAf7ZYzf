#include <iostream>

#include "task.cpp"

void subtask_1(int from, int to);
void subtask_2(int from, int to);

// main entry point
int main(int argc, char **argv)
{
    int from, to;

    std::cout << "Subtask #1: Print all even number in the range." << std::endl;

    std::cout << "Enter the first number (from): ";
    std::cin >> from;

    std::cout << "Enter the second number (to): ";
    std::cin >> to;

    // all even numbers in the range
    subtask_1(from, to);

    // every third number in the range
    subtask_2(from, to);

    return 0;
}

void subtask_1(int from, int to)
{
    std::vector<int> result = get_even_numbers(from, to);

    if (result.size() == 0)
    {
        std::cout << "No even numbers found." << std::endl;
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

    return;
}

void subtask_2(int from, int to)
{
    std::vector<int> result = get_every_third_number(from, to);

    if (result.size() == 0)
    {
        std::cout << "No third number found." << std::endl;
    }
    else
    {
        std::cout << "Every third numbers: ";
        for (int i = 0; i < result.size(); i++)
        {
            std::cout << result[i] << " ";
        }
        std::cout << std::endl;
    }
}
