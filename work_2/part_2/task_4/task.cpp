#include <iostream>
#include <math.h>

/**
 * @brief Calculate the value of the function
 */
double calculate_function_value(double x)
{
    if (x < 0.1)
    {
        return sqrt(abs(x + pow(cos(x - 1), 2)));
    }
    else if (x >= 0.1 && x <= 0.5)
    {
        return sin(abs(x - pow(M_E, x)));
    }
    return tan(sqrt(x)) + x;
}
