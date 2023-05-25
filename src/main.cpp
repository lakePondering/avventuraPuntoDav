#include <iostream>
#include <string>
#include "map.hpp"

int main ()
{
    map Alkazart;
    Alkazart.NAME="Alkazart";
    Alkazart.info();
    Alkazart.info();
    Alkazart.addWall(3,4,2);
    Alkazart.~map();
};