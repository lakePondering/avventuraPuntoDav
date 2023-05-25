#ifndef _ENUMS_HPP_
#define _ENUMS_HPP_
#include <string>

enum COSTANTS : int 
{
    GRIDSIZE = 20,
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

enum class Tiles : int16_t //FALLO IN UNICODE
{
    EMPTY = 206,    //NEWS
    FULL = 219,     //

    N = 118,
    NE = 200,
    NW = 188,
    NS = 186,
    NEW = 202,
    NES = 204,
    NWS = 185,

    E = 60,
    EW = 205,
    ES = 201,
    EWS = 203,

    W = 62,
    WS = 187,

    S = 94,
};

//funzioni
std::string f_raceSTR (int race_n);
char16_t f_getTile (bool n_b,bool e_b,bool w_b,bool s_b);
#endif