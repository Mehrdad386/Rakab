#include <iostream>
#include <stdlib.h>
#include <sstream>
#include "../header/Game.h"
#include <time.h>
#include <string>
#include <limits>
#include <QDebug>



Game::Game()
{
//    MapWindow(nullptr);

    std::srand(time(0));
    turn = 0;
    generateCards();
    cities = map.getCities();

}

void Game::takeGameInfo()
{
    int playerNumber{};
    playerNumber = service::Getplayernumber();
    players.resize(playerNumber);
    playedCards.resize(playerNumber);
    std::string name;
    int age;
    std::string color;

    for (int i{}; i < playerNumber; i++)
    {

        name = service::readplayer(i).getName();
        age = service::readplayer(i).getAge();
        color = service::readplayer(i).getColor();

        players[i].setName(name);
        players[i].setAge(age);
        players[i].setColor(color);
        playedCards[i].person = players[i];
    }
}

void Game::print()
{
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
        std::cout << players[i].getName() << ": ";

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

// this function explanation : we will just take  player's choice in full line and we have to type of commands help / play and help can be to words so we check the word and make it part by part then do actions
void Game::input()
{
//    players[turn].printCards();
//    gamewindow.Showcard(players[turn].getCards());
//    if (!players[turn].getIsPassed())
//    {
//        std::string choice;
//        choice = gamewindow.Getplayedcard();
//        Card Played = players[turn].play(choice);
//        doAbility(Played) ;
//        playedCards[turn].cards.push_back(Played);
//        doAbility2(Played) ;
//        turn++;
//        if (gamewindow.Getpass())
//        {
//            players[turn].setIsPasssed(true);
//            turn++;
//            gamewindow.Setpass(false);
//        }

//    }
//        std::cout << players[turn].getName() << " choose a card to play or pass: ";

//        std::getline(std::cin, choice);

/*        std::istringstream part(choice); // use to handle hellp command
        std::string word;                // to hold words
        int counter{};*/                  // to handle loop actions

//        if (Played.getName() != "pass" && Played.getName() != "help")
//        {

//        }

//    }
}

void Game::doAbility(Card& Played)
{
    if (Played.getName() == "ShirinAghl")
    {
        ShirinAghl temp;
        Played = temp.ability(playedCards.at(turn).cards);
    }
    if (Played.getName() == "Matarsak")
    {
        Matarsak temp;
        temp.ability(playedCards[turn], players[turn]);
    }
    if (Played.getName() == "ParchamDar")
    {
        ParchamDar temp;
        if (checkPassed() == 0)
        {
//            players.at(turn).setCanWar(100);
        }
        temp.ability(players);
    }
    if (Played.getName() == "RakhshSefid")
    {
        RakhshSefid temp;
        temp.ability(players, turn);
    }
    if (Played.getName() == "ShirZan")
    {
        ShirZan temp;
        temp.ability(players.at(turn));
    }
}

void Game::doAbility2(Card& Played)
{
    if (Played.getName() == "FokSefid")
    {
        FokSefid temp ;
        temp.ability(playedCards) ;
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
//            qDebug()<<cards[random].getPower()<<"random";
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
//            qDebug()<<y3.getPower()<<"sinas";
    Bahar bahar;
    Zemestan zemestan;
    ShirDokht shirdokht;
    TablZan tablzan;
    Matarsak matarsak;
    ParchamDar parchamdar;
    ShirZan shirzan;
    RishSefid rishsefid;
    RakhshSefid rakhshsefid;
    ShirinAghl shirinaghl;
    FokSefid foksefid ;

    // pushing yellow cards
    for (int i{}; i < 10; i++)
    {
        cards.push_back(y1);
        if (i < 8)
            cards.push_back(y2);
        cards.push_back(y3);
//        qDebug()<<y3.getPower()<<"sinas2323";
        cards.push_back(y4);
        cards.push_back(y5);
        cards.push_back(y6);
        cards.push_back(y10);
    }

    for (int i{}; i < 16; i++)
    {

        cards.push_back(matarsak);

        if (i < 12)
        {
            cards.push_back(shirzan);
        }
        if (i < 6)
        {
            cards.push_back(tablzan);
            cards.push_back(rishsefid);
            cards.push_back(shirinaghl);
        }

        if (i < 3)
        {
            cards.push_back(bahar);
            cards.push_back(zemestan);
            cards.push_back(shirdokht);
            cards.push_back(parchamdar);
        }
        if (i < 2)
        {
            cards.push_back(rakhshsefid);
            cards.push_back(foksefid);
        }
    }
}

void Game::setWar(std::string warior)
{
    std::string city;
//    mapwindow->show();
//    mapwindow->Setwarlable(warior);

    for (int i{}; i < map.getCities().size(); i++)
    {
        if (city == cities[i].getName() && cities[i].getISAvailable())
        {
            cities[i].setIsAvailable(false);
            cities[i].setPow("war");
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
    Bahar b;                                        // to use ability
    Zemestan z;                                     // to use ability
    TablZan t;                                      // to use ability
    RishSefid r;                                    // to use ability
    int score[5]{};                    // to hold scores
    int finalPoint{0};                              // to hold maximum score
    int index;                                      // to hold winner index
    int numberOfWinners{};                          // to hold number of winners
    char resultSeason = calculationBaharZamastan(); // to check the season
    int resultRishSefid = calculateRishSefid();

    if (isPlayedRakhshSefid())
    {
        if (turn == 0)
            return players.size() - 1;
        else
            return turn - 1;
    }
    switch (resultRishSefid)
    {
    case -1:
        break;

    default:
        r.ability(playedCards);
        players.at(resultRishSefid).setCanPeace(1);
        break;
    }
    switch (resultSeason)
    {
    case 'B':
        b.ability(playedCards);
        break;
    case 'Z':
        z.ability(playedCards);
        break;
    case 'E':
        break;
    default:
        std::cout << "UNHANDELED ERROR WE FUCKED!";
        break;
    }

    for (int i = 0; i < playedCards.size(); i++)
    {
        int numberOfTablZan = isPlayedTablZan(i);
        if (numberOfTablZan > 0)
        {
            t.ability(playedCards[i].cards, numberOfTablZan);
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

int Game::calculateRishSefid()
{
    int index = -1;       // index of the player that he played RishSefid
    int secondIndex = -1; // to check who played last
    for (int i{}; i < playedCards.size(); i++)
    {
        for (int j{}; j < playedCards.at(i).cards.size(); j++)
        {
            if (playedCards.at(i).cards.at(j).getName() == "RishSefid" && j > secondIndex)
            {
                index = i;
                secondIndex = j;
            }
        }
    }
    return index;
}
// this function will check taht Bahar or Zemestan index and if they are played which played last will effect
char Game::calculationBaharZamastan()
{

    int countBahar{};
    int CountZemestan{};
    int baharIndex = -1;          // to save j
    int ZemestanIndex = -1;       // to save j
    int secondBahrIndex = -1;     // to save j
    int secondZemestanIndex = -1; // to save j

    for (size_t i = 0; i < playedCards.size(); i++)
    {
        for (size_t j = 0; j < playedCards[i].cards.size(); j++)
        {
            if (playedCards[i].cards[j].getName() == "Bahar")
            {
                countBahar++;
                baharIndex = j;
                secondBahrIndex = i;
            }
            if (playedCards[i].cards[j].getName() == "Zemestan")
            {
                CountZemestan++;
                ZemestanIndex = j;
                secondZemestanIndex = i;
            }
        }
    }

    if (baharIndex == -1 && ZemestanIndex == -1)
    {
        return 'E';
    }
    else
    {
        if (baharIndex > ZemestanIndex)
            return 'B';
        else if (ZemestanIndex > baharIndex)
            return 'Z';
        else
        {
            if (secondBahrIndex > secondZemestanIndex)
                return 'B';
            else
                return 'Z';
        }
    }
}

int Game::isPlayedTablZan(int index)
{
    int counter{};
    for (int i{}; i < playedCards[index].cards.size(); i++)
    {
        if (playedCards[index].cards[i].getName() == "TablZan")
            counter++;
    }
    return counter;
}

bool Game::isPlayedRakhshSefid()
{
    // after getting input from user turn will be added 1 so we minus 1 here from turn to check the player who played last card
    int index{};
    if (turn == 0)
    {
        index = players.size() - 1;
    }
    else
    {
        index = turn - 1;
    }

    for (int i{}; i < playedCards.at(index).cards.size(); i++)
    {
        if (playedCards.at(index).cards.at(i).getName() == "RakhshSefid")
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
            if (war.getName() == cities[i].getName())
            {
                cities[i].setIsAvailable(1);
                std::cout << "no won wins!\n";
            }
        }
    }
    else
    {
        std::cout << players[winner].getName() << " won!\n";
        players[winner].addCity(war);
        for (int j{}; j < cities.size(); j++)
        {
            if (cities[j].getName() == war.getName())
            {
                cities[j].setPow(players[winner].getColor());
            }
        }
        players[winner].setNumberOfCities(players[winner].getCities().size());
//        players[winner].setCanWar(players[winner].getCanWar() + 1);
    }
}

void Game::returnPower()
{
    for (int i{}; i < playedCards.size(); i++)
    {
        for (int j{}; j < playedCards[i].cards.size(); j++)
        {
            if (isdigit(playedCards[i].cards[j].getName()[0]))
                playedCards[i].cards[j].setPower(std::stoi(playedCards[i].cards[j].getName()));
        }
    }
}

void Game::clearBoard()
{
    for (int i = 0; i < playedCards.size(); i++)
    {
        for (int j = 0; j < playedCards[i].cards.size(); j++)
        {
            cards.push_back(playedCards[i].cards[j]);
        }
        playedCards[i].cards.clear(); // Clear the cards in the current player's playedCards
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
    // here we save cities numer on an int array to work easier with them
    int number = playerCities.size();
    // int citiesNumber[number];
    // for (int i{}; i < number; i++)
    //     citiesNumber[i] = playerCities[i].getNumber();

    if (number == 3)
    {

        int check{}; // i just wnat check that do we have first city's neighbors in player's cities so if check becomes 2 it means we have thme

        if (map.getIsNeighbor()[playerCities[0].getNumber()][playerCities[1].getNumber()])
            check++;
        if (map.getIsNeighbor()[playerCities[0].getNumber()][playerCities[2].getNumber()])
            check++;

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

int Game::checkCards()
{
    int counter{};
    for (int i{}; i < players.size(); i++)
    {
        if (players[i].getCards().empty())
            counter++;
    }

    return counter;
}

int Game::checkPassed()
{
    int passed{}; // to hold the number of the player that they've passed
    // to end war if all players have passed
    for (int i{}; i < players.size(); i++)
    {
        if (players[i].getIsPassed())
            passed++;
    }
    return passed;
}

void Game::takeRemainingCard()
{
    for (int i{}; i < players.size(); i++)
    {
        if (!players[i].getCards().empty())
        {
            players[i].clearCards();
        }
    }
}

int Game::findStarterOfWar()
{
    int startWar;
    int compare{};
    int winner;
    int countEquals{};

//    for (int i{}; i < players.size(); i++)
//    {
//        players[i].setIsPasssed(false);
//    }
    int s=0;
    int i=-1;
    for (auto p : playedCards)
    {
        i++;
        if (p.person.getCanWar() % 2 == 1)
        {
            winner = i;
        }
        if (compare != 0 && compare == p.person.getCanWar())
        {
            countEquals++;
        }
        if (compare < p.person.getCanWar())
        {
            startWar = i;
            compare = p.person.getCanWar();
        }
    }
    for (auto &p : playedCards)
    {
        p.person.setCanWar(s);
    }
    if (countEquals > 0)
    {
        startWar = winner;
    }
//    if (compare == 0)
//    {
//        startWar = findYoungest();
//    }

    return startWar;
}

void Game::makingPeace()
{
    for (int i{}; i < players.size(); i++)
    {
        if (players.at(i).getCanPeace() == 1)
        {
            for (int j{}; j < cities.size(); j++)
            {
                if (cities[i].getPOW() == "peace")
                {
                    cities[i].setIsAvailable(true);
                    cities[i].setPow("nothing");
                }
            }
            std::string city;
            do
            {
//                std::cout << players.at(i).getName() << " choose a city to bring peace to it: ";
//                std::cin >> city;
            } while (city != "Caline" && city != "Enna" && city != "Atela" && city != "Pladaci" && city != "Borge" && city != "Dimase" && city != "Morina" && city != "Olivadi" && city != "Rollo" && city != "Talmone" && city != "Armento" && city != "Elinia" && city != "Lia" && city != "Bella");

            for (int i{}; i < map.getCities().size(); i++)
            {
                if (city == cities[i].getName() && cities[i].getISAvailable())
                {
                    cities[i].setIsAvailable(false);
                    cities[i].setPow("peace");
                    peace = cities[i];
                }
                else if (city == cities[i].getName() && !cities[i].getISAvailable())
                {
                    std::cout << "city is unavailable" << '\n';
                    makingPeace();
                }
            }
        }
    }
    for (int i{}; i < players.size(); i++)
    {
        players.at(i).setCanPeace(0);
    }
}

void Game::load()
{
    GameData gameData = data.loadGame(cities, cards);
    players = gameData.players;
    turn = gameData.turn;
    war = gameData.war;
    peace = gameData.peace;
    playedCards = gameData.playedCards;
    std::cout << "is loading...\n";
}

void Game::YoungetPlayersetwar()
{
//    players[findYoungest()].setCanWar(1);
}

void Game::gameFlow()
{
/*    int roundCounter{}; */                  // to count how many rounds the while loop is working
/*        takeGameInfo();                       // take names , ages , colors from user
        fillCards();*/                          // give cards to players
/*        players[findYoungest()].setCanWar(1);*/ // give the war symbol to youngest player
//    else
//    {
//        load(); // load game from data class
//    }

//    while (true)
//    {
//        roundCounter++;
//        if (roundCounter != 1)
//        {
//            int startWar = findStarterOfWar();   // to hold the index of starter of the war
//            setWar(players[startWar].getName()); // ask to choose city for war
//            makingPeace();
//        }

        // main game loop
//        while (true)
//        {

//            if (checkCards() == players.size() || checkPassed() == players.size())
//            {
//                break;
//            }
//            else
//            {
                // getting input and print game info
                handleTurn(1);
//                print();
                input();
//            }
            data.SaveGame(players, cities, turn, war, peace, playedCards);
//        }

        // to check should we charge the players hands or not
        if (checkCards() >= players.size() - 1)
        {
            takeRemainingCard();
            fillCards();
        }
        setWinner();   // to find the winner and set him as winner
        returnPower(); // to return cards' power
        clearBoard();  // to clear board
        handleTurn(0); // to make the turn equal to 1 to start next war from firt player

        // to check is any player has enough city to win and break loop
//        if (checkForEnd())
//        {
//            break;
//        }
//    }
//    exit(0); // end game
}

std::vector<Player> Game::GetPlayers()
{
    return  players;
}

void Game::Setplayedcard(PlayedCard &pc)
{
    int i{0};
    for(auto &playcard : playedCards)
    {
        if(playcard.person.getName() == pc.person.getName())
        {
//            qDebug()<<"pklac"<<QString::fromStdString( playcard.person.getName())<<"pc name4"<<QString::fromStdString( pc.person.getName());
            playedCards[i].cards.push_back(pc.cards[0]);
        }
        i++;
    }
    playedCards.push_back(pc);
}

std::vector<PlayedCard>& Game::Getplayedcard()
{
    return playedCards;
}

