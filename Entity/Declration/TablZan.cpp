#include "../Interface/TablZan.h"


TablZan::TablZan(){ 
        setPriority(3) ; 
        setName("TablZan") ;
};

PlayedCard TablZan::ability(PlayedCard pc)
{
    for (size_t i = 0; i < pc.cards.size(); i++)
    {
        if (isYellow(pc.cards[i].getName()))
        {
            pc
            .cards[i]
            .setPower((pc.cards[i].getPower() * 2));
        }
    }
    return pc;
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