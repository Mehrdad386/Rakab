#ifndef TABLZAN_H
#define TABLZAN_H
#include "../Interface/PirpleCard.h"

class TablZan : PirpleCard
{
    public:
   std::vector<std::vector<Card>> ability(std::vector<std::vector<Card>>) override;

private:
bool isYellow(std::string);
};

#endif