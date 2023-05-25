#include <iostream>
#include <string>
#include "constants.hpp"

class thing
{
public:
    thing ();
    std::string NAME = UNDEFINED_TXT;
    int MATERIAL = 0;
    bool EQUIPPABLE = false;
    int VALUE = 0;
    int SIZE = 0;
    int WEIGHT = 0;
};

class armour : public thing
{
public:
    armour ();
    int CUT_DEF = 0;
    int BLUNT_DEF = 0;
    int PART_TYPE = 0;
};

class helmet : public armour
{
    helmet(int material_n, int craftship_n, int race_n);
};