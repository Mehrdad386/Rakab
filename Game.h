#ifndef GAME
#define GAME
#include"Manager.h"
#include"City.h"
#include"Player.h"
#include<vector>

class Game{

public:

    Game() ; //defualt game

    void generateGame() ; //to generate game map and cards

    void takeGameInfo () ; //this function will take basic game information to create a game

    void print() ; //this function will print info in terminal

    void fillCards() ; //this function will fill player's hand with cards

    void input() ; //this function will ask player which card he wants to play

    void setWar() ; //this function will set a city in war situation

    void gameFlow() ; //main function that relate all functions to each other

private:

    std::vector<City> cities ;
    std::vector<Player> players ;
    Manager manager ;

};


#endif