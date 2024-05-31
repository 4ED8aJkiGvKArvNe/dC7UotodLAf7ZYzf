#include <iostream>

#include "./task.cpp"

// main entry point
int main(int argc, char **argv)
{
    // enter the size of the matrix
    std::cout << "Enter the size of the matrix," << std::endl;

    // number of columns
    std::cout << "number of columns (1-10): ";
    int col_size;
    std::cin >> col_size;

    // check if the number is within the allowed range
    if (col_size < 1 || col_size > 10)
    {
        std::cout << "Invalid number" << std::endl;
        return 1;
    }

    // number of rows
    std::cout << "number of rows (1-10): ";
    int row_size;
    std::cin >> row_size;

    // check if the number is within the allowed range
    if (row_size < 1 || row_size > 10)
    {
        std::cout << "Invalid number" << std::endl;
    }

    // fill the matrix
    std::cout << "Fill the matrix with integers: " << std::endl;
    int matrix[10][10];
    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < col_size; j++) 
        {
            std::cout << "[" << i << "][" << j <<"] ";
            std::cin >> matrix[i][j];
            // check if the element is an integer
            if (std::cin.fail())
            {
                std::cout << "Invalid element" << std::endl;
                return 1;
            }
        }
    }

    /* Find the maximum element of the matrix */

    int result[row_size];
    find_min_array(matrix, col_size, row_size, result);

    std::cout << "The minimum elements are: " << std::endl;
    for (int i = 0; i < row_size; i++)
    {
        std::cout << "row " << i << " : " << result[i] << std::endl;
    }


    return 0;
}
