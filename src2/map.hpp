#ifndef _MAP_HPP_
#define _MAP_HPP_
#include <string>
#include "enums.hpp"
#include "thing.hpp"

class cell {
public:
    cell();
    cell(int y_n, int x_n, bool full_b);
    ~cell();
    int Y;
    int X;
    bool FULL;
    thing CONTAINER[MAXTHINGS];
    int THING_N = 0;
};

class map {
public:
    map();
    ~map();
    map(bool yx_b[YGRIDSIZE][XGRIDSIZE],std::string name_str);

    void info();
    std::string NAME = "UNDEFINED";
    cell GRID [YGRIDSIZE][XGRIDSIZE];
};

class worldMap {
public:
    worldMap();
    ~worldMap();

    void info();
    std::string NAME = "UNDEFINED";
    SPRITES GRID_S [YWORLDGRIDSIZE][XWORLDGRIDSIZE]={EMPTY};
    map GRID [YWORLDGRIDSIZE][XWORLDGRIDSIZE];
};
#endif