#ifndef PIRPLECARD_H
#define PIRPLECARD_H
#include <vector>
#include<string>
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
    PirpleCard() : Ability(" ") {};
    PirpleCard(std::string);
    //Setters
    void setAbility(std::string);
    void setPriority ( int ) ;
    //Getters
    const std::string getAbility();
    const int getPriority () ;
    //Inheritance
    virtual void ability(PlayedCard&);
    virtual void ability(Player&);
    //other
    bool isYellow(std::string) ;

    int findBigest(std::vector<PlayedCard> &pc) ;

private:
    std::string Ability;
    int priority ;
};
#endif