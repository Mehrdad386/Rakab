#ifndef GAME_H
#define GAME_H
#include<vector>
#include"Manager.h"
#include"Map.h"
#include"Player.h"
#include"Card.h"
#include"YellowCard.h"
#include"PirpleCard.h"
#include"TablZan.h"
#include"ShahDokht.h"
#include"Bahar.h"
#include"Zemestan.h"
#include"Matarsak.h"

class Game{

public:

    Game() ;

    void takeGameInfo () ; //this function will take basic game information to create a game

    void print() ; //this function will print info in terminal

    void fillCards() ; //this function will fill player's hand with cards

    void input() ; //this function will ask player which card he wants to play

    void setWar() ; //this function will set a city in war situation

    void endWar() ;  //this function will end the ward and return played cards to cards of game

    void gameFlow() ; //main function that relate all functions to each other

    void generateCards() ; //this function will generate game based on game information

    Player findWinner() ;

private:

    Map map ;
    std::vector<City> cities ;
    std::vector<Player> players ;
    std::vector<Card> cards ; //total cards of game
    std::vector<PlayedCard> playedCards ;
    Manager manager ;
    int turn ;
    City war ; //to hold the city that is on war
    City peace ; //to hold the city that is on peace
    Player& Winner ; //winner player on war

};


#endif