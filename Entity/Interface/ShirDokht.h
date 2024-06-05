#ifndef SHIRDOKHT_H
#define SHIRDOKHT_H
#include "PirpleCard.h"

class ShirDokht : public PirpleCard
{
    public:
    ShirDokht();
    PlayedCard ability(PlayedCard) override;
    private:

};




#endif