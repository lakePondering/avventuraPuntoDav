#ifndef _MAP_HPP_
#define _MAP_HPP_
#include <string>
#include "enums.hpp"

class map {
public:
    map();

    std::string NAME;
    cell* GRID [(int)GRIDSIZE][(int)GRIDSIZE];
};

class cell {
    
};
#endif