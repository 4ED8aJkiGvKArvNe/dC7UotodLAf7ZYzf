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

    std::vector<int> even_numbers = {};

    for (int i = from; i <= to; i += 2)
    {
        even_numbers.push_back(i);
    }

    return even_numbers;
}

/**
 * @brief Returns even numbers in the given range
 */
std::vector<int> get_every_third_number(int from, int to)
{
    if (from > to)
    {
        std::swap(from, to);
    }

    if (to - from < 2)
    {
        return std::vector<int>();
    }

    std::vector<int> every_third_number = {};

    for (int i = from + 2; i <= to; i += 3)
    {
        every_third_number.push_back(i);
    }

    return every_third_number;
}
