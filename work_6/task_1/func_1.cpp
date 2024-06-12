#include <cmath>
#include <iostream>
#include <iomanip>

double func_1(double x)
{
    return x - cbrt(fabs(sin(sqrt(fabs(x)))));
}
