#include "../header/ShirinAghl.h"


ShirinAghl::ShirinAghl()
{
    std::srand(time(0));
    setPriority(1) ; 
    setName("ShirinAghl") ;
}

Card ShirinAghl::ability( std::vector<Card> & cards )
{
    if(cards.size() == 0){
        Card y0(0, "0");
        return y0 ;
    }
    else
    {
        int random = rand()%cards.size() ;
        return cards.at(random) ;
    }
}
