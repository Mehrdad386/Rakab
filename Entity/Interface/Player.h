#ifndef PLAYER_H
#define PLAYER_H
#include<string>
#include<vector>
#include"City.h"
#include"Card.h"


class Player {

public:

    Player() ;

    Player ( std::string , std::string , bool , int) ;

    const std::string getName() ;

    const int getAge() ;

    const std::string getColor () ;

    const bool getIsPassed() ;

    const std::vector<Card> getCards() ;

    void setName( std::string ) ;

    void setAge( int ) ;

    void setColor( std::string ) ;

    void setIsPasssed( bool ) ;

    void setCards( std::vector<Card> ) ;

    void play() ;

    void printCities() ;

    void setCanWar(int );

    const int getCanWar();

    void printCards() ;

    void removeCard( Card ) ;

    void addCard( Card ) ;

private:

    std::string name ;
    std::string color ;
    int age ;
    bool isPassed ;
    int CanWar;
    std::vector<City> cities ; //owned cities
    std::vector<Card> cards ;


};

#endif