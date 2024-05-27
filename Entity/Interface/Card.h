#ifndef CARD_H
#define CARD_H
#include "Player.h"
#include <string>
#include <iostream>

class Card
{
public:
    Card():Power(0),Name(""){};
    Card(int , std::string);
    void setPower(int);
    int getPower();
    void setName(std::string);
    std::string getName();
private:
    int Power;
    std::string Name;
};

#endif
