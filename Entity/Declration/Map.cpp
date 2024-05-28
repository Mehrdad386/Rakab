#include "Map.h"

// getters
const int Map::getSize() { return size; }
const std::vector<City> Map::getCities() { return cities; }

// setters
void Map::setSize(int size) { this->size = size; }
void Map::setCities(std::vector<City> cities) { this->cities = cities; }

// constructors
Map::Map()
{
}

Map::Map(int size, std::vector<City> cities)
{
    setSize(size);
    setCities(cities);
}

// to generate map based on game info
void Map::generateMap()
{
    std::vector<std::string> citiesName{"Bella", "Caline", "Enna", "Atela", "Pladaci", "Borge", "Dimase", "Morina", "Olivadi", "Rollo", "Talmone", "Armento", "Elinia", "Lia"};
    cities.resize(citiesName.size());
    for (int i{}; i < citiesName.size(); i++)
    {
        cities[i].setName(citiesName[i]);
    }

    std::vector<std::vector<bool>> isNeighbor{
        {0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
        {1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0},
        {0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0},
        {0, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0},
        {0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1},
        {0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0}};
}