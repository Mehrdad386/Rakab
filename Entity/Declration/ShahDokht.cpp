#include "../Interface/ShahDokht.h"

ShahDokht::ShahDokht(){ 
    setPriority(5); 
    setName("ShahDokht") ;
};

void ShahDokht::ability(Player& p)
{
    p.setCanWar((p.getCanWar() + 1));


}