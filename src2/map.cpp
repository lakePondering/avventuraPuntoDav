#include "map.hpp"
#include <iostream>
map::map()
{
    for (int y = 0; y < GRIDSIZE; y++)
    {
    for (int x = 0; x < GRIDSIZE; x++)
    {
        this->GRID[y][x]= new cell(y,x,false);
    }    
    }
};
map::~map()
{
    for (int y = 0; y < GRIDSIZE; y++)
    {
    for (int x = 0; x < GRIDSIZE; x++)
    {
        delete GRID[y][x];
    }    
    }
};

cell::cell()
{};
cell::cell(int y_n, int x_n, bool full_b)
{
    this->X=x_n;
    this->Y=y_n;
    this->FULL=full_b;
};

void map::info()
{
    char16_t _out;
    bool _Barray[4];
    std::cout<<"\n Info "<<this->NAME;
    for (int y = 0; y < GRIDSIZE; y++)
    {
        std::cout<<"\n";
    for (int x = 0; x < GRIDSIZE; x++) //FACCIO UN ARRAY CON 4 VALORI E CI INSERISCO SE A NEWS CI SONO MURI, POI STAMPO
    {
        if (y>0) {_Barray[0]=this->GRID[y-1][x]->FULL;
        }else{_Barray[0]=true;}

        if (x<GRIDSIZE) {_Barray[1]=this->GRID[y][x+1]->FULL;
        }else{_Barray[1]=true;}   

        if (x>0) {_Barray[2]=this->GRID[y][x-1]->FULL;
        }else{_Barray[2]=true;}    
        
        if (y<GRIDSIZE) {_Barray[3]=this->GRID[y+1][x]->FULL;
        }else{_Barray[3]=true;}

        std::wcout<<(char16_t)_out;
    }    
    }
};