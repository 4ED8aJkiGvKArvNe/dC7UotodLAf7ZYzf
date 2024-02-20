#include <iostream>

/**
 * @brief Check if number is positive
 * @return 1 if number is positive, -1 if number is not positive, 0 if number is 0
 */
int number_sign(int number)
{
    if (number == 0)
    {
        return 0;
    }

    if (number > 0)
    {
        return 1;
    }

    return -1;
}
