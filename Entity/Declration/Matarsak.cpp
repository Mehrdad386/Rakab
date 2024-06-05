#include "../Interface/Matarsak.h"

Matarsak::Matarsak(){
    setName("Matarsak") ;
}

Card Matarsak::ability(PlayedCard& pc)
{
    int index = findCard(pc);
    Card c = pc.cards[index];
    pc.cards.erase(pc.cards.begin() + index ); // delet card form array
    return c ; ;

}

int Matarsak::findCard(PlayedCard pc)
{
    std::string cardName = getCardName();
    int index{0};
    for (auto Card : pc.cards)
    {
        index++;
        if (Card.getName() == cardName)
        {
            return index;
        }
    }
    return index;
}

std::string Matarsak::getCardName()
{
    std::string cardName;
    std::cout << "Please Enter Card Name :\n";
    std::cin >> cardName;
    return cardName;
}