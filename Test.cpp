#include "Entity/Interface/Card.h"
#include "Entity/Interface/ShahDokht.h"
#include "Entity/Interface/PirpleCard.h"
#include "Entity/Interface/Bahar.h"
#include "Entity/Interface/Zemestan.h"
#include "Entity/Interface/TablZan.h"
#include "Entity/Interface/Matarsak.h"
#include "Entity/Interface/Game.h"


#include <iostream>
#include <vector>
using namespace std;
void showVec(PlayedCard);
int main()
{
    // Card c1{1, "Sina"};
    // Card c2{4, "mehrdad"};
    // Card c3{0, "danial"};
    // Card c4{0, "fazel"};
    // Card c5{5, "5"};
    // PlayedCard pc;
    // pc.cards.push_back(c1);
    // pc.cards.push_back(c2);
    // pc.cards.push_back(c3);
    // pc.cards.push_back(c4);
    // Player P;
    // ShahDokht SD;
    // Bahar B;
    // Zemestan Z;
    // TablZan T;
    // Matarsak M;
    // P.setCanWar(5);
    // P = SD.ability(P);
    // cout << "can War" << P.getCanWar() << endl;
    // pc = B.ability(pc);
    // cout << "after bahar\n";
    // showVec(pc);
    // pc = Z.ability(pc);
    // cout << "after zemestan\n";
    // showVec(pc);
    // pc.cards.push_back(c5);
    // pc = T.ability(pc);
    // cout << "after tablzan\n";
    // showVec(pc);
    // pc = M.ability(pc);
    // cout << "after matarsak\n";
    // showVec(pc);
    Game game ;
    game.print() ;

    return 0;
}
void showVec(PlayedCard pc)
{
    for (auto card : pc.cards)
    {
        cout <<" power "<< card.getPower()  << endl;
        cout <<" name "<< card.getName() << endl;
    }
}