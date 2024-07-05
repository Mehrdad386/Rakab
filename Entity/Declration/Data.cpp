#include "../Interface/Data.h"

void Data::SaveGame(std::vector<Player> players, std::vector<City> cities, std::vector<Card> cards, int turn, City war, City peace)
{

    std::ofstream Save;
    Save.open("Information/GameInfo.txt", std::ios::out);

    if (Save.is_open())
    {
        //to save war , peace and turn
        Save<<turn<<' '<<war.getName()<<' '<<peace.getName()<<'\n' ;

        //to save players info
        for(int i{} ; i<players.size() ; i++){

            Save<<players.at(i).getName()<<' '<<players.at(i).getAge()<<' '<<players.at(i).getColor()<<' '<<players.at(i).getCanWar()<<' '<<players.at(i).getIsPassed()<<' '<<players.at(i).getNumberOfCities()<<' ' ;

            //to save player's cards
            std::vector<Card> tempCard = players.at(i).getCards() ;
            for(int j{} ; j<players.at(i).getCards().size() ; j++){
                Save<<tempCard.at(j).getName()<<' ' ;
            }

            //to save cities
            std::vector<City> tempCity = players.at(i).getCities() ;
            for(int k{} ; k<players.at(i).getCities().size() ; k++){
                Save<<tempCity.at(k).getName()<<' ' ;
            }
            Save<<'\n' ;

        }

        //to save cards
        for(int i{} ; i< cards.size() ; i++){
            Save<<cards.at(i).getName()<<' ' ;
        }
        Save<<'\n' ;

        //to save cities availability
        for(int i{} ; i<cities.size() ; i++){
            Save<<cities.at(i).getISAvailable()<<' ' ;
        }
        Save<<'\n' ;

    }
    else
    {
        std::cerr << "can't open the file";
    }

    Save.close();
}