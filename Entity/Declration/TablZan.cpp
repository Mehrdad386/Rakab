#include "../Interface/TablZan.h"


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
            if(count ==1)
                cards[i].setPower((cards[i].getPower() * 1.5));
            else
                cards[i].setPower((cards[i].getPower() * 2.25));
        }
    }

}

