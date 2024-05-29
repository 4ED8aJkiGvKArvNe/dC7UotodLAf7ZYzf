#ifndef COMMONS_H
#define COMMONS_H

// #include <string>

// #include <exception>
#include <vector>

struct bad_denominator : public std::exception
{
  const char *what() const throw()
  {
    return "division by zero in divide";
  }
};

typedef std::pair<std::string, std::string> coord_string;
typedef std::vector<coord_string> coord_list;

#endif
