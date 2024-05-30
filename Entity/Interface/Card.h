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
    void setPower(int);
    void setName(std::string);

    //getters
    const int getPower();
    const std::string getName();

private:
    int Power;
    std::string Name;
};

#endif
