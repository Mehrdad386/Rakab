#ifndef PIRPLECARD_H
#define PIRPLECARD_H
#include <vector>
#include "../Interface/Card.h"

struct PlayedCard
{
    Player person;
    std::vector<Card> cards;
};


class PirpleCard : public Card
{
public:
    virtual std::vector<std::vector<Card>> ability(std::vector<std::vector<Card>>);
    virtual std::vector<std::vector<Card>> ability(std::vector<std::vector<Card>>,Player&);
     virtual PlayedCard ability(PlayedCard);
    virtual Player ability(Player);

private:
    std::string Ability;
};
#endif