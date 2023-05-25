#ifndef _CONSTANTS_HPP_
#define _CONSTANTS_HPP_
#include <string>

extern const std::string UNDEFINED_TXT;
extern const int UNDEFINED;
extern const int ERROR;

//mappa
extern const int MAPGRIDSIZE;
//Parti del corpo
extern const int HEAD;
extern const int BODY;
extern const int R_ARM;
extern const int L_ARM;
extern const int LEGS;
extern const int TAIL;
extern const int WINGS;
extern const int HORNS;

extern const float HEAD_BLOOD;
extern const float BODY_BLOOD;
extern const float R_ARM_BLOOD;
extern const float L_ARM_BLOOD;
extern const float LEGS_BLOOD;
extern const float TAIL_BLOOD;
extern const float WINGS_BLOOD;
extern const float HORNS_BLOOD;

//Razze
extern const int HUMAN;
extern const int GOBLIN;
extern const int DRAGON;

extern const float HUMAN_BLOOD;
extern const float GOBLIN_BLOOD;
extern const float DRAGON_BLOOD;

//functions
int f_getBlood(int part_n, int race_n);

float f_PartBlood(int part_n);

float f_RaceBlood(int race_n);

int f_getCutDef(int material_n, int craftship_n, int race_n, int part_n);

int f_getBluntDef(int material_n, int craftship_n, int race_n, int part_n);

//mappa
char f_printWall(bool wallNEWS[4]);


#endif