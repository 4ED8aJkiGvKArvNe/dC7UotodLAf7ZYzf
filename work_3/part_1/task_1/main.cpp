#include <iostream>

#include "task.cpp"

// main entry point
int main(int argc, char **argv)
{
    point_list point_list;

    std::cout << "Define coordinates of the first point: " << std::endl;
    point_list.push_back(enter_point());

    std::cout << "Define coordinates of the second point: " << std::endl;
    point_list.push_back(enter_point());

    std::cout << "Define coordinates of the third point: " << std::endl;
    point_list.push_back(enter_point());

    std::tuple<double, point, point> result = largest_segment(point_list);

    double largest_distance = std::get<0>(result);
    point point_a = std::get<1>(result);
    point point_b = std::get<1>(result);

    std::cout << "The largest distance is: " << largest_distance << std::endl;
    std::cout << "The points with the largest distance are: ("
    << point_a.first
    << ", " 
    << point_a.second
    << ") and ("
    << point_b.first
    << ", "
    << point_b.second
    << ")" << std::endl;

    return 0;
}
