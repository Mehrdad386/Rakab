#include"Player.h"

//getters
const std::string Player::getName(){ return name ; }
const int Player::getAge(){ return age ; }
const std::string Player::getColor(){ return color ; }
const bool Player::getIsPassed(){ return isPassed ; }


//setters
void Player::setName( std::string name ){ this->name = name ; }
void Player::setAge( int age ){ this->age = (age>=0)?age:0 ; }
void Player::setColor ( std::string color ){ this->color = color ; }
void Player::setIsPasssed( bool isPassed ){ this->isPassed = isPassed ; }


//constructors
Player::Player() : name("unknown") , age(0) , color("red") , isPassed(false){}

Player::Player( Player& player ){ *this = player ; }

Player::Player( std::string name , std::string color , bool isPassed , int age ){
    setName(name) ;
    setAge(age) ;
    setIsPasssed(isPassed) ;
    setColor(color) ;
}

