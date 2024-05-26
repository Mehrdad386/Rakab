#ifndef MATARSAK_H
#define MATARSAK_H
#include "../Interface/PirpleCard.h"

class Matarsak :PirpleCard
{
    public:
    std::vector<std::vector<Card>> ability(std::vector<std::vector<Card>>,std::string name ) override;

private:

};

#endif