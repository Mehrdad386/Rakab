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

    const int getNumberOfCities() ;

    const bool getCanWar();

    const std::vector<City> getCities() ;

    void setName( std::string ) ;

    void setAge( int ) ;

    void setColor( std::string ) ;

    void setIsPasssed( bool ) ;

    void setCards( std::vector<Card> ) ;

    void setCanWar(bool);

    void setNumberOfCities (int) ;


    Card play( std::string choice ) ;

    void printCities() ;

    void printCards() ;

    void removeCard( Card ) ;

    void addCard( Card ) ;

    void addCity( City city ) ;

    void clearCards() ;

private:

    std::string name ;
    std::string color ;
    int age ;
    bool isPassed ;
    int CanWar;
    std::vector<City> cities ; //owned cities
    std::vector<Card> cards ;
    int numberOfCities ;


};

#endif