#include "service.h"

std::vector<Player> service::players;

std::string service::warCity;

int service::playerNumber;

void service::addplayer(std::string name, int age, std::string color)
{
    Player p;
    p.setName(name);
    p.setAge(age);
    p.setColor(color);
    players.push_back(p);
}

Player service::readplayer(int index)
{
    return players[index];
}

void service::Setwarplace(std::string wp)
{
    warCity=wp;
}

std::string service::Getwarplace()
{
    return warCity;
}

void service::Setplayernumber(int pn )
{
    playerNumber = pn;
}

int service::Getplayernumber()
{
    return playerNumber;
}











