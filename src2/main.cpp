#include <iostream>
#include "map.hpp"
#include "enums.hpp"
#include "splitmix64.h"

int main ()
{
    std::cout<<"Benvenuti ad avventura.dav";
    
    worldMap isleOfGoblins;
    isleOfGoblins.NAME="The isle of Goblins";
    isleOfGoblins.info();
    
    return 0;
};