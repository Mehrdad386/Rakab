#include "../Interface/Card.h"

//constructor
Card::Card(int power, std::string name)
{
    setPower(power);
    setName(name);
}

//setters
void Card::setPower(int power)
{
    Power = power;
}

void Card::setName(std::string name)
{
    Name = name;
}

//getters
const int Card::getPower()
{
    return Power;
}

const std::string Card::getName()
{
    return Name;
}

