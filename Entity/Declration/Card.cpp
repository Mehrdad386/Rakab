#include "../Interface/Card.h"

void Card::setPower(int power)
{
    Power=power;
}

int Card::getPower()
{
    return Power;
}

std::string Card::getName()
{
    return Name;
}