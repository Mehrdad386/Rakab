#ifndef BAHAR_H
#define BAHAR_H
#include "PirpleCard.h"

class Bahar : public PirpleCard
{
public:
    Bahar() ;

    void ability(std::vector<PlayedCard>&) ;

private:
    int findBigest(std::vector<PlayedCard>&) ; //to return the biggest power of the played cards
};
#endif
