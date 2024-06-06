#include <iostream>
#include <stdlib.h>
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
    system("CLS");
    std::cout << "the turn is: " << turn + 1 << std::endl;
    std::cout << war.getName() << " is on war\n";
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
        std::cin >> choice;

        if (choice == "pass")
        {
            players[turn].setIsPasssed(true);
            turn++;
        }
        else if (choice == "help")
        {
            if (choice.find("help ") == 0)
            {
                choice = choice.substr(5);
                manager.help(choice);
            }
            else
                manager.help("none");
        }

        else
        {
            Card Played = players[turn].play(choice);
            if (Played.getName() == "Matarsak")
            {
                Matarsak temp;
                temp.ability(playedCards[turn]);
            }
            playedCards[turn].cards.push_back(Played);
            turn++;
        }
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
    Bahar b;
    Zemestan z;
    TablZan t;
    int count{0}, finalPoint{0}, index;
    char result = calculationBaharZamastan();
    switch (result)
    {
    case 'B':
        for (size_t i = 0; i < playedCards.size(); i++)
        {
            b.ability(playedCards);
        }
        break;
    case 'Z':
        for (size_t i = 0; i < playedCards.size(); i++)
        {
            z.ability(playedCards);
        }
        break;
    case 'E':
        break;

    default:
        std::cout << "UNHANDELED ERROR WE FUCKED!";
        break;
    }

    for (size_t i = 0; i < playedCards.size(); i++)
    {
        if (isPlayedTablZan(i))
        {
            t.ability(playedCards[i].cards);
        }

        for (size_t j = 0; j < playedCards[i].cards.size(); j++)
        {

            count += playedCards[i].cards[j].getPower();
        }

        if (count > finalPoint)
        {
            finalPoint = count;
            index = i;
        }
        count = 0;
    }
    return index;
}

char Game::calculationBaharZamastan()
{
    int countBahar{0}, countZemestan{0};
    for (size_t i = 0; i < playedCards.size(); i++)
    {
        for (size_t j = 0; j < playedCards[i].cards.size(); j++)
        {
            if (playedCards[i].cards[j].getName() == "Bahar")
            {
                countBahar++;
            }
            if (playedCards[i].cards[j].getName() == "Zemastan")
            {
                countZemestan++;
            }
        }
    }
    if (countBahar > countZemestan)
    {
        return 'B';
    }
    else if (countZemestan > countBahar)
    {
        return 'Z';
    }

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

void Game::handleTurn()
{
    if (turn >= players.size())
        turn = 0;
}

int Game::findYoungest()
{

    int youngest{};
    int minAge = players[0].getAge();

    for (int i{}; i < players.size(); i++)
    {
        if (players[i].getAge() < minAge)
        {
            youngest = i;
        }
    }

    return youngest;
}

void Game::setWinner()
{
    std::cout << players[findWinner()].getName() << " won!\n";
    players[findWinner()].addCity(war);
}

void Game::gameFlow()
{
    takeGameInfo();
    fillCards();
    setWar(players[findYoungest()].getName());

    while (true)
    {
        int passed{};
        for (int i{}; i < players.size(); i++)
        {
            if (players[i].getIsPassed())
                passed++;
        }
        if (passed == players.size())
        {
            break;
        }
        else
        {
            handleTurn();
            print();
            input();
        }
    }
    setWinner();
}
