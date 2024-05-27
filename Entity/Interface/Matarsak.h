#ifndef MATARSAK_H
#define MATARSAK_H
#include "../Interface/PirpleCard.h"

class Matarsak :PirpleCard
{
    public:
    virtual PlayedCard ability(PlayedCard);


private:
std::string getCardName();
int findCard(PlayedCard);
};

#endif