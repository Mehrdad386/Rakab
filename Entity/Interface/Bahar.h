#ifndef BAHAR_H
#define BAHAR_H
#include "PirpleCard.h"

class Bahar : public PirpleCard
{
public:
    Bahar() ;

    PlayedCard ability(PlayedCard) override;

private:
};
#endif
