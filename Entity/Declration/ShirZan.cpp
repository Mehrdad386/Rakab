#include "../Interface/ShirZan.h"

ShirZan::ShirZan(){ 
    setPriority(5); 
    setName("ShirZan") ;
    setPower(1) ;
};

void ShirZan::ability(Player& p)
{
    p.addCanWar() ;
}