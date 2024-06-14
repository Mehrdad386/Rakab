#include "../Interface/Matarsak.h"

Matarsak::Matarsak(){
    setName("Matarsak") ;
}

void Matarsak::ability(PlayedCard& pc , Player& player)
{
    int index = findCard(pc);
    if(index != -1){
        Card c = pc.cards[index];
        pc.cards.erase(pc.cards.begin() + index ); // delet card form array
        player.addCard(c) ;
    }
}

int Matarsak::findCard(PlayedCard pc)
{
    std::string cardName = getCardName(pc);

    if(cardName != "none"){
    
    for(int i{} ; i<pc.cards.size() ; i++){
        if(pc.cards[i].getName() == cardName)
            return i ;

        if(i == pc.cards.size() - 1 && pc.cards[i].getName() != cardName){
            std::cout<<"card is not available\n" ;
            return findCard(pc) ;
        }
    }
    }
    return -1 ;
    
}

std::string Matarsak::getCardName( PlayedCard pc )
{
    std::string cardName  = "none";
    if(canWork(pc)){
        std::cout << "Please Enter Card Name :\n";
        std::cin >> cardName;
        if(!isYellow(cardName)){
            std::cout<<"you can't return a purple card.\n" ;
            getCardName(pc) ;
        }
    }
    return cardName;
}


bool Matarsak::canWork( PlayedCard pc ){

    for(int i{} ; i<pc.cards.size() ; i++){
        if(isYellow(pc.cards[i].getName()))
            return true ;
        
    }

    return false ;

}