#include <iostream>

/**
 * @brief Bubble sort of an array of integers, descending order
 */
int bubble_sort_desc(int* arr, int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return 0;
}

/**
 * @brief Find the elemet in the array of integers using linear search
 */
int linear_search(int* arr, int size, int number)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            return i;
        }
    }

    return -1;
}
