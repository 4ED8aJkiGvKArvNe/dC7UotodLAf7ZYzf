#include <iostream>

#include "task.cpp"

// main entry point
int main(int argc, char **argv)
{
    // enter the size of the array
    std::cout << "Enter the size of the array (1-10): ";
    int size;
    std::cin >> size;

    // check if the size is within the allowed range
    if (size < 1 || size > 10)
    {
        std::cout << "Invalid size" << std::endl;
        return 1;
    }

    // fill the array
    std::cout << "Fill the array with integers: " << std::endl;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        std::cin >> array[i];
        // check if the element is an integer
        if (std::cin.fail())
        {
            std::cout << "Invalid element" << std::endl;
            return 1;
        }
    }

    /* Find the maximum element of the array */

    int result = find_max(array, size);

    std::cout << "The maximum element is: " << result << std::endl;

    /* Find indexes of positive elements of the array */

    int positive_indexes[size];
    int positive_count = find_positive_indexes(array, size, positive_indexes);

    std::cout << "Positive elements are at indexes: ";
    for (int i = 0; i < positive_count; i++)
    {
        std::cout << positive_indexes[i] << " ";
    }

    return 0;
}
