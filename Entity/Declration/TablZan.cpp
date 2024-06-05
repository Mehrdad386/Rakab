#include "../Interface/TablZan.h"


TablZan::TablZan(){ 
        setPriority(3) ; 
        setName("TablZan") ;
};

void TablZan::ability(std::vector<Card> & cards)
{
    for (size_t i = 0; i < cards.size(); i++)
    {
        if (isYellow(cards[i].getName()))
        {
            cards[i].setPower((cards[i].getPower() * 2));
        }
    }

}

bool TablZan::isYellow(std::string name)
{
    for (char c : name)
    {
        if (!isdigit(c))//check that char is int or not ?
        {
            return false;
        }
    }
    return true;
}