#include <iostream>
#include <stdlib.h>
#include <sstream>
#include "../Interface/Game.h"
#include <time.h>
#include <string>

Game::Game()
{
    std::srand(time(0));

    turn = 0;
    generateCards();
    cities = map.getCities();
}

void Game::takeGameInfo()
{
    std::cout << "enter the number of players: ";
    int playerNumber{};

    while (true)
    {
        std::cin >> playerNumber;
        if (playerNumber <= 6 && playerNumber >= 3)
            break;
    }

    players.resize(playerNumber);
    playedCards.resize(playerNumber);
    std::string name;
    int age;
    std::string color;

    for (int i{}; i < playerNumber; i++)
    {
        std::cout << "enter player" << i + 1 << " name: ";
        std::cin >> name;
        do
        {
            std::cout << "enter player" << i + 1 << " age: ";
            std::cin >> age;
        } while (age < 0);
        do
        {
            std::cout << "choose player" << i + 1 << "'s color(red,blue,yellow,green,purple,gray): ";
            std::cin >> color;
            for (int j = i - 1; j >= 0; j--)
            {
                if (color == players[j].getColor())
                    color = "none";
            }
        } while (color != "red" && color != "blue" && color != "yellow" && color != "green" && color != "gray" && color != "purple");
        players[i].setName(name);
        players[i].setAge(age);
        players[i].setColor(color);
        playedCards[i].person = players[i];
    }
}

void Game::print()
{
    // zero part
    system("CLS");
    std::cout << "------------------------------------------------------\n";
    std::cout << "the turn is: " << turn + 1 << std::endl;
    std::cout << war.getName() << " is on war\n";
    std::cout << "available cities: ";
    for (auto city : cities)
    {
        if (city.getISAvailable())
            std::cout << city.getName() << " , ";
    }
    std::cout << std::endl;
    // first part
    std::cout << "------------------------------------------------------\n";
    for (int i{}; i < players.size(); i++)
    {
        std::cout << playedCards[i].person.getName() << ": ";

        for (int j{}; j < playedCards[i].cards.size(); j++)
        {
            std::cout << playedCards[i].cards[j].getName() << ' ';
        }

        std::cout << std::endl;
    }

    // second part
    std::cout << "------------------------------------------------------\n";
    for (int i{}; i < players.size(); i++)
    {
        players[i].printCities();
    }
    std::cout << "------------------------------------------------------\n";
    // third part
    // it is input so i call it in gameflow method
}

void Game::input()
{
    players[turn].printCards();

    if (!players[turn].getIsPassed())
    {
        std::cout << players[turn].getName() << " choose a card to play or pass: ";
        std::string choice;
        std::getline(std::cin, choice);

        std::istringstream part(choice); // use to handle hellp command
        std::string word;                // to hold words
        int counter{};                   // to handle loop actions
        while (part >> word)
        {
            if (word != "help" && counter == 0)
            {
                Card Played = players[turn].play(choice);
                if (Played.getName() != "pass" && Played.getName() != "help")
                {
                    if (Played.getName() == "Matarsak")
                    {
                        Matarsak temp;
                        temp.ability(playedCards[turn], players[turn]);
                    }
                    playedCards[turn].cards.push_back(Played);
                    turn++;
                }
                else if (Played.getName() == "pass")
                {
                    players[turn].setIsPasssed(true);
                    turn++;
                }
                else if (Played.getName() == "help"){
                    manager.help("none") ;
                }

    
            }
            else
            {
                if (counter == 1)
                {
                    manager.help(word);
                }
            }
            counter++;
        }

        if (counter == 1 && choice == "help")
            manager.help("none");
    }
    else
    {
        turn++;
    }
}

// to fill the players hand based on the number of the token cities by them
void Game::fillCards()
{

    for (int i{}; i < players.size(); i++)
    {
        for (int j{}; j < 10 + players[i].getNumberOfCities(); j++)
        {
            int random = rand() % cards.size();
            players[i].addCard(cards[random]);
            cards.erase(cards.begin() + random);
        }
    }
}

// to make cards vector based on game info
void Game::generateCards()
{

    YellowCard y1(1, "1");
    YellowCard y2(2, "2");
    YellowCard y3(3, "3");
    YellowCard y4(4, "4");
    YellowCard y5(5, "5");
    YellowCard y6(6, "6");
    YellowCard y10(10, "10");
    Bahar bahar;
    Zemestan zemestan;
    ShirDokht shirdokht;
    TablZan tablzan;
    Matarsak matarsak;

    // pushing yellow cards
    for (int i{}; i < 10; i++)
    {
        cards.push_back(y1);
        if (i < 8)
            cards.push_back(y2);
        cards.push_back(y3);
        cards.push_back(y4);
        cards.push_back(y5);
        cards.push_back(y6);
        cards.push_back(y10);
    }

    for (int i{}; i < 16; i++)
    {

        cards.push_back(matarsak);

        if (i < 6)
        {
            cards.push_back(tablzan);
        }

        if (i < 3)
        {
            cards.push_back(bahar);
            cards.push_back(zemestan);
            cards.push_back(shirdokht);
        }
    }
}

void Game::setWar(std::string warior)
{
    std::string city;

    std::cout << warior << ' ';

    do
    {
        std::cout << "choose a city for war(first letter Upper case , other lower): ";
        std::cin >> city;
    } while (city != "Caline" && city != "Enna" && city != "Atela" && city != "Pladaci" && city != "Borge" && city != "Dimase" && city != "Morina" && city != "Olivadi" && city != "Rollo" && city != "Talmone" && city != "Armento" && city != "Elinia" && city != "Lia");

    for (int i{}; i < map.getCities().size(); i++)
    {
        if (city == cities[i].getName() && cities[i].getISAvailable())
        {
            cities[i].setIsAvailable(false);
            war = cities[i];
        }
        else if (city == cities[i].getName() && !cities[i].getISAvailable())
        {
            std::cout << "city is unavailable" << '\n';
            setWar(warior);
        }
    }
}

void Game::endWar(int winner)
{
    players[winner].addCity(war);
    war = City();
}

int Game::findWinner()
{
    Bahar b;                                  // to use ability
    Zemestan z;                               // to use ability
    TablZan t;                                // to use ability
    int score[players.size()]{};              // to hold scores
    int finalPoint{0};                        // to hold maximum score
    int index;                                // to hold winner index
    int numberOfWinners{};                    // to hold number of winners
    char result = calculationBaharZamastan(); // to check the season
    switch (result)
    {
    case 'B':
        for (int i = 0; i < playedCards.size(); i++)
        {
            b.ability(playedCards);
        }
        break;
    case 'Z':
        for (int i = 0; i < playedCards.size(); i++)
        {
            z.ability(playedCards);
        }
    case 'E':

        break;

    default:
        std::cout << "UNHANDELED ERROR WE FUCKED!";
        break;
    }

    for (int i = 0; i < playedCards.size(); i++)
    {
        if (isPlayedTablZan(i))
        {
            t.ability(playedCards[i].cards);
        }

        for (int j = 0; j < playedCards[i].cards.size(); j++)
        {

            score[i] += playedCards[i].cards[j].getPower();
        }

        if (score[i] > finalPoint)
        {
            finalPoint = score[i];
            index = i;
        }
    }
    for (int i{}; i < players.size(); i++)
    {
        if (score[i] == finalPoint)
            numberOfWinners++;
    }

    if (numberOfWinners == 1)
        return index;
    else
        return -1;
}

// this function will check taht Bahar or Zemestan index and if they are played which played last will effect
char Game::calculationBaharZamastan()
{
    int baharIndex = -1;
    int ZemestanIndex = -1;

    for (size_t i = 0; i < playedCards.size(); i++)
    {
        for (size_t j = 0; j < playedCards[i].cards.size(); j++)
        {
            if (playedCards[i].cards[j].getName() == "Bahar")
            {
                if (j > baharIndex)
                    baharIndex = j;
            }
            if (playedCards[i].cards[j].getName() == "Zemastan")
            {
                if (j > ZemestanIndex)
                    ZemestanIndex = j;
            }
        }
    }

    if (baharIndex > ZemestanIndex)
        return 'B';
    else if (ZemestanIndex > baharIndex)
        return 'Z';
    else
        return 'E';
}

bool Game::isPlayedTablZan(int index)
{
    for (int i{}; i < playedCards[index].cards.size(); i++)
    {
        if (playedCards[index].cards[i].getName() == "TablZan")
            return true;
    }
    return false;
}

void Game::handleTurn(int situation)
{
    if (situation == 1)
    {
        if (turn >= players.size())
            turn = 0;
    }
    else
    {
        turn = 0;
    }
}

int Game::findYoungest()
{

    int youngest{};
    int minAge = players[0].getAge();

    for (int i{}; i < players.size(); i++)
    {
        if (players[i].getAge() < minAge)
        {
            minAge = players[i].getAge();
            youngest = i;
        }
    }

    return youngest;
}

void Game::setWinner()
{
    int winner = findWinner();
    if (winner == -1)
    {
        for (int i{}; i < cities.size(); i++)
        {
            if (war.getNumber() == cities[i].getNumber())
            {
                cities[i].setIsAvailable(true);
                std::cout << "no won wins!\n";
            }
        }
    }
    else
    {
        std::cout << players[winner].getName() << " won!\n";
        players[winner].addCity(war);
        players[winner].setNumberOfCities(players[winner].getCities().size());

        for (int i{}; i < players.size(); i++)
        {
            if (players[i].getCanWar())
            {
                players[i].setCanWar(false);
            }
        }
        players[winner].setCanWar(true);
    }
}

void Game::clearBoard()
{
    for (int i{}; i < playedCards.size(); i++)
    {
        for (int j{}; j < playedCards[i].cards.size(); j++)
        {
            cards.push_back(playedCards[i].cards[j]);
            playedCards[i].cards.erase(playedCards[i].cards.begin() + j);
        }
    }
}

bool Game::checkForEnd()
{

    for (int i{}; i < players.size(); i++)
    {

        int numberOfCities = players[i].getNumberOfCities();

        if (numberOfCities >= 3)
        {
            switch (numberOfCities)
            {
            case 5:
                system("CLS");
                std::cout << players[i].getName() << " won the game!\n";
                return true;
                break;
            default: // to check 3 and 4
                if (checkNeighbors(players[i].getCities()))
                {
                    system("CLS");
                    std::cout << players[i].getName() << " won the game!\n";
                    return true;
                }
                break;
            }
        }
    }
    return false;
}

bool Game::checkNeighbors(std::vector<City> playerCities)
{

    int number = playerCities.size();
    int citiesNumber[number];
    for (int i{}; i < number; i++)
        citiesNumber[i] = playerCities[i].getNumber();

    if (number == 3)
    {
        std::vector<int> nc = playerCities[0].getNeighbors();
        int check{}; // i just wnat check that do we have first city's neighbors in player's cities so if check becomes 2 it means we have thme
        for (int i{}; i < 2; i++)
        {
            for (int j{}; j < 2; j++)
            {
                if (nc[i] == citiesNumber[j])
                    check++;
            }
        }
        if (check == 2)
            return true;
    }

    if (number == 4)
    {
        bool check[4]; // wh have 4 comb (comb 3 of 4)
        for (int i{}; i < 4; i++)
        {
            City temp = playerCities[0];
            playerCities.erase(playerCities.begin());
            check[i] = checkNeighbors(playerCities);
            playerCities.push_back(temp);
            if (check[i] == true)
                return true;
        }
    }

    return false;
}

bool Game::checkCards()
{
    int counter{};
    for (int i{}; i < players.size(); i++)
    {
        if (players[i].getCards().empty())
            counter++;
    }

    if (counter == players.size())
        return true;
    else
        return false;
}

void Game::gameFlow()
{
    manager.startMenue();                    // start menu will be shown to user
    takeGameInfo();                          // take names , ages , colors from user
    fillCards();                             // give cards to players
    players[findYoungest()].setCanWar(true); // give the war symbol to youngest player

    while (true)
    {

        int startWar{}; // to hold the index of starter of the war
        for (int i{}; i < players.size(); i++)
        {
            players[i].setIsPasssed(false);
            if (players[i].getCanWar())
                startWar = i;
        }

        setWar(players[startWar].getName()); // ask to choose city for war

        // main game loop
        while (true)
        {
            int passed{}; // to hold the number of the player that they've passed

            // to end war if all players have passed
            for (int i{}; i < players.size(); i++)
            {
                if (players[i].getIsPassed())
                    passed++;
            }
            if (passed == players.size())
            {
                break;
            }
            // getting input and print game info
            else
            {
                handleTurn(1);
                print();
                input();
                if (checkCards())
                {
                    fillCards();
                }
            }
        }

        setWinner();   // to find the winner and set him as winner
        clearBoard();  // to clear board
        handleTurn(0); // to make the turn equal to 1 to start next war from firt player

        // to check is any player has enough city to win and break loop
        if (checkForEnd())
        {
            break;
        }
    }
    exit(0); // end game
}
