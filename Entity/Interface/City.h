#ifndef CITY
#define CITY
#include<string>
#include<vector>

class City{

public:

    City() ;

    City( std::string , bool , std::vector<City> ) ; 

    const std::string getName() ;

    const bool getISAvailable() ;

    const std::vector<City> getNeighbors () ;

    void setName( std::string ) ;
    
    void setIsAvailable( bool isAvaiable ) ;

    void setNeighbors( std::vector<City> ) ;


private:

    std::string name ;
    bool isAvailable ;
    std::vector<City> neighbors ;

};


#endif