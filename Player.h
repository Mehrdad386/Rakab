#ifndef PLAYER
#define PLAYER
#include<string>
#include"City.h"
#include<vector>

class Player {

public:

    Player() ;

    Player ( std::string , std::string , bool , int) ;

    const std::string getName() ;

    const int getAge() ;

    const std::string getColor () ;

    const bool getIsPassed() ;

    const std::vector<City> getCities() ;

    void setName( std::string ) ;

    void setAge( int ) ;

    void setColor( std::string ) ;

    void setIsPasssed( bool ) ;

    void play() ;

    void printCities() ;

    void printCards() ;

    void CountScore() ;

    void movePlayedCard() ;


private:

    std::string name ;
    std::string color ;
    int age ;
    bool isPassed ;
    std::vector<City> cities ; //owned cities


};

#endif