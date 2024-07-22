#include"../Interface/RakhshSefid.h"


RakhshSefid::RakhshSefid(){
    setName("RakhshSefid") ;
    setPriority(1) ;
}


void RakhshSefid::ability(std::vector<Player>& players , int turn){
    players.at(turn).setCanWar(100) ; //to make sure the player who played RakhshSefid will be the starter of next war
    for(int i{} ; i<players.size() ; i++){
        players.at(i).setIsPasssed(true) ;
    }
}