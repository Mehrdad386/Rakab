#include "../Interface/Zemestan.h"

Zemestan::Zemestan()
{
    setPriority(2);
    setName("Zemestan");
};

void Zemestan::ability(std::vector<PlayedCard> &pc)
{
    for (int i{}; i < pc.size(); i++)
    {
        for (int j{}; j < pc.at(i).cards.size(); j++)
        {

            if (i < pc.size() && j < pc.at(i).cards.size())
            {
                if (isYellow(pc.at(i).cards.at(j).getName()))
                {
                    pc.at(i).cards.at(j).setPower(1);
                }
            }
        }
    }
}