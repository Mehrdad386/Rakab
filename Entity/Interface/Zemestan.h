#ifndef ZEMESTAN
#define ZEMESTAN
#include "../Interface/PirpleCard.h"

class Zemestan : PirpleCard
{
public:
    PlayedCard ability(PlayedCard) override;

private:
};

#endif