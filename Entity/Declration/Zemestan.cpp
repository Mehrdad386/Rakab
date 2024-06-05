#include "../Interface/Zemestan.h"

Zemestan::Zemestan(){
    setPriority(2);
    setName("Zemestan");
};

PlayedCard Zemestan::ability(PlayedCard pc)
{
    for (size_t i = 0; i < pc.cards.size(); i++)
    {
        if (pc.cards[i].getPower() > 0)
        {
            pc
            .cards[i]
            .setPower(1);
        }
    }

    return pc;
}