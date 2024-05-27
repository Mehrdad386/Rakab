#include "Entity/Interface/Card.h"
#include "Entity/Interface/ShahDokht.h"
#include "Entity/Interface/PirpleCard.h"
#include "Entity/Interface/Bahar.h"

#include <iostream>
#include <vector>
using namespace std;
void showVec(std::vector<std::vector<Card>>);
int main()
{
    ShahDokht SD;
    Player P;
    Bahar B;
    P.setCanWar(5);
    P = SD.ability(P);
    cout << "can War" << P.getCanWar();
    // showVec(vec);
    // vec = B.ability(vec);
    // showVec(vec);
    return 0;
}
void showVec(std::vector<std::vector<Card>> vec)
{
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cout<<" vector after ability"<<vec[i][j].getPower()<<endl;
        }
        
    }
    
}