#include"City.h"


//getters
std::string City::getName(){ return name ; }
bool City::getISAvailable(){ return isAvailable ; }
std::vector<City> City::getNeighbors(){ return neighbors ; }


//setters
void City::setName( std::string name ){ this->name = name ; }
void City::setIsAvailable( bool isAvailable ){ this->isAvailable = isAvailable ; }
void City::setNeighbors( std::vector<City> neighbors ){ this->neighbors = neighbors ; }


//constructors

City::City( std::string name , bool isAvailable , std::vector<City>neighbors ){
    setName(name) ;
    setIsAvailable(isAvailable) ;
    setNeighbors(neighbors) ;
}

City::City() : name("no where") , isAvailable(true) {} ;


