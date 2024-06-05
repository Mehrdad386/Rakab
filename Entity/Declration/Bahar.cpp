#include "../Interface/Bahar.h"
#include "../Interface/Player.h"


Bahar::Bahar()   {
    setPriority(4);
    setName("Bahar");
};
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

    if (bigNumber == 0) // if there is no big card
    {
        return pc;
    }

    for (size_t i = 0; i < pc.cards.size(); i++)
    {
        if (pc.cards[i].getPower() == bigNumber)
        {
            pc
            .cards[i]
            .setPower(((bigNumber + 3)));
        }
    }

    return pc;
}