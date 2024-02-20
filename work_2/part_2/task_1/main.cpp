#include <iostream>

#include "task.cpp"

// main entry point
int main(int argc, char **argv)
{
    int x, y;

    std::cout << "Enter X coordinate: ";
    std::cin >> x;

    std::cout << "Enter Y coordinate: ";
    std::cin >> y;

    int result = define_quarter(x, y);
    
    std::cout << "The quarter of the coordinate system is: " << result << std::endl;

    return 0;
}
