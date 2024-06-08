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

//added by Mehrdad
void PirpleCard::setPriority( int priority )
{ 
    this->priority = priority ; 
} 

//Getters
const std::string PirpleCard::getAbility()
{
    return Ability;
}

const int PirpleCard::getPriority()
{
    return priority ;
}

//Inheritance
void PirpleCard::ability(Player& p)
{

}

void PirpleCard::ability(PlayedCard& PC)
{

}