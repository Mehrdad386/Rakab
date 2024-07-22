#include "../Interface/Zemestan.h"
#include<cmath>
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

                if (isYellow(pc.at(i).cards.at(j).getName()))
                {
                    pc.at(i).cards.at(j).setPower(floor(pc.at(i).cards.at(j).getPower() / 2));
                }
    
        }
    }
}