#ifndef TABLZAN_H
#define TABLZAN_H
#include "../Interface/PirpleCard.h"

class TablZan : PirpleCard
{
public:
    TablZan(){};
    virtual PlayedCard ability(PlayedCard);

private:
    bool isYellow(std::string);//check card is yellow or not ?
};

#endif