#include "constants.hpp"
#include <string>

extern const std::string UNDEFINED_TXT ="UNDEFINED";
extern const int UNDEFINED = -1;
extern const int ERROR = -10000;

//mappa
extern const int MAPGRIDSIZE = 20;
//Parti del corpo
extern const int HEAD = 1;
extern const int BODY = 2;
extern const int R_ARM = 3;
extern const int L_ARM = 4;
extern const int LEGS = 5;
extern const int TAIL = 6;
extern const int WINGS = 7;
extern const int HORNS = 8;

extern const float HEAD_BLOOD = 0.1;
extern const float BODY_BLOOD = 0.4;
extern const float R_ARM_BLOOD = 0.2;
extern const float L_ARM_BLOOD = 0.2;
extern const float LEGS_BLOOD = 0.4;
extern const float TAIL_BLOOD = 0.2;
extern const float WINGS_BLOOD = 0.2;
extern const float HORNS_BLOOD = 0.05;

//Razze
extern const int HUMAN = 1;
extern const int GOBLIN = 2;
extern const int DRAGON = 3;

extern const float HUMAN_BLOOD = 4000;
extern const float GOBLIN_BLOOD = 1000;
extern const float DRAGON_BLOOD = 20000;

//MATERIALI
extern const int WOOD = 1;
extern const int IRON = 2;
extern const int DIAMOND = 3;

extern const int WOOD_CUT_DEF = 2;
extern const int WOOD_BLUNT_DEF = 1;

extern const int IRON_CUT_DEF = 4;
extern const int IRON_BLUNT_DEF = 4;

extern const int DIAMOND_CUT_DEF = 10;
extern const int DIAMOND_BLUNT_DEF = 10;

//functions
int f_getBlood(int part_n, int race_n)
{
    return f_PartBlood(part_n)*f_RaceBlood(race_n);
};

float f_PartBlood(int part_n)
{
    if (part_n == HEAD) { return HEAD_BLOOD;}
    if (part_n == BODY) { return BODY_BLOOD;}
    if (part_n == R_ARM) { return R_ARM_BLOOD;}
    if (part_n == L_ARM) { return L_ARM_BLOOD;}
    if (part_n == LEGS) { return LEGS_BLOOD;}
    if (part_n == TAIL) { return TAIL_BLOOD;}
    if (part_n == WINGS) { return WINGS_BLOOD;}
    if (part_n == HORNS) { return HORNS_BLOOD;}
    if (part_n == UNDEFINED) { return UNDEFINED;}
    return ERROR;
};

float f_RaceBlood(int race_n)
{
    if (race_n == HUMAN) { return HUMAN_BLOOD;}
    if (race_n == GOBLIN) { return GOBLIN_BLOOD;}
    if (race_n == DRAGON) { return DRAGON_BLOOD;}
    if (race_n == UNDEFINED) { return UNDEFINED;}
    return ERROR;
};

int f_getCutDef(int material_n, int craftship_n, int race_n, int part_n)
{
    return 5;//dafare
};

int f_getBluntDef(int material_n, int craftship_n, int race_n, int part_n)
{
    return 5;//dafare
};

int f_materialCutDef(int material_n)
{
    if (material_n == WOOD){return WOOD_CUT_DEF;}
    if (material_n == IRON){return IRON_CUT_DEF;}
    if (material_n == DIAMOND){return DIAMOND_CUT_DEF;}

};

int f_materialBluntDef (int material_n)
{
    if (material_n == WOOD){return WOOD_BLUNT_DEF;}
    if (material_n == IRON){return IRON_BLUNT_DEF;}
    if (material_n == DIAMOND){return DIAMOND_BLUNT_DEF;}
};


//mappa
char f_printWall(bool wallNEWS[4])
{
    if (wallNEWS[0]) //N OPEN
    {
        if(wallNEWS[1]) //E OPEN
        {
            if(wallNEWS[2]) //W OPEN
            {
                if(wallNEWS[3]) //S OPEN
                {
                    return 206;
                }else{
                    return 202;
                }
            }else{
                if(wallNEWS[3])
                {
                    return 204;
                }else{
                    return 200;
                }
            }
        }else{
           if(wallNEWS[2])
            {
                if(wallNEWS[3])
                {
                    return 185;
                }else{
                    return 188;
                }
            }else{
                if(wallNEWS[3])
                {
                    return 186;
                }else{
                    return 254;
                }
            }
        }
    }else{
        if(wallNEWS[1]) //E OPEN
        {
            if(wallNEWS[2]) //W OPEN
            {
                if(wallNEWS[3]) //S OPEN
                {
                    return 203;
                }else{
                    return 205;
                }
            }else{
                if(wallNEWS[3])
                {
                    return 201;
                }else{
                    return 254;
                }
            }
        }else{
           if(wallNEWS[2])
            {
                if(wallNEWS[3])
                {
                    return 187;
                }else{
                    return 254;
                }
            }else{
                if(wallNEWS[3])
                {
                    return 254;
                }else{
                    return 219;
                }
            }
        }
    }
};