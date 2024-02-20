#include <iostream>

/**
 * @brief Convert points to grade.
 * A - 90-100
 * B - 85-89
 * C - 75-84
 * D - 70-74
 * E - 60-69
 * FX - 35-59
 * F - 1-34
 */
std::string points_to_grade(int points)
{
    switch (points)
    {
    case 90 ... 100:
        return "A";
    case 85 ... 89:
        return "B";
    case 75 ... 84:
        return "C";
    case 70 ... 74:
        return "D";
    case 60 ... 69:
        return "E";
    case 35 ... 59:
        return "FX";
    case 1 ... 34:
        return "F";
    default:
        return "Invalid points";
    }
}
