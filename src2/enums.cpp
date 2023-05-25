#include "enums.hpp"

//funzioni
std::string f_raceSTR (int race_n)
{
    RACE_N _race_enum = (RACE_N) race_n;
    std::string _race_name;
    switch (race_n)
    {
    case HUMAN:
    _race_name = "Human";
    break;
    case GOBLIN:
    _race_name = "Goblin";
    default:
    _race_name = "DEFAULT";
    break;
    }
    return _race_name;
};

char16_t f_getTile (bool n_b,bool e_b,bool w_b,bool s_b) //Restituisce il char scelto da stampare
{
    if (n_b)
    {
        if (e_b)
        {
            if(w_b)
            {
                if(s_b)
                {
                    return (char16_t) Tiles::FULL;
                }
                    return (char16_t) Tiles::NEW;
            }else{
                if(s_b)
                {
                    return (char16_t) Tiles::NES;
                }
                    return (char16_t) Tiles::NE;
            }
        }else{
            if(w_b)
            {
                if(s_b)
                {
                    return (char16_t) Tiles::NWS;
                }
                    return (char16_t) Tiles::NW;
            }else{
                if(s_b)
                {
                    return (char16_t) Tiles::NS;
                }
                    return (char16_t) Tiles::N;
            }
        }
    }else{
        if (e_b)
        {
            if(w_b)
            {
                if(s_b)
                {
                    return (char16_t) Tiles::EWS;
                }
                    return (char16_t) Tiles::EW;
            }else{
                if(s_b)
                {
                    return (char16_t) Tiles::ES;
                }
                    return (char16_t) Tiles::E;
            }
        }else{
            if(w_b)
            {
                if(s_b)
                {
                    return (char16_t) Tiles::WS;
                }
                    return (char16_t) Tiles::W;
            }else{
                if(s_b)
                {
                    return (char16_t) Tiles::S;
                }
                    return (char16_t) Tiles::EMPTY;
            }
        }
    }
};
