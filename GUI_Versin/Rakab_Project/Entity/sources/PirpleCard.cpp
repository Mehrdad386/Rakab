#include "../header/PirpleCard.h"
#include "../header/Player.h"

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

bool PirpleCard::isYellow(std::string name)
{
   
    {
        if (!isdigit(name[0]))//check that char is int or not ?
        {
            return false;
        }
    }
    return true;
}


int PirpleCard::findBigest(std::vector<PlayedCard> &pc)
{
    int bigNumber{0};
    for (int i{}; i < pc.size(); i++)
    {
        for (int j{}; j < pc.at(i).cards.size(); j++)
        {
            if (i < pc.size() && j < pc.at(i).cards.size())
            {
                if (isYellow(pc.at(i).cards.at(j).getName()))
                {
                    if (pc.at(i).cards.at(j).getPower() > bigNumber)
                    {
                        bigNumber = pc.at(i).cards.at(j).getPower();
                    }
                }
            }
        }
    }

    return bigNumber;
}
