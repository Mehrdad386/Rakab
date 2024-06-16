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
#include"ShirDokht.h"

class Game{

public:

    Game() ;

    void takeGameInfo () ; //this function will take basic game information to create a game

    void print() ; //this function will print info in terminal

    void fillCards() ; //this function will fill player's hand with cards

    void input() ; //this function will ask player which card he wants to play

    void setWar( std::string warior ) ; //this function will set a city in war situation

    void endWar( int ) ;  //this function will end the ward and return played cards to cards of game

    void gameFlow() ; //main function that relate all functions to each other

    void generateCards() ; //this function will generate game based on game information


    int findWinner() ; //this function will return index of winner

    void setWinner() ; //this function will give the win prices to winner

    char calculationBaharZamastan(); //if bahar cards are more than zemestan it return true if not return false

    void handleTurn(int) ; //to check that turn to get out of range

    int findYoungest() ; //to find youngest player

    bool isPlayedTablZan( int index ) ; //to check that is player played tablZan or not

    bool checkForEnd() ; //to check that has someone won the game and end it

    bool checkNeighbors( std::vector<City> ) ; //to check the players cities relation to end the game if it is possible

    void clearBoard() ; //to clear the board of played cards

    int checkCards() ; //to check player's cards if they're empty or not

    void returnPower() ; //to set the cards power as they were first

    bool checkPassed() ; //to check have all the players passed

    void takeRemainingCard() ; //to take remaining cards from last player

    int findStarterOfWar() ; //to find the index of the player with ( canWar = true )

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
    

};


#endif