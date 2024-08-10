#ifndef MAP_H
#define MAP_H
#include<vector>
#include"City.h"

class Map{

public:

    Map() ;

    Map( int , std::vector<City> ) ;

    const int getSize() ;

    const std::vector<City> getCities() ;

    const std::vector<std::vector<bool>> getIsNeighbor() ;

    void setSize ( int ) ;

    void setCities( std::vector<City> ) ;

    void generateMap() ;

private:

    int size ;
    std::vector<City> cities ;
    std::vector<std::vector<bool>> isNeighbor ;

};



#endif