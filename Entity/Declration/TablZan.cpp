#include "../Interface/TablZan.h"
#include<cmath>

TablZan::TablZan(){ 
        setPriority(3) ; 
        setName("TablZan") ;
};

void TablZan::ability(std::vector<Card> & cards , int count)
{
    for (size_t i = 0; i < cards.size(); i++)
    {
        if (isYellow(cards[i].getName()))
        {
            cards[i].setPower((cards[i].getPower() * std::pow(1.5 , count)));
        }
    }

}

