#include "thing.hpp"

const std::string UNDEFINED_TXT = "Non definito";

//thing constructor
thing::thing(){};

armour::armour ()
{
    this->EQUIPPABLE=true;
    this->NAME ="UNDEFINED ARMOUR";
};

helmet::helmet (int material_n, int craftship_n, int race_n)
{
    this->PART_TYPE=HEAD;
    this->CUT_DEF=f_getCutDef(material_n,craftship_n,race_n,HEAD);
    this->BLUNT_DEF=f_getBluntDef(material_n,craftship_n,race_n,HEAD);
};