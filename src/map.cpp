//map.cpp
#include "map.hpp"
#include <iostream>
const int GRIDSIZE = 100;
const int MAXTHINGS = 20;

map::map()
{
    this->NAME =UNDEFINED_TXT;

    for (int y=0;y<GRIDSIZE;y++)
    {
        for (int x=0;x<GRIDSIZE;x++)
        {
            this->GRID[y][x]= new cell(y,x);
        }
    }
};
map::~map()
{
    this->NAME="DESTROYED_MAP";
    for (int y=0;y<GRIDSIZE;y++)
    {
        for (int x=0;x<GRIDSIZE;x++)
        {
            delete this->GRID[y][x];
        }
    }
};

void map::addWall(int x_n,int y_n, int posit_n)
{
    if (posit_n>=0 && posit_n<=3)
    {
        this->GRID[y_n][x_n]->WALLNEWS[posit_n]=false;
    }
};

void map::info()
{
    std::cout<<"\n Mappa di "<<this->NAME;
    for (int y=0;y<GRIDSIZE;y++)
    {
        std::cout<<"\n" ;
        for (int x=0;x<GRIDSIZE;x++)
        {
            std::cout<<f_printWall(this->GRID[y][x]->WALLNEWS);
        }
    }
};
void map::checkCells()
{
    for (int y=0;y<GRIDSIZE;y++)
    {
        for (int x=0;x<GRIDSIZE;x++)
        {
            if(!(this->GRID[y][x]->WALLNEWS[0])&&(y>0))
            {this->GRID[y-1][x]->WALLNEWS[3]=false;}
            if(!(this->GRID[y][x]->WALLNEWS[1])&&(x<GRIDSIZE-1))
            {this->GRID[y][x+1]->WALLNEWS[2]=false;}
            if(!(this->GRID[y][x]->WALLNEWS[2])&&(x>0))
            {this->GRID[y][x-1]->WALLNEWS[1]=false;}
            if(!(this->GRID[y][x]->WALLNEWS[3])&&(y<GRIDSIZE-1))
            {this->GRID[y+1][x]->WALLNEWS[0]=false;}
        }
    }
};


cell::cell(){};
cell::cell (int y_n,int x_n)
{
    this->X=x_n;
    this->Y=y_n;
};

cell::cell (int x_n,int y_n,bool n_b,bool e_b,bool w_b, bool s_b)
{
{//X,Y
    this->X=x_n;
    this->Y=y_n;
}
{//WALLNEWS
    this->WALLNEWS[0]=n_b;
    this->WALLNEWS[1]=e_b;
    this->WALLNEWS[2]=w_b;
    this->WALLNEWS[3]=s_b;
}
{//THINGS [20]
    for (int i = 0; i < 20; i++)
    {
    //this->THINGS[i]= new thing();
    }
    
}
};