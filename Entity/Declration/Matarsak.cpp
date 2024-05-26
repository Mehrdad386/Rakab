#include "../Interface/Matarsak.h"

std::vector<std::vector<Card>> Matarsak::ability(std::vector<std::vector<Card>> vec,std::string name)
{
    for (size_t i = 0; i < vec.size(); i++)
    {
        for (size_t j = 0; j < vec.size(); j++)
        {
            if (vec[i][j].getName()==name)
            {
                vec[i].erase(vec[j].begin()+j);
            }
        }
        
    }
    
}