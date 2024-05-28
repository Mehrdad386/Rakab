#ifndef PIRPLECARD_H
#define PIRPLECARD_H
#include <vector>
#include "Card.h"
#include"player.h"

struct PlayedCard
{
    Player person;
    std::vector<Card> cards;
};

class PirpleCard : public Card
{
public:
    //Constructor
    PirpleCard() : Ability(" "){};
    PirpleCard(std::string);
    //Setters
    void setAbility(std::string);
    //Getters
    const std::string getAbility();
    //Inheritance
    virtual PlayedCard ability(PlayedCard);
    virtual Player ability(Player);

private:
    std::string Ability;
};
#endif