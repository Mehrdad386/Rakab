#include "../header/Data.h"
#include <sstream>

void Data::SaveGame(std::vector<Player> &players, std::vector<City> &cities, int &turn, City &war, City &peace, std::vector<PlayedCard> &playedCards)
{

    std::ofstream Save;
    Save.open("Information/GameInfo.txt", std::ios::out);

    if (Save.is_open())
    {
        // to save war , peace and turn
        Save << turn << ' ' << war.getName() << ' ' << peace.getName() << '\n';

        // to save cities availability
        for (int i{}; i < cities.size(); i++)
        {
            Save << cities.at(i).getISAvailable() << ' ';
        }
        Save << '\n';

        // to save number of players
        Save << players.size() << '\n';

        // to save playedCards name
        for (int i{}; i < playedCards.size(); i++)
        {
            for (int j{}; j < playedCards.at(i).cards.size(); j++)
            {
                Save << playedCards.at(i).cards.at(j).getName() << ' ';
            }
            Save << '\n';
        }

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

GameData Data::loadGame(std::vector<City> &cities, std::vector<Card> &cards)
{
    std::vector<PlayedCard> playedCard;
    std::vector<Player> players;
    int turn;
    City war;
    City peace;

    std::ifstream Load;
    Load.open("Information/GameInfo.txt", std::ios::in);
    int counter{};               // to count line's number
    int index{};                 // for case 2
    int playerLineCounter{};     // to be used in default case
    int tempCounter{};           // for case 1
    int playerSize;              // to hold size of players
    int counterForplayedCards{}; // this counter will help us to seperate played cards from players in default case

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

        while (std::getline(Load, line))
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
                                cities.at(i).setPow("war") ;
                                break;
                            }
                        }
                        break;
                    case 3:
                        if (word == "nowhere")
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
                                cities.at(i).setPow("peace") ;
                                break;
                            }
                        }
                        break;
                    default:
                        std::cout << "UNHANDELED ERROR , Case1\n";
                        break;
                    }
                }
                break;

            case 2:

                while (cutter >> word && index < cities.size())
                {
                    if (word == "1")
                        cities.at(index).setIsAvailable(1);
                    else
                        cities.at(index).setIsAvailable(0);

                    index++;
                }
                index = 0;

                break;


            case 3:
                while (cutter >> word)
                {
                    playerSize = std::stoi(word);
                    playedCard.resize(playerSize);
                }
                break;

            default:

                if (counterForplayedCards < playerSize)
                {
                    while (cutter >> word)
                    {
                        exchangeCard1(cards , word , playedCard.at(counterForplayedCards)) ;
                    }
                }
                else if (counterForplayedCards >= playerSize)
                {
                    while (cutter >> word)
                    {
                        playerLineCounter++;
                        if (word != "Caline" && word != "Enna" && word != "Atela" && word != "Pladaci" && word != "Borge" && word != "Dimase" && word != "Morina" && word != "Olivadi" && word != "Rollo" && word != "Talmone" && word != "Armento" && word != "Elinia" && word != "Lia" && word != "Bella")
                        {
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
//                                player.setCanWar(std::stoi(word));
                                break;
                            case 5:
                                player.setIsPasssed(std::stoi(word));
                                break;
                            case 6:
                                player.setNumberOfCities(std::stoi(word));
                                break;
                            default:
                                exChangeCard2(cards , word , player) ;
                                break;
                            }
                        }
                        else
                        {
                            for (int i{}; i < cities.size(); i++)
                            {
                                if (word == cities.at(i).getName())
                                {
                                    player.addCity(cities.at(i));
                                    cities.at(i).setPow(player.getColor()) ;
                                    break;
                                }
                            }
                        }
                    }
                    players.push_back(player);
                    player.clearCards();
                    player.clearCity() ;
                    playerLineCounter = 0;
                }
                counterForplayedCards++;
                break;
            }
        }
    }
    else
    {
        std::cerr << "can't open the file";
    }

    GameData data;
    data.players = players;
    data.peace = peace;
    data.war = war;
    data.turn = turn;
    data.playedCards = playedCard;

    return data;
}

void Data::exchangeCard1(std::vector<Card> &cards, std::string cardName, PlayedCard &pc)
{
    for (int i{}; i < cards.size(); i++)
    {
        if (cards.at(i).getName() == cardName)
        {
            pc.cards.push_back(cards.at(i));
            cards.erase(cards.begin() + i);
            break;
        }
    }
}


void Data::exChangeCard2(std::vector<Card> &cards, std::string cardName, Player& player)
{

    for (int i{}; i < cards.size(); i++)
    {
        if (cards.at(i).getName() == cardName)
        {
            player.addCard(cards.at(i));
            cards.erase(cards.begin() + i);
            break;
        }
    }

}
