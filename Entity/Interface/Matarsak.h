#ifndef MATARSAK_H
#define MATARSAK_H
#include "PirpleCard.h"

class Matarsak : public PirpleCard
{
public:
    Matarsak() ;
    void ability(PlayedCard& , Player&);

private:
    std::string getCardName(PlayedCard);//get the card name from player for delete
    int findCard(PlayedCard); // find the choosen card index
    bool canWork(PlayedCard) ; //to check is that possible for Matarsak to do his ability
};

#endif