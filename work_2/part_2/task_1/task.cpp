#include <iostream>

/**
 * @brief Determine the quarter of the coordinate system
 */
int define_quarter(int x, int y)
{
    if (x > 0 && y > 0)
    {
        return 1;
    }
    else if (x < 0 && y > 0)
    {
        return 2;
    }
    else if (x < 0 && y < 0)
    {
        return 3;
    }
    else if (x > 0 && y < 0)
    {
        return 4;
    }

    return 0;
}
