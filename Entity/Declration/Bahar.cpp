#include "../Interface/Bahar.h"
#include "../Interface/Player.h"

Bahar::Bahar()
{
    setPriority(4);
    setName("Bahar");
};

void Bahar::ability(std::vector<PlayedCard> &pc)
{

    int bigNumber = findBigest(pc) ;

    for (int i{}; i < pc.size(); i++)
    {
        for (int j = 0; j < pc.at(i).cards.size(); j++)
        {
            if (i < pc.size() && j < pc.at(i).cards.size())
            {
                if ((pc.at(i).cards.at(j).getPower() == bigNumber) && ((isYellow(pc.at(i).cards.at(j).getName())) || (pc.at(i).cards.at(j).getName() == "ShirDokht")))
                {
                    pc.at(i).cards.at(j).setPower(((bigNumber + 3)));
                }
            }
        }
    }
}

int Bahar::findBigest(std::vector<PlayedCard> &pc)
{
    int bigNumber{0};
    for (int i{}; i < pc.size(); i++)
    {
        for (int j{}; j < pc.at(i).cards.size(); j++)
        {
            if (i < pc.size() && j < pc.at(i).cards.size())
            {
                if ( (isYellow(pc.at(i).cards.at(j).getName())) || (pc.at(i).cards.at(j).getName() == "ShirDokht") )
                {
                    if (pc.at(i).cards.at(j).getPower() > bigNumber)
                    {
                        bigNumber = pc.at(i).cards.at(j).getPower();
                    }
                }
            }
        }
    }

    return bigNumber;
}
