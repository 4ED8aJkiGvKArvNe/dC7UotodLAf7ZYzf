#include <cstdlib>
#include <ctime>
#include <iostream>

#include "task.cpp"

// main entry point
int main(int argc, char **argv)
{
    // ask user to enter the size of the array
    std::cout << "Enter the size of the array (1-20): ";
    int size;
    std::cin >> size;
    
    // validate if the size is an integer
    if (std::cin.fail())
    {
        std::cout << "Invalid input. Size must be an integer." << std::endl;
        return 1;
    }

    // validate if the size is within the allowed range
    if (size < 1 || size > 20)
    {
        std::cout << "Invalid input. Size must be between 1 and 10." << std::endl;
        return 1;
    }

    // ceed the random number generator
    srand(time(0));

    // fill the array with random integers from -100 to 100
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 201 - 100;
    }

    // print the random array
    std::cout << "Generated array (-100...100)" << std::endl;
    std::cout << "Random: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    bubble_sort_desc(arr, size);

    // print the sorted array
    std::cout << "Sorted: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // ask user to enter the number to search
    std::cout << "Enter the number to search: ";
    int number;
    std::cin >> number;

    // validate if the number is an integer
    if (std::cin.fail())
    {
        std::cout << "Invalid input. Number must be an integer." << std::endl;
        return 1;
    }

    // search the number in the array
    int index = linear_search(arr, size, number);

    if (index == -1) {
        std::cout << "Number not found" << std::endl;
    } else {
        std::cout << "Number found at index " << index << std::endl;
    }

    return 0;
}
