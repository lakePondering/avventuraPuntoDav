#include "enums.hpp"

//funzioni
std::string f_raceSTR (int race_n)
{
    RACE_N _race_enum = (RACE_N) race_n;
    std::string _race_name;
    switch (race_n)
    {
    case HUMAN:
    _race_name = "Human";
    break;
    case GOBLIN:
    _race_name = "Goblin";
    default:
    _race_name = "DEFAULT";
    break;
    }
    return _race_name;
};
