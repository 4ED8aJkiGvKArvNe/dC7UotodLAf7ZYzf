#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

#include "task.cpp"

// print formatted 2D array
void print_matrix(int matrix[][10], int size)
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

int main() {
    // create 2D array of integers
    int matrix[10][10];

    // ceed the random number generator
    srand(time(0));

    // fill the 2D array with random integers from -100 to 100
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matrix[i][j] = rand() % 201 - 100;
        }
    }

    // print the random 2D array
    std::cout << "Generated 2D array (-100...100)" << std::endl;
    print_matrix(matrix, 10);

    int sum_array[10];
    sum_positive_numbers_2d(matrix, sum_array);

    // print the sum of all positive numbers in each row
    std::cout << "Sum of all positive numbers in each row" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << "Row " << i << ": " << sum_array[i] << std::endl;
    }

    return 0;
}
