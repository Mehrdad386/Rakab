#ifndef SERVICE_H
#define SERVICE_H

#include <vector>
#include <QString>
#include "Entity/header/Player.h"

class service{
public:
    static void addplayer(std::string ,int , std::string);

    static Player readplayer(int);

    static void Setwarplace(std::string );

    static std::string Getwarplace();

    static void Setplayernumber(int);

    static int Getplayernumber();

private:
    static std::vector <Player> players;

    static std::string warCity;

    static int playerNumber;
};




#endif // SERVICE_H
