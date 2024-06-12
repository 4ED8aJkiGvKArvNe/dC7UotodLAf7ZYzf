#include <cmath>

double func_3(double x)
{
    return pow(x + pow(M_E, x) * pow(x + 1, 1.0/2.0), 1.0/4.0) + M_PI;
}
