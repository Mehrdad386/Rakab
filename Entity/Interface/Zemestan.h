#ifndef ZEMESTAN_H
#define ZEMESTAN_H
#include "PirpleCard.h"

class Zemestan : public PirpleCard
{
public:

    Zemestan() ;

    void ability(std::vector<PlayedCard> &)  ;

private:
};

#endif