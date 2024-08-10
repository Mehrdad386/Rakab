#include "../header/FokSefid.h"


FokSefid::FokSefid()
{
    setPriority(1);
    setName("FokSefid");
};

void FokSefid::ability(std::vector<PlayedCard> &pc)
{
    for(int i{} ; i<pc.size() ; i++)
        pc.at(i).cards.clear() ;
    
}
