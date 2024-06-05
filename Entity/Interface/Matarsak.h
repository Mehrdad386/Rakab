#ifndef MATARSAK_H
#define MATARSAK_H
#include "PirpleCard.h"

class Matarsak : public PirpleCard
{
public:
    Matarsak() ;
    Card ability(PlayedCard&);

private:
    std::string getCardName();//get the card name from player for delete
    int findCard(PlayedCard); // find the choosen card index
};

#endif