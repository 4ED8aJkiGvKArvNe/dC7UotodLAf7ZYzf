#include <iostream>

// function to find a minimum element in each row of the matrix
void find_min_array(int (*matrix)[10], int row_size, int col_size, int *array_of_mins)
{
    // iterate over the rows
    for (int i = 0; i < row_size; i++)
    {
        // set the initial minimum value to the first element of the row
        int min = matrix[i][0];
        // iterate over the columns
        for (int j = 1; j < col_size; j++)
        {
            // update the minimum value if a smaller element is found
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
        }
        // store the minimum value for the row
        array_of_mins[i] = min;
    }
}
