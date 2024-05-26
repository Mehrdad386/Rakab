#ifndef PIRPLECARD_H
#define PIRPLECARD_H
#include <string>
#include <vector>
#include "../Interface/Card.h"

class PirpleCard : public Card
{
public:
    virtual std::vector<std::vector<Card>> ability(std::vector<std::vector<Card>>);
    virtual std::vector<std::vector<Card>> ability(std::vector<std::vector<Card>>,std::string);
    virtual int ability();

private:
    
    std::string Ability;
};
#endif