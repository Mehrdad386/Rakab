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
     std::string getName();

     bool operator==(const Card& other) const {
         return Name == other.Name;
     }

private:
    double Power;
    std::string Name;
};

#endif
