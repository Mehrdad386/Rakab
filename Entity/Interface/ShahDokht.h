#ifndef SHAHDOKHT_H
#define SHAHDOKHT_H
#include "../Interface/PirpleCard.h"

class ShahDokht : public PirpleCard
{
public:
    ShahDokht(){};
    Player ability(Player) override;

private:
};

#endif