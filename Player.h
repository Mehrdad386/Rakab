#ifndef PLAYER
#define PLAYER
#include<string>

class Player {

public:

    Player() ;

    Player ( std::string , std::string , bool , int) ;

    Player ( Player& ) ;

    std::string getName() ;

    int getAge() ;

    std::string getColor () ;

    bool getIsPassed() ;

    void setName( std::string ) ;

    void setAge( int ) ;

    void setColor( std::string ) ;

    void setIsPasssed( bool ) ;

    void play() ;


private:

    std::string name ;
    std::string color ;
    int age ;
    bool isPassed ;


};

#endif