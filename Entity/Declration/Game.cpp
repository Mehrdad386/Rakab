#include <iostream>
#include <stdlib.h>
#include "../Interface/Game.h"
#include <time.h>

Game::Game()
{
    std::srand(time(0));

    turn = 0 ;
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
    // first part
    std::cout << "------------------------------------------------------\n";
    for (int i{}; i < players.size(); i++)
    {
        std::cout << playedCards[i].person.getName() << ": ";

        for (int j{}; j < playedCards[i].cards.size(); j++)
        {
            std::cout << playedCards[i].cards[j].getName();
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
    input();
    std::cout << "------------------------------------------------------\n";
}

void Game::input()
{
    players[turn].printCards() ;

    if (!players[turn].getIsPassed())
    {
        std::cout << "choose a card to play or pass(use camel case): ";
        std::string choice;
        std::cin >> choice;

        if (choice == "pass")
        {
            players[turn].setIsPasssed(true);
            turn++;
        }
        else
        {
            playedCards[turn].cards.push_back(players[turn].play(choice));
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
            cards.erase(cards.begin() + random - 1);
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
    ShirDokht shirdokht ;
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

void Game::setWar()
{
    std::string city;
    do
    {
        std::cout << "choose a city for war(first letter Upper case , other lower): ";
        std::cin >> city;
    } while (city != "Caline" || city != "Enna" || city != "Atela" || city != "Pladaci" || city != "Borge" || city != "Dimase" || city != "Morina" || city != "Olivadi" || city != "Rollo" || city != "Talmone" || city != "Armento" || city != "Elinia" || city != "Lia");

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
            setWar();
        }
    }
}

void Game::endWar(int winner)
{
    players[winner].addCity(war);
    war = City();
}

int Game::findWinner(std::vector<PlayedCard> pc)
{
    Bahar b;
    Zemestan z;
    Player p;
    int count{0}, finalPoint{0}, index;
    char result = calculationBaharZamastan(pc);
    switch (result)
    {
    case 'B':
        for (size_t i = 0; i < pc.size(); i++)
        {
            b.ability(pc[i]);
        }
        break;
    case 'Z':
        for (size_t i = 0; i < pc.size(); i++)
        {
            z.ability(pc[i]);
        }
        break;
    case 'E':
        break;

    default:
        std::cout << "UNHANDELED ERROR WE FUCKED!";
        break;
    }
    for (size_t i = 0; i < pc.size(); i++)
    {
        for (size_t j = 0; j < pc[i].cards.size(); j++)
        {
            count += pc[i].cards[j].getPower();
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

char Game::calculationBaharZamastan(std::vector<PlayedCard> pc)
{
    int countBahar{0}, countZemestan{0};
    for (size_t i = 0; i < pc.size(); i++)
    {
        for (size_t j = 0; j < pc[i].cards.size(); j++)
        {
            if (pc[i].cards[j].getName() == "Bahar")
            {
                countBahar++;
            }
            if (pc[i].cards[j].getName() == "Zemastan")
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

void Game::gameFlow()
{
    takeGameInfo() ;
    fillCards() ;
    print() ;

}