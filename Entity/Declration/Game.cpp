#include<iostream>
#include<stdlib.h>
#include"../Interface/Game.h"
#include<time.h>



Game::Game(){
    std::srand(time(0)) ;
}

void Game::takeGameInfo(){
    std::cout<<"enter the number of players: " ;
    int playerNumber{} ;

    while (true){
        std::cin>>playerNumber ;
        if(playerNumber<=6 && playerNumber >=3)
            break;
    }

    players.resize(playerNumber) ;
    std::string name ;
    int age ;
    std::string color ;

    for(int i{} ; i<playerNumber ; i++){
        std::cout<<"enter player"<<i+1<<" name: " ;
        std::cin>>name ;
        do{
        std::cout<<"enter player"<<i+1<<" age: " ;
        std::cin>>age ;
        }while ( age <0 ) ;
        do{
        std::cout<<"choose player"<<i+1<<"'s color(red,blue,yellow,green,purple,gray): " ;
        std::cin>>color ;
        for(int j = i-1 ; j>=0 ; j--){
            if(color == players[j].getColor())
                color = "none" ;
        }
        }while(color != "red" && color != "blue" && color != "yellow" && color != "green" && color != "gray" && color != "purple" ) ;
        players[i].setName(name) ;
        players[i].setAge(age) ;
        players[i].setColor(color) ;
        
    }
    
}



void Game::print(){

    //second part
    std::cout<<"------------------------------------------------------" ;
    for(int i{} ; i<players.size() ; i++){
        players[i].printCities() ;
        std::cout<<std::endl ;
    }
    std::cout<<"------------------------------------------------------" ;
    //third part
    input() ;
    std::cout<<"------------------------------------------------------" ;

}


void Game::input(){
    std::cout<<"play a card or pass" ;
    std::string input ;
    if(input == "pass"){
        turn++ ;
    }
}

//to fill the players hand based on the number of the token cities by them
void Game::fillCards(){

    for(int i{} ; i< players.size() ; i++){
        for(int j{} ; j< 10 + players[i].getNumberOfCities() ; j++){
            int random = rand()%cards.size() ;
            players[i].addCard(cards[random]) ;
            cards.erase(cards.begin() + random) ;
        }
    }

}

//to make cards vector based on game info
void Game::generateCards(){
    
    YellowCard y1 (1) ;
    YellowCard y2 (2) ;
    YellowCard y3 (3) ;
    YellowCard y4 (4) ;
    YellowCard y5 (5) ;
    YellowCard y6 (6) ;
    YellowCard y10 (10) ;
    Bahar bahar ;
    Zemestan zemestan;
    ShahDokht shahdokht ;
    TablZan tablzan ;
    Matarsak matarsak ;
    
    //pushing yellow cards
    for(int i {} ; i<10 ; i++){
        cards.push_back(y1) ;
        if(i<8)
            cards.push_back(y2) ;
            cards.push_back(y3) ;
            cards.push_back(y4) ;
            cards.push_back(y5) ;
            cards.push_back(y6) ;
            cards.push_back(y10) ;
    }

    for(int i{} ; i<16 ; i++){

        cards.push_back(matarsak) ;

        if(i<6){
            cards.push_back(tablzan) ;
        }

        if(i<3){
            cards.push_back(bahar) ;
            cards.push_back(zemestan) ;
            cards.push_back(shahdokht) ;
        }

    }


}


void Game::setWar(){

}

void Game::endWar(){

}


void Game::gameFlow(){

}