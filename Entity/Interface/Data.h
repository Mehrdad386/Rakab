#ifndef DATA_H
#define DATE_H
#include "fstream"
#include <vector>
#include "Player.h"
#include "YellowCard.h"
#include "PirpleCard.h"
#include "City.h"
#include "Bahar.h"
#include "Zemestan.h"
#include "TablZan.h"
#include "ShirDokht.h"
#include "ShirZan.h"
#include "Matarsak.h"

struct GameData
{
    std::vector<Player> players;
    std::vector<City> cities;
    std::vector<Card> cards;
    int turn;
    City war;
    City peace;
};

class Data
{

public:
    void SaveGame(std::vector<Player> &, std::vector<City> &, std::vector<Card> &, int &, City &, City &); // this method will save players , cities , cards , turn , war and peace in txt file

    GameData loadGame( std::vector<City>& ); // this method is supposted to read and load info from a txt file

private:
};

#endif