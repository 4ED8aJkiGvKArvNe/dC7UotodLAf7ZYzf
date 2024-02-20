#include <iostream>

/**
 * @brief Print the maximum number
 */
int max_number(int number_a, int number_b, int number_c)
{
    return std::max(number_a, std::max(number_b, number_c));
}
