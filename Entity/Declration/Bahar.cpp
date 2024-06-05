#include "../Interface/Bahar.h"
#include "../Interface/Player.h"

Bahar::Bahar()
{
    setPriority(4);
    setName("Bahar");
};

void Bahar::ability(std::vector<PlayedCard> &pc)
{
    int bigNumber{0};
    for (int i{}; i < pc.size(); i++)
    {
        for (auto Card : pc[i].cards)
        {
            if (Card.getPower() > bigNumber && Card.getName() != "ShirZan")
            {
                bigNumber = Card.getPower();
            }
        }
    }
    for(int i{} ; i<pc.size() ; i++){

        for (size_t j = 0; i < pc[i].cards.size(); j++)
        {
            if (pc[i].cards[j].getPower() == bigNumber)
            {
                pc[i] .cards[j].setPower(((bigNumber + 3)));
            }
        }
    }
}