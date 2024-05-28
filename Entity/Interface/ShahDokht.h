#ifndef SHAHDOKHT_H
#define SHAHDOKHT_H
#include "PirpleCard.h"

class ShahDokht : public PirpleCard
{
public:
    ShahDokht(){};
    Player ability(Player) override;

private:
};

#endif