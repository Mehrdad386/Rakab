#ifndef PIRPLECARD_H
#define PIRPLECARD_H
#include <string>
#include "../Interface/Card.h"

class PirpleCard : Card
{
public:
    virtual void ability();
    std::string getName();
    void setName(std::string);

private:
    std::string Name;
    std::string Ability;
};
#endif