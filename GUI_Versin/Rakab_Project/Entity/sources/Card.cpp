#include "../header/Card.h"

//constructor
Card::Card(int power, std::string name)
{
    setPower(power);
    setName(name);
}

//setters
void Card::setPower(double power)
{
    Power = power;
}

void Card::setName(std::string name)
{
    Name = name;
}

//getters
const double Card::getPower()
{
    return Power;
}

 std::string Card::getName()
{
    return Name;
}

