#include <iostream>

int find_max(int* arr, int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int find_positive_indexes(int* arr, int size, int* indexes)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            indexes[count] = i;
            count++;
        }
    }

    return count;
}
