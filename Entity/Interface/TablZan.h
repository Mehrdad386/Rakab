#ifndef TABLZAN_H
#define TABLZAN_H
#include "../Interface/PirpleCard.h"

class TablZan : PirpleCard
{
    public:
    virtual PlayedCard ability(PlayedCard);


private:
bool isYellow(std::string);
};

#endif