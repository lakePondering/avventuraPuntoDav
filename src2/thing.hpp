#ifndef _THING_HPP_
#define _THING_HPP_
class thing
{

public:
    thing() {}
    ~thing() {}

    bool ALIVE = false;
    int VALUE = 0;
    int SIZE = 0;
    int WEIGHT = 0;
    SPRITES SPRITE= EMPTY;
};

#endif