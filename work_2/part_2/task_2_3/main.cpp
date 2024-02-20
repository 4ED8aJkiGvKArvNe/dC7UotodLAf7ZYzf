#include <iostream>

#include "task.cpp"

// main entry point
int main(int argc, char **argv)
{
    int points;
    std::cout << "Enter points: ";
    std::cin >> points;

    std::string result = points_to_grade(points);

    std::cout << "The grade is: " << result << std::endl;

    return 0;
}
