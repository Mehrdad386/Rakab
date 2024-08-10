#ifndef CITY_H
#define CITY_H
#include<string>
#include<vector>

class City{

public:

    City() ;

    City( std::string , bool , int ) ; 

    const std::string getName() ;

    const bool getISAvailable() ;

    const int getNumber() ;

    const std::vector<int> getNeighbors () ;

    const std::string getPOW() ;

    void setPow(std::string) ;

    void setName( std::string ) ;
    
    void setIsAvailable( bool isAvaiable ) ;

    void setNumber ( int ) ;

    void setNeighbors( std::vector<int> ) ;


private:

    int number ;
    std::string name ;
    bool isAvailable ;
    std::vector<int> neighbors ;
    std::string POW ; //peace or war

};


#endif