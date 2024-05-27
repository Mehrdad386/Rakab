#ifndef ZEMESTAN
#define ZEMESTAN
#include "../Interface/PirpleCard.h"

class Zemestan : PirpleCard
{
public:
    Zemestan(){};
    PlayedCard ability(PlayedCard) override;

private:
};

#endif