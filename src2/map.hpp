#ifndef _MAP_HPP_
#define _MAP_HPP_
#include <string>
#include "enums.hpp"

class cell {
public:
    cell();
    cell(int y_n, int x_n, bool full_b);
    int Y;
    int X;
    bool FULL;
};

class map {
public:
    map();
    ~map();

    void info();
    std::string NAME;
    cell* GRID [(int)GRIDSIZE][(int)GRIDSIZE];
};


#endif