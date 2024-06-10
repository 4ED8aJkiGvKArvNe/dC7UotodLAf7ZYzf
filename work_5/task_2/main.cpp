#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

#include "task.cpp"

// print formatted 2D array
void print_matrix(short matrix[][10], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Row " << i << ": ";
        for (int j = 0; j < size; j++)
        {
            std::cout << std::setw(3) << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// main entry point
int main(int argc, char **argv)
{
    // ask user to enter the size of the 2D array
    std::cout << "Enter the size of the 2D array (1-10): ";
    int size;
    std::cin >> size;

    // validate if the size is an integer
    if (std::cin.fail())
    {
        std::cout << "Invalid input. Size must be an integer." << std::endl;
        return 1;
    }

    // validate if the size is within the allowed range
    if (size < 1 || size > 10)
    {
        std::cout << "Invalid input. Size must be between 1 and 10." << std::endl;
        return 1;
    }

    // ceed the random number generator
    srand(time(0));

    // fill the 2D array with random short int from -34 to 80
    short matrix[10][10];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            matrix[i][j] = rand() % 115 - 34;
        }
    }

    // print the random 2D array
    std::cout << "Generated 2D array (-100...100)" << std::endl;
    print_matrix(matrix, size);

    selection_sort_columns_asc(matrix, size);

    // print the sorted 2D array
    std::cout << "Sorted 2D array" << std::endl;
    print_matrix(matrix, size);

    return 0;
}
