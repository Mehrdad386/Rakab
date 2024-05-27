#include "Entity/Interface/Card.h"
#include "Entity/Interface/ShahDokht.h"
#include "Entity/Interface/PirpleCard.h"

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ShahDokht SD;
    std::vector<std::vector<Card>> vec
    {{Card(1,"Sina")},{Card(2,"2")},{Card(3,"mehrdad")},
    {Card(0,"danial")},{Card(3,"faazel")},{Card(3,"3")}};
    // vec[0][0].setPower(SD.ability(1));
    return 0;
}