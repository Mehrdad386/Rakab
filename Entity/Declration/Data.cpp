#include "../Interface/Data.h"
#include <sstream>

void Data::SaveGame(std::vector<Player> &players, std::vector<City> &cities, std::vector<Card> &cards, int &turn, City &war, City &peace)
{

    std::ofstream Save;
    Save.open("Information/GameInfo.txt", std::ios::out);

    if (Save.is_open())
    {
        // to save war , peace and turn
        Save << turn << ' ' << war.getName() << ' ' << peace.getName() << '\n';

        // to save cards
        for (int i{}; i < cards.size(); i++)
        {
            Save << cards.at(i).getName() << ' ';
        }
        Save << '\n';

        // to save cities availability
        for (int i{}; i < cities.size(); i++)
        {
            Save << cities.at(i).getISAvailable() << ' ';
        }
        Save << '\n';

        // to save players info
        for (int i{}; i < players.size(); i++)
        {

            Save << players.at(i).getName() << ' ' << players.at(i).getAge() << ' ' << players.at(i).getColor() << ' ' << players.at(i).getCanWar() << ' ' << players.at(i).getIsPassed() << ' ' << players.at(i).getNumberOfCities() << ' ';

            // to save player's cards
            std::vector<Card> tempCard = players.at(i).getCards();
            for (int j{}; j < players.at(i).getCards().size(); j++)
            {
                Save << tempCard.at(j).getName() << ' ';
            }

            // to save cities
            std::vector<City> tempCity = players.at(i).getCities();
            for (int k{}; k < players.at(i).getCities().size(); k++)
            {
                Save << tempCity.at(k).getName() << ' ';
            }
            Save << '\n';
        }
    }
    else
    {
        std::cerr << "can't open the file";
    }

    Save.close();
}

void Data::loadGame(std::vector<Player> &players, std::vector<City> &cities, std::vector<Card> &cards, int &turn, City &war, City &peace)
{

    std::ifstream Load;
    Load.open("Information/GameInfo.txt", std::ios::in);
    int counter{};
    int index{}; // for case 3
    int playerLineCounter{}; //to be used in case 4
    int tempCounter{}; //for case 1

    // to be used for adding cards
    YellowCard y1(1, "1");
    YellowCard y2(2, "2");
    YellowCard y3(3, "3");
    YellowCard y4(4, "4");
    YellowCard y5(5, "5");
    YellowCard y6(6, "6");
    YellowCard y10(10, "10");
    TablZan tablzan;
    Bahar bahar;
    Zemestan Zemestan;
    Matarsak matarsak;
    ShirDokht shirdokht;
    ShirZan shirzan;
    // to be used for adding players
    Player player;

    if (Load.is_open())
    {

        std::string line;

        while (std::getline(std::cin, line))
        {

            counter++;
            std::stringstream cutter(line);
            std::string word;

            switch (counter)
            {
            case 1:

                while (cutter >> word)
                {
                    tempCounter++;
                    switch (tempCounter)
                    {
                    case 1:
                        turn = std::stoi(word);
                        break;
                    case 2:
                        for (int i{}; i < cities.size(); i++)
                        {
                            if (word == cities.at(i).getName())
                            {
                                war = cities.at(i);
                                break;
                            }
                        }
                        break;
                    case 3:
                        if (word == "no where")
                        {
                            City p;
                            peace = p;
                            break;
                        }
                        for (int i{}; i < cities.size(); i++)
                        {
                            if (word == cities.at(i).getName())
                            {
                                peace = cities.at(i);
                                break;
                            }
                        }
                        break;
                    default:
                        std::cout << "UNHANDELED ERROR , WE FUCKED";
                        break;
                    }
                }
                break;

            case 2:

                while (cutter >> word)
                {
                    if (isdigit(word[0]))
                    {
                        int check = std::stoi(word);
                        switch (check)
                        {
                        case 1:
                            cards.push_back(y1);
                            break;
                        case 2:
                            cards.push_back(y2);
                            break;
                        case 3:
                            cards.push_back(y3);
                            break;
                        case 4:
                            cards.push_back(y4);
                            break;
                        case 5:
                            cards.push_back(y5);
                            break;
                        case 6:
                            cards.push_back(y6);
                            break;
                        case 10:
                            cards.push_back(y10);
                            break;
                        default:
                            break;
                        }
                    }
                    else
                    {
                        if (word == "TablZan")
                            cards.push_back(tablzan);
                        else if (word == "Zemestan")
                            cards.push_back(Zemestan);
                        else if (word == "Bahar")
                            cards.push_back(bahar);
                        else if (word == "Matarsak")
                            cards.push_back(matarsak);
                        else if (word == "ShirZan")
                            cards.push_back(shirzan);
                        else if (word == "ShirDokht")
                            cards.push_back(shirdokht);
                    }
                }
                break;

            case 3:
                while (cutter >> word)
                {
                    if (word == "1")
                        cities.at(index).setIsAvailable(1);
                    else
                        cities.at(index).setIsAvailable(0);

                    index++;
                }
                index = 0;
                break;

            default:
                
                while (cutter >> word)
                {
                playerLineCounter++;
                if(word != "Caline" && word != "Enna" && word != "Atela" && word != "Pladaci" && word != "Borge" && word != "Dimase" && word != "Morina" && word != "Olivadi" && word != "Rollo" && word != "Talmone" && word != "Armento" && word != "Elinia" && word != "Lia" && word != "Bella"){
                    switch (playerLineCounter)
                    {
                    case 1:
                        player.setName(word);
                        break;
                    case 2:
                        player.setAge(std::stoi(word));
                        break;
                    case 3:
                        player.setColor(word);
                        break;
                    case 4:
                        player.setCanWar(std::stoi(word));
                        break;
                    case 5:
                        player.setIsPasssed(std::stoi(word));
                        break;
                    case 6:
                        player.setNumberOfCities(std::stoi(word));
                        break;
                    default:
                        if (word == "TablZan")
                            player.addCard(tablzan);
                        else if (word == "Zemestan")
                            player.addCard(Zemestan);
                        else if (word == "Bahar")
                            player.addCard(bahar);
                        else if (word == "Matarsak")
                            player.addCard(matarsak);
                        else if (word == "ShirZan")
                            player.addCard(shirzan);
                        else if (word == "ShirDokht")
                            player.addCard(shirdokht);

                        break;
                    }
                }
                else
                {
                    for(int i{} ; i<cities.size() ; i++){
                        if(word == cities.at(i).getName()){
                            player.addCity(cities.at(i)) ;
                            break;
                        }
                    }
                }
                players.push_back(player) ;
                player.clearCards() ;
                playerLineCounter = 0 ;
                }
                break;
            }
        }
    }
    else
    {
        std::cerr << "can't open the file";
    }
}