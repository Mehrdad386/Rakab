#include<iostream>
#include"../Interface/Player.h"


//getters
const std::string Player::getName(){ return name ; }
const int Player::getAge(){ return age ; }
const std::string Player::getColor(){ return color ; }
const bool Player::getIsPassed(){ return isPassed ; }
const bool Player::getCanWar() { return CanWar; } // add by SIna
const std::vector<Card> Player::getCards(){ return cards ; }
const int Player::getNumberOfCities(){ return numberOfCities ; }
const std::vector<City> Player::getCities(){ return cities ; }


//setters
void Player::setName( std::string name ){ this->name = name ; }
void Player::setAge( int age ){ this->age = (age>=0)?age:0 ; }
void Player::setColor ( std::string color ){ this->color = color ; }
void Player::setIsPasssed( bool isPassed ){ this->isPassed = isPassed ; }
void Player::setCanWar(bool canwar) { CanWar = canwar; } // add by Sina
void Player::setCards( std::vector<Card> cards ){ this->cards = cards ; }
void Player::setNumberOfCities( int numberOfCities ){ this->numberOfCities = numberOfCities ; }


//constructors
Player::Player() : name("unknown") , age(0) , color("red") , isPassed(false) , numberOfCities(0) , CanWar(0) {}


Player::Player( std::string name , std::string color , bool isPassed , int age ){
    setName(name) ;
    setAge(age) ;
    setIsPasssed(isPassed) ;
    setColor(color) ;
}



//other methods

void Player::printCities(){
    std::cout<<name<<':' ;
    
    for(int i{} ; i<cities.size() ; i++)
       std::cout<< ' '<<cities[i].getName();

    std::cout<<std::endl ;
}


void Player::printCards(){
    for(int i{} ; i<cards.size() ; i++)
        std::cout<<cards[i].getName()<<' ' ;
    
    std::cout<<std::endl ;
}

void Player::addCard( Card card ){
    cards.push_back(card) ;
}

void Player::removeCard( Card card ){
    int counter{} ;
    for( auto index : cards){
        if( card.getName() == index.getName() )
            break;
        counter++ ;
    }
    cards.erase( cards.begin() + counter) ;
}


void Player::addCity( City city ){
    cities.push_back(city) ;
    numberOfCities++ ;
}


Card Player::play( std::string choice ){
    
    int i{} ;
    for( i ; i<cards.size() ; i++){
        if(cards.at(i).getName() == choice ){
            break ;
        }
        if(i == cards.size() - 1 && cards.at(i).getName() != choice){
            i = -1 ;
            break;
        }
    }

    if(i == -1){
        std::cout<<"invalid card , choose again: " ;
        std::cin>>choice ;
        if(choice == "pass"){
            Card pass( 0 , "pass") ;
            return pass ;
        }
        else if(choice == "help"){
            Card help (0 , "help") ;
            return help ;
        }
        else
            return play(choice) ;
    }
    else{
        Card temp = cards.at(i) ;
        cards.erase(cards.begin() + i ) ;
        return temp ;
    }


}

