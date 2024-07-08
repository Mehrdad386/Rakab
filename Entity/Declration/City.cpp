#include"../Interface/City.h"


//getters
const std::string City::getName(){ return name ; }
const bool City::getISAvailable(){ return isAvailable ; }
const std::vector<int> City::getNeighbors(){ return neighbors ; }
const int City::getNumber (){ return number ; }

//setters
void City::setName( std::string name ){ this->name = name ; }
void City::setIsAvailable( bool isAvailable ){ this->isAvailable = isAvailable ; }
void City::setNeighbors( std::vector<int> neighbors ){ this->neighbors = neighbors ; }
void City::setNumber( int number ){ this->number = number ; }

//constructors

City::City( std::string name , bool isAvailable , int number ){
    setName(name) ;
    setIsAvailable(isAvailable) ;
    setNumber(number) ;
}

City::City() : name("nowhere") , isAvailable(true) {} ;


