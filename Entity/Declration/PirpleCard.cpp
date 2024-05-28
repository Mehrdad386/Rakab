#include "../Interface/PirpleCard.h"
#include "../Interface/Player.h"

//Constructor
PirpleCard::PirpleCard(std::string ability)
{
    setAbility(ability);
}

//Stters
void PirpleCard::setAbility(std::string ability)
{
    Ability = ability;
}

//Getters
const std::string PirpleCard::getAbility()
{
    return Ability;
}

//Inheritance
Player PirpleCard::ability(Player p)
{
    return p;
}

PlayedCard PirpleCard::ability(PlayedCard PC)
{
    return PC;
}