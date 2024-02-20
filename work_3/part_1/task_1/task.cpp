#include <iostream>
#include <math.h>
#include <tuple>
#include <utility>  
#include <vector>

typedef std::pair<double, double> point;
typedef std::vector<point> point_list;

/**
 * @brief Enter X and Y coordinates of a point, return the point
*/
point enter_point()
{
    double x, y;
    std::cout << "Enter the x coordinate: ";
    std::cin >> x;
    std::cout << "Enter the y coordinate: ";
    std::cin >> y;

    std::cout << "The point is: (" << x << ", " << y << ")" << std::endl;

    return std::make_pair(x, y);
}

/**
 * @brief Calculate the distance between two points
*/
double distance_between_points(point point_a, point point_b)
{
    double distance = sqrt(pow(point_b.first - point_a.first, 2) + pow(point_b.second - point_a.second, 2));

    std::cout << "The distance between the points ("
    << point_a.first
    << ", "
    << point_a.second
    << ") and ("
    << point_b.first
    << ", "
    << point_b.second
    << ")  is: " << distance << std::endl;

    return distance;
}

/**
 * @brief Defines the largest segments
 */
std::tuple<double, point, point> largest_segment(point_list point_list)
{
    // store the largest distance and the points
    double largest_distance = 0;
    point largest_distance_points[2];
    
    // find the largest distance
    for (int i = 0; i < point_list.size(); i++)
    {
        for (int j = i + 1; j < point_list.size(); j++)
        {
            double distance = distance_between_points(point_list[i], point_list[j]);
            if (distance > largest_distance)
            {
                // store intermediate results
                largest_distance = distance;
                largest_distance_points[0] = point_list[i];
                largest_distance_points[1] = point_list[j];
            }
        }
    }

    return std::make_tuple(largest_distance, largest_distance_points[0], largest_distance_points[1]);
}
