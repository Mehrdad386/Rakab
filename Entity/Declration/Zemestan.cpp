#include "../Interface/Zemestan.h"

Zemestan::Zemestan(){
    setPriority(2);
    setName("Zemestan");
};

void Zemestan::ability(std::vector<PlayedCard> & pc)
{
    for(int i{} ; i<pc.size() ; i++){
        for(int j{} ; j<pc[i].cards.size() ; j++){
            if(pc[i].cards[j].getName() != "ShirDokht")
                pc[i] .cards[j].setPower(((1)));
        }
    }

}