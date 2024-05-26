#include "../Interface/TablZan.h"

std::vector<std::vector<Card>> TablZan::ability(std::vector<std::vector<Card>> vec)
{
    for (size_t i = 0; i < vec.size(); i++)
    {
        for (size_t j = 0; j < vec.size(); j++)
        {
            if (isYellow(vec[i][j].getName()))
            {
                vec[i][j].setPower((vec[i][j].getPower()*2));
            }
        }
        
    }
}

bool TablZan::isYellow(std::string name)
{
    for (char c : name)
    {
        if (!isdigit(c))
        {
            return false;
        }
    }
    return true;
}