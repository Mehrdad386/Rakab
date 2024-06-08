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
        for (int j{}; j < pc[i].cards.size(); j++)
        {
            if (isYellow(pc[i].cards[j].getName()))
            {
                if (pc[i].cards[j].getPower() > bigNumber)
                {
                    bigNumber = pc[i].cards[j].getPower();
                }
            }
        }
    }
    for (int i{}; i < pc.size(); i++)
    {

        for (int j = 0; i < pc[i].cards.size(); j++)
        {
            if (pc[i].cards[j].getPower() == bigNumber)
            {
                pc[i].cards[j].setPower(((bigNumber + 3)));
            }
        }
    }
}