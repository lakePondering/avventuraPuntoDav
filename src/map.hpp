#ifndef _MAP_HPP_
#define _MAP_HPP_
#include "constants.hpp"
//#include "creature.hpp"

class cell
{
public:
    cell ();
    cell (int y_n,int x_n);
    cell (int x_n,int y_n,bool n_b,bool e_b,bool w_b, bool s_b);
    int X=0;
    int Y=0;
    bool WALLNEWS [4]= {false,false,false,false};
/*    thing* THINGS [20];
    creature* CREATURES [5];*/
};

class map 
{
public:
    map();
    ~map();

    void info();
    void addWall(int x_n,int y_n, int posit_n);

    void checkCells();
    std::string NAME;
    cell* GRID [20][20];
};



#endif