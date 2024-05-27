#ifndef BAHAR_H
#define BAHAR_H
#include "../Interface/PirpleCard.h"

class Bahar : public PirpleCard
{
    public:
    PlayedCard ability(PlayedCard) override;

    private:
};
#endif
