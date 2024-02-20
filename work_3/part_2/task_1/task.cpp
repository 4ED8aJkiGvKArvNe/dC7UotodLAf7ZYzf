#include <iostream>
#include <vector>

/**
 * @brief Returns even numbers in the given range
 */
std::vector<int> get_even_numbers(int from, int to)
{
    if (from > to)
    {
        std::swap(from, to);
    }

    if (from == to)
    {
        if (from % 2 == 0)
        {
            return std::vector<int>{from};
        }
        return std::vector<int>();
    }

    if (from % 2 != 0)
    {
        from++;
    }

    const int arr_size = (to - from) / 2 + 1;
    std::vector<int> even_numbers(arr_size);

    for (int i = from; i <= to; i += 2)
    {
        even_numbers[(i - from) / 2] = i;
    }

    return even_numbers;
}
