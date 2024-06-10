#include"../Interface/Manager.h"
#include<iostream>


void Manager::startMenue(){

    system("CLS") ;
    std::cout << "-----------------------" << '\n';
    std::cout << "1- Start game" << '\n';
    std::cout << "2- help" << '\n';
    std::cout << "3- Exit game" << '\n';
    std::cout << "-----------------------" << '\n';
    int choice;
    do
    {
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            clear() ;
            break;
        case 2:
            help("none");
            break;
        case 3:
            exitGame();
            break;

        default:
            std::cout << "invalid choice" << '\n';
            break;
        }
    } while (choice != 1 && choice != 2 && choice != 3);

}


void Manager::help( std::string help ){

    if(help == "none"){
        std::cout<<"bahar help\n" ;
        std::cout<<"zemestan help\n" ;
        std::cout<<"tablzan help\n" ;
        std::cout<<"shahdokht help\n" ;
        std::cout<<"mataarsak help\n" ;
    }
    else if(help == "bahar")
        std::cout<<"bahar help\n" ;
    else if (help == "zemestan")
        std::cout<<"zemestan help\n" ;
    else if (help =="tablzan")
        std::cout<<"tablzan help\n" ;
    else if(help == "shahdokht")
        std::cout<<"shahdokht help\n" ;
    else if(help == "matarsak")
        std::cout<<"mataarsak help\n" ;
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