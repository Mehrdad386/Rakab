#include "../Interface/PirpleCard.h"
#include "../Interface/Player.h"
#include <vector>
void PirpleCard::setName(std::string name)
{
    Name=name;
}
std::string PirpleCard::getName()
{
    return Name;
}
std::vector<std::vector<Card>> PirpleCard::ability(std::vector<std::vector<Card>>)
{
    
}