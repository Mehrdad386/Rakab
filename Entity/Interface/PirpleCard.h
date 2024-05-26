#ifndef PIRPLECARD_H
#define PIRPLECARD_H
#include <string>
#include <vector>
#include "../Interface/Card.h"

class PirpleCard : public Card
{
public:
    virtual std::vector<std::vector<Card>> ability(std::vector<std::vector<Card>>);
    std::string getName();
    void setName(std::string);

private:
    std::string Name;
    std::string Ability;
};
#endif