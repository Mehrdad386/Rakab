#ifndef TABLZAN_H
#define TABLZAN_H
#include "PirpleCard.h"

class TablZan : public PirpleCard
{
public:
    TablZan() ; 
    void ability(std::vector<Card> & cards);

private:
    bool isYellow(std::string);//check card is yellow or not ?
};

#endif