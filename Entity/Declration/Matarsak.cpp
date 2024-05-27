#include "../Interface/Matarsak.h"

// std::vector<std::vector<Card>> Matarsak::ability(std::vector<std::vector<Card>> vec, Player &p)
// {
//     std::string cardName = getCardName();
//     Card chosenCard;
//     for (size_t i = 0; i < vec.size(); i++)
//     {
//         for (size_t j = 0; j < vec.size(); j++)
//         {
//             if (vec[i][j].getName() == cardName)
//             {
//                 chosenCard = vec[i][j];
//                 vec[i].erase(vec[j].begin() + j);
//                 //add chosen card to player
//             }
//         }
//     }
//     return vec;
// }

PlayedCard Matarsak::ability(PlayedCard pc)
{
    int index = findCard(pc);
    pc.cards.erase(pc.cards.begin()+index-1);
    return pc;
}

int Matarsak::findCard(PlayedCard pc)
{
    std::string cardName = getCardName();
    int index{0};
    for(auto Card : pc.cards)
    {
        index++;
        if (Card.getName()==cardName)
        {
            return index;
        }
        
    }
    return index;
}

std::string Matarsak::getCardName()
{
    std::string cardName;
    std::cout << "Please Enter Card Name\n";
    std::cin >> cardName;
    return cardName;
}