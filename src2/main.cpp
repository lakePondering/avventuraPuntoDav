#include <iostream>
#include "map.hpp"
#include "enums.hpp"

int main ()
{
    std::cout<<"Benvenuti ad avventura.dav";

    //enums
    int _razza = 1;
    std::cout<<"\n"<<f_raceSTR(_razza);
    map cagarella;
    cagarella.info();
    std::cout<<"\n SBORRA";
    return 0;
};