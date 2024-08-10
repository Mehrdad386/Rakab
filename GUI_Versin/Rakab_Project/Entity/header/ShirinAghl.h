#ifndef SHIRINAGHL_H
#define SHIRINAGHL_H
#include "PirpleCard.h"
#include <stdlib.h>

class ShirinAghl: public PirpleCard
{
public:
    ShirinAghl() ;
    
    Card ability(std::vector<Card>&) ;

private:
};

#endif