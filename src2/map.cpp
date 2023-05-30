#include "map.hpp"
#include <iostream>
map::map()
{
    for (int y = 0; y < YGRIDSIZE; y++)
    {
    for (int x = 0; x < XGRIDSIZE; x++)
    {
        this->GRID[y][x]= cell(y,x,false);
    }    
    }
};
map::~map()
{

};
map::map(bool yx_b[YGRIDSIZE][XGRIDSIZE],std::string name_str)
{
    this->NAME=name_str;
    for (int y = 0; y < YGRIDSIZE; y++)
    {
    for (int x = 0; x < XGRIDSIZE; x++)
    {
        this->GRID[y][x]= cell(y,x,yx_b[y][x]);
    }    
    }
};

void map::info()
{
    std::cout<<"\n Info "<<this->NAME;
    for (int y = 0; y < YGRIDSIZE; y++)
    {
        std::cout<<"\n ";

    for (int x = 0; x < XGRIDSIZE; x++)
    {
        if (this->GRID[y][x].FULL)
        {
            f_printSprite(FULL);
        }else{if(this->GRID[y][x].CONTAINER[0].SPRITE == EMPTY)
        {
            f_printSprite(EMPTY);
        }else{
            f_printSprite(this->GRID[y][x].CONTAINER[0].SPRITE); 
        }
        } 
    }
    }
};

cell::cell()
{
    for (int i = 0; i < MAXTHINGS; i++)
    {
        this->CONTAINER[i]= thing();
    }
    
};
cell::~cell()
{

};
cell::cell(int y_n, int x_n, bool full_b)
{
    this->X=x_n;
    this->Y=y_n;
    this->FULL=full_b;
};



worldMap::worldMap()
{
    for (int y = 0; y < YGRIDSIZE; y++)
    {
    for (int x = 0; x < XGRIDSIZE; x++)
    {
        this->GRID[y][x]= map();
    }    
    }
};
worldMap::~worldMap()
{};

void worldMap::info()
{
    std::cout<<"\n Info "<<this->NAME;
    for (int y = 0; y < YWORLDGRIDSIZE; y++)
    {
    std::cout<<"\n ";

    for (int x = 0; x < XWORLDGRIDSIZE; x++)
    {
        f_printSprite(this->GRID_S[y][x]);
    }   
    }
};