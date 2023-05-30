#ifndef _ENUMS_HPP_
#define _ENUMS_HPP_
#include <string>

enum COSTANTS : int 
{
    YGRIDSIZE = 5,
    XGRIDSIZE = 10,
    YWORLDGRIDSIZE = 20,
    XWORLDGRIDSIZE = 40,
    MAXTHINGS = 20

};

enum RACE_N : int 
{
    HUMAN = 1,
    GOBLIN = 2,
    DRAGON = 3,
};

enum PART_N : int 
{
    HEAD = 1,
    BODY = 2,
    RARM = 3,
    LARM = 4,
    LEGS = 5,
    TAIL = 6,
    WINGS = 7,
    HORNS = 8,
};

enum SPRITES : uint8_t
{
    EMPTY = 0,
    FULL= 1,
    GOBLIN_S=2,
    TREE=3
};
//funzioni
std::string f_raceSTR (int race_n);
void f_printSprite (SPRITES sprite);

#endif