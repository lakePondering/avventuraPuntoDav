#include "creature.hpp"

creature::creature(){};

part::part(){};

//BODYPARTS
head::head(int race_n)
{
    this->TYPE=HEAD;
    this->RACE=race_n;
    this->EQUIPPABLE=true;
    this->BLOOD=f_getBlood(HEAD,race_n);
    this->EQUIPMENT; //dafare
};
body::body(int race_n)
{
    this->TYPE=BODY;
    this->RACE=race_n;
    this->EQUIPPABLE=true;
    this->BLOOD=f_getBlood(BODY,race_n);
    this->EQUIPMENT; //dafare
};
rarm::rarm(int race_n)
{
    this->TYPE=R_ARM;
    this->RACE=race_n;
    this->EQUIPPABLE=true;
    this->BLOOD=f_getBlood(R_ARM,race_n);
    this->EQUIPMENT; //dafare
};
larm::larm(int race_n)
{
    this->TYPE=L_ARM;
    this->RACE=race_n;
    this->EQUIPPABLE=true;
    this->BLOOD=f_getBlood(L_ARM,race_n);
    this->EQUIPMENT; //dafare
};
legs::legs(int race_n)
{
    this->TYPE=LEGS;
    this->RACE=race_n;
    this->EQUIPPABLE=true;
    this->BLOOD=f_getBlood(LEGS,race_n);
    this->EQUIPMENT; //dafare
};
tail::tail(int race_n)
{
    this->TYPE=TAIL;
    this->RACE=race_n;
    this->EQUIPPABLE=true;
    this->BLOOD=f_getBlood(TAIL,race_n);
    this->EQUIPMENT; //dafare
};
wings::wings(int race_n)
{
    this->TYPE=WINGS;
    this->RACE=race_n;
    this->EQUIPPABLE=true;
    this->BLOOD=f_getBlood(WINGS,race_n);
    this->EQUIPMENT; //dafare
};
horns::horns(int race_n)
{
    this->TYPE=HORNS;
    this->RACE=race_n;
    this->EQUIPPABLE=false;
    this->BLOOD=f_getBlood(HORNS,race_n);
    this->EQUIPMENT; //dafare
};
