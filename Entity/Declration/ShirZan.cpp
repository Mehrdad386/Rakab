#include "../Interface/ShirZan.h"

ShirZan::ShirZan(){ 
    setPriority(5); 
    setName("ShirZan") ;
};

void ShirZan::ability(Player& p)
{
    p.setCanWar((p.getCanWar() + 2));


}