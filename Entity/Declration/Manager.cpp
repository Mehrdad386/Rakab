#include"../Interface/Manager.h"
#include<iostream>


int Manager::startMenue(){

    system("CLS") ;
    std::cout << "-----------------------" << '\n';
    std::cout << "1- Start game" << '\n';
    std::cout<<"2- load game"<<'\n' ;
    std::cout << "3- help" << '\n';
    std::cout << "4- Exit game" << '\n';
    std::cout << "-----------------------" << '\n';
    int choice;
    do
    {
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            clear() ;
            return 1 ;
            break;
        case 2 :
            clear() ;
            return 2 ;
            break;
        case 3:
            help("none");
            startMenue() ;
            break;
        case 4:
            exitGame();
            break;

        default:
            std::cout << "invalid choice" << '\n';
            break;
        }
    } while (choice != 1 && choice != 2 && choice != 3);
    return 0 ;
}


void Manager::help( std::string help ){

    if(help == "none"){
        std::cout<<"bahar: this card will find the strongest yellow card betwwen played yellow cards and then increasse its power three units.\n" ;
        std::cout<<"zemestan: this card will set the power of all played yellow cards one.\n" ;
        std::cout<<"tablzan: this card will double the power of yellow played cards by its owner.\n" ;
        std::cout<<"shirdokht: this card's power is 10 and no other card will effect on its power.\n" ;
        std::cout<<"mataarsak: if you play this card you will be able to return back one of your played card to your hand.\n" ;
    }
    else if(help == "bahar")
        std::cout<<"bahar: this card will find the strongest yellow card betwwen played yellow cards and then increasse its power three units.\n" ;
    else if (help == "zemestan")
        std::cout<<"zemestan: this card will set the power of all played yellow cards one.\n" ;
    else if (help =="tablzan")
        std::cout<<"tablzan: this card will double the power of yellow played cards by its owner.\n" ;
    else if(help == "shirdokht")
        std::cout<<"shirdokht: this card's power is 10 and no other card will effect on its power.\n" ;
    else if(help == "matarsak")
        std::cout<<"mataarsak: if you play this card you will be able to return back one of your played card to your hand.\n" ;
    else
        std::cout<<"invalid card's name\n" ;

    std::cout<<"enter 0 to leave: " ;
    int leave = 1 ;
    while(true){
        std::cin>>leave ;
        if(leave == 0)
            break ;
        else
            std::cout<<"invalid input\n" ;
    }

}

void Manager::exitGame(){
    system("cls");
    std::cout << "are you sure you want to exit(1 : yes , 0 : no )?";
    int sure;

    do
    {
        std::cin >> sure;
        if (sure == 1)
            exit(0);
        else if (sure == 0)
            startMenue();
        else
            std::cout << "invalid input" << '\n';

    } while (sure != 1 && sure != 0);
}

void Manager::clear(){ system("CLS") ; }