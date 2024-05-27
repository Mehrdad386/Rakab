#include "../Interface/Bahar.h"
#include "../Interface/Player.h"

// std::vector<std::vector<Card>> Bahar::ability(std::vector<std::vector<Card>> vec)
// {
//     int bigestCard;
//     for (size_t i = 0; i < vec.size(); i++)
//     {
//         bigestCard = 0;
//         for (size_t j = 0; j < vec.size(); j++)
//         {
//             if (vec[i][j].getPower() > bigestCard)
//             {
//                 bigestCard = vec[i][j].getPower();
//             }
//         }
//         for (size_t j = 0; j < vec.size(); j++)
//         {
//             if (vec[i][j].getPower() == bigestCard)
//             {
//                 vec[i][j].setPower((bigestCard + 3));
//             }
//         }
//     }
//     return vec;
// }
PlayedCard Bahar::ability(PlayedCard pc)
{
    int bigNumber{0};
    for (auto Card : pc.cards)
    {
        if (Card.getPower() > bigNumber)
        {
            bigNumber = Card.getPower();
        }
    }

    if (bigNumber == 0)
    {
        return pc;
    }
    
    for (size_t i = 0; i < pc.cards.size(); i++)
    {
        if (pc.cards[i].getPower() == bigNumber)
        {
            pc.cards[i].setPower(((bigNumber + 3)));
        }
    }
    return pc;
}