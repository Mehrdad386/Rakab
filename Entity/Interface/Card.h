#ifndef CARD_H
#define CARD_H
#include <string>
class Card
{
public:
    void setPower(int);
    int getPower();
    void setName(std::string);
    std::string getName();
private:
    int Power;
    std::string Name;
};

#endif
