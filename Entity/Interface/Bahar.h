#ifndef BAHAR_H
#define BAHAR_H
#include "../Interface/PirpleCard.h"

class Bahar : public PirpleCard
{
    public:
    std::vector<std::vector<Card>> ability(std::vector<std::vector<Card>>) override;

    private:
};
#endif
