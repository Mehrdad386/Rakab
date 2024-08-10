#ifndef SHAHDOKHT_H
#define SHAHDOKHT_H
#include "PirpleCard.h"

class ShirZan : public PirpleCard
{
public:
    ShirZan() ;
    
    void ability(Player&) override;

private:
};

#endif