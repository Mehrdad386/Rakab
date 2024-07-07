#include"../Interface/ParchamDar.h"


ParchamDar::ParchamDar(){
    setName("ParchamDar") ;
    setPriority(1) ;
}


void ParchamDar::ability(std::vector<Player>& players){
    for(int i{} ; i<players.size() ; i++){
        players.at(i).setIsPasssed(true) ;
    }
}