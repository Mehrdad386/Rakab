#ifndef MATARSAK_H
#define MATARSAK_H
#include "../Interface/PirpleCard.h"

class Matarsak : PirpleCard
{
public:
    Matarsak(){};
    virtual PlayedCard ability(PlayedCard);

private:
    std::string getCardName();//get the card name from player for delete
    int findCard(PlayedCard); // find the choosen card index
};

#endif