#include "../header/RishSefid.h"

RishSefid::RishSefid()
{
    setPriority(1);
    setName("RishSefid");
}

void RishSefid::ability(std::vector<PlayedCard> &pc)
{
    int bigNumber = findBigest(pc);

    for (int i{}; i < pc.size(); i++)
    {
        for (int j{}; j < pc.at(i).cards.size(); j++)
        {
            if (pc.at(i).cards.at(j).getPower() == bigNumber && isYellow(pc.at(i).cards.at(j).getName()))
            {
                pc.at(i).cards.at(j).setPower(((0)));
            }
        }
    }

}
