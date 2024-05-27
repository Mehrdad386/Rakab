#include "../Interface/Card.h"

Card::Card(int power, std::string name)
{
    setPower(power);
    setName(name);
}

void Card::setPower(int power)
{
    Power = power;
}

void Card::setName(std::string name)
{
    Name = name;
}

int Card::getPower()
{
    return Power;
}

std::string Card::getName()
{
    return Name;
}
