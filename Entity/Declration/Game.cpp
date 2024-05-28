#include<iostream>
#include"Game.h"




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