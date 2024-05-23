#ifndef MAP
#define MAP
#include<vector>
#include"City.h"

class Map{

public:

    Map() ;

    Map( int , std::vector<City> ) ;

    const int getSize() ;

    const std::vector<City> getCities() ;

    void setSize ( int ) ;

    void setCities( std::vector<City> ) ;

private:

    int size ;
    std::vector<City> cities ;

};



#endif