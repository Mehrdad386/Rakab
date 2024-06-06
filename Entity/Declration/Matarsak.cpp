#include "../Interface/Matarsak.h"

Matarsak::Matarsak(){
    setName("Matarsak") ;
}

void Matarsak::ability(PlayedCard& pc , Player& player)
{
    int index = findCard(pc);
    Card c = pc.cards[index];
    pc.cards.erase(pc.cards.begin() + index ); // delet card form array
    player.addCard(c) ;

}

int Matarsak::findCard(PlayedCard pc)
{
    std::string cardName = getCardName();
    
    for(int i{} ; i<pc.cards.size() ; i++){
        if(pc.cards[i].getName() == cardName)
            return i ;

        if(i == pc.cards.size() - 1 && pc.cards[i].getName() != cardName){
            std::cout<<"card is not available\n" ;
            return findCard(pc) ;
        }
    }
    return -1 ;
    
}

std::string Matarsak::getCardName()
{
    std::string cardName;
    std::cout << "Please Enter Card Name :\n";
    std::cin >> cardName;
    return cardName;
}