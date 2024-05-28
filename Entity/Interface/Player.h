#ifndef PLAYER
#define PLAYER
#include<string>
#include"../Interface/City.h"
#include<vector>

class Player {

public:

    Player() ;

    Player ( std::string , std::string , bool , int) ;

    const std::string getName() ;

    const int getAge() ;

    const std::string getColor () ;

    const bool getIsPassed() ;

    void setName( std::string ) ;

    void setAge( int ) ;

    void setColor( std::string ) ;

    void setIsPasssed( bool ) ;

    void play() ;

    void printCities() ;

    void setCanWar(int );

    const int getCanWar();

    //void printCards() ;

    //void CountScore() ;

   // void movePlayedCard() ;


private:

    std::string name ;
    std::string color ;
    int age ;
    bool isPassed ;
    int CanWar;
    std::vector<City> cities ; //owned cities


};

#endif