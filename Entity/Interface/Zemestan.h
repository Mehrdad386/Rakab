#ifndef ZEMESTAN_H
#define ZEMESTAN_H
#include "../Interface/PirpleCard.h"

class Zemestan : PirpleCard
{
    public:
    std::vector<std::vector<Card>> ability(std::vector<std::vector<Card>>) override;

    private:
};






#endif