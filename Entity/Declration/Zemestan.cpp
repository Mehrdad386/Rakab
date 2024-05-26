#include "../Interface/Zemestan.h"

std::vector<std::vector<Card>> Zemestan::ability(std::vector<std::vector<Card>> vec)
{
    for (size_t i = 0; i < vec.size(); i++)
    {
        for (size_t j = 0; j < vec.size(); j++)
        {
            if (vec[i][j].getPower() > 0)
            {
                vec[i][j].setPower(1);
            }
        }
    }
    return vec;
}
