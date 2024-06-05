#ifndef ZEMESTAN_H
#define ZEMESTAN_H
#include "PirpleCard.h"

class Zemestan : public PirpleCard
{
public:

    Zemestan() ;

    PlayedCard ability(PlayedCard) override;

private:
};

#endif