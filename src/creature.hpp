#ifndef _CREATURE_HPP_
#define _CREATURE_HPP_
#include <iostream>
#include <string>
#include "constants.hpp"
#include "thing.hpp"

class creature
{
public:
    creature ();

    std::string NAME = UNDEFINED_TXT;
    bool NPC = true;
    bool SEX = true; //true = male
    int BLOOD = 0;
    int BLOODLOSS = 0;
    int AGE = 0;
    int RACE = 0;
    part* PARTS[10];
    thing* INVENTORY[10];
};

class part
{
public:
    part ();
    
    int TYPE = 0;
    int RACE = 0;
    int BLOOD = 0;
    int BLOODLOSS = 0;
    bool EQUIPPABLE = false;
    armour* EQUIPMENT;
};

//BODYPARTS
class head : public part 
{
    head(int race_n = UNDEFINED);
};
class body : public part
{
    body(int race_n = UNDEFINED);
};
class rarm : public part
{
    rarm(int race_n = UNDEFINED);
};
class larm : public part
{
    larm(int race_n = UNDEFINED);
};
class legs : public part
{
    legs(int race_n = UNDEFINED);
};
class tail : public part
{
    tail(int race_n = UNDEFINED);
};
class wings : public part
{
    wings(int race_n = UNDEFINED);
};
class horns : public part
{
    horns(int race_n = UNDEFINED);
};

#endif