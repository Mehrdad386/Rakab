#ifndef FOKSEFID_H
#define FOKSEFID_H
#include "PirpleCard.h"


class FokSefid: public PirpleCard
{
public:
    FokSefid() ;
    
    void ability(std::vector<PlayedCard>&) ;

private:
};

#endif