#ifndef PIRPLECARD_H
#define PIRPLECARD_H
#include <vector>
#include "../Interface/Card.h"

class PirpleCard : public Card
{
public:
    virtual std::vector<std::vector<Card>> ability(std::vector<std::vector<Card>>);
    virtual std::vector<std::vector<Card>> ability(std::vector<std::vector<Card>>,Player&);
    virtual Player ability(Player);

private:
    
    std::string Ability;
};
#endif