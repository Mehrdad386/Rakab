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

