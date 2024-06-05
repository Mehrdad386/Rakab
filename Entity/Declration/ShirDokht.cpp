#include "../Interface/ShirDokht.h"

PlayedCard ShirDokht::ability(PlayedCard pc)
{
    return pc ;
}
ShirDokht::ShirDokht()
{
    setPriority(0);
    setPower(10);
    setName("ShirDokht");
}