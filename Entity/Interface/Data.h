#ifndef DATA_H
#define DATE_H
#include"fstream"
#include<vector>
#include"Player.h"
#include"Card.h"
#include"City.h"


class Data{

public:

void SaveGame( std::vector<Player>& , std::vector<City>& , std::vector<Card>& , int& , City& , City& ) ; //this method will save players , cities , cards , turn , war and peace in txt file

void loadGame( std::vector<Player>& , std::vector<City>& , std::vector<Card>& , int& , City& , City& ) ; //this method is supposted to read and load info from a txt file

private:

};

#endif