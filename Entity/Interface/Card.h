#ifndef CARD_H
#define CARD_H
#include <string>
#include <iostream>

class Card
{
public:
    //constructor
    Card():Power(0),Name(""){};
    Card(int , std::string);

    //setters
    void setPower(double);
    void setName(std::string);

    //getters
    const double getPower();
    const std::string getName();

private:
    double Power;
    std::string Name;
};

#endif
