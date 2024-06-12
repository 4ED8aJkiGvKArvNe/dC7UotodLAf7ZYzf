#include <iostream>

/**
 * @brief Calculate the sum of all positive numbers in the array
 */
int sum_positive_numbers_row(int arr[10])
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > 0)
        {
            sum += arr[i];
        }
    }
    return sum;
}

/**
 * @brief Calculates the sum of all positive numbers in each row of the 2D array
 */
void sum_positive_numbers_2d(int matrix[10][10], int sum_array[10])
{
    for (int i = 0; i < 10; i++)
    {
        sum_array[i] = sum_positive_numbers_row(matrix[i]);
    }
}
