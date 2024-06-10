#include <iostream>

/**
 * @brief Selection sort of elements in columns of a 2D array, ascending order
 */
int selection_sort_columns_asc(short (*matrix)[10], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            int min = j;
            for (int k = j + 1; k < size; k++)
            {
                if (matrix[k][i] < matrix[min][i])
                {
                    min = k;
                }
            }

            int temp = matrix[j][i];
            matrix[j][i] = matrix[min][i];
            matrix[min][i] = temp;
        }
    }

    return 0;
}
