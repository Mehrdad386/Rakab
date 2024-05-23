#include"Map.h"

//getters
const int Map::getSize(){ return size ; }
const std::vector<City> Map::getCities(){ return cities ; }


//setters
void Map::setSize( int size ){ this->size = size ; }
void Map::setCities( std::vector<City> cities ){ this->cities = cities ;}

//constructors
Map::Map() : size(0) {}

Map::Map( int size , std::vector<City> cities ){ 
    setSize(size) ;
    setCities(cities) ;
}
