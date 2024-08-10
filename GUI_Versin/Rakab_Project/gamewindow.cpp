#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <QScreen>
#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QTextEdit>
#include <QApplication>
#include <QComboBox>
#include <QLineEdit>
#include <QPixmap>
#include "./Entity/header/City.h"
#include "QFile"
#include "QDebug"
#include "QResource"
#include "QPropertyAnimation"
#include "QObject"
#include <cstdlib> // برای std::stod
#include <string>
#include <QMessageBox>

GameWindow::GameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameWindow)

{
    ui->setupUi(this);
    this->setWindowTitle("WarPlace");
    this->showMaximized();
    posionbg();
    posionscore();
    posioncity();
    posionturn();
    posionmapsetting();
    ui->Map_pic->hide();
    Showplayerinfo();
    Showcity();
    Posionpassplay();
    Ispass = false;
    Setplaycard(true);
    Setturn(0);
    game.takeGameInfo();
    game.fillCards();
    game.YoungetPlayersetwar();
    std::vector <Player> players = game.GetPlayers();;
    Playerturn(players.at(game.findYoungest()));
    Showcard(players.at(game.findYoungest()).getCards());
//    qDebug()<<"color is"<<QString::fromStdString(players.at(game.findYoungest()).getColor());
//    Player p;
//    RishSefid r;
//    Matarsak m;
//    p.addCard(r);
//    p.addCard(m);
//    p.setName("Sina");
//    p.setColor("Blue");
//    Showcard(p.getCards());

//    Playerturn(p);

//    Game Game ;
//    Game.gameFlow();

}

GameWindow ::~GameWindow ()
{
    delete ui;
}

void GameWindow::posionmapsetting()
{
    QScreen *screen =  QGuiApplication::primaryScreen();
    QSize window = screen->size();
    ui->Map_btn->setMinimumSize(200,100);
    ui->Map_btn->move(window.width()-300,10);
    ui->Setting_btn->setMinimumSize(80,80);
    ui->Setting_btn->move(window.width()-100,18);
}

void GameWindow::posionturn()
{
    QScreen *screen =  QGuiApplication::primaryScreen();
    QSize window = screen->size();
    ui->Turn_layout->setMinimumSize(400,80);
    ui->Turn_layout->move(window.width()/2-200,50);
}

void GameWindow::posionbg()
{
    QLabel *bg = ui->BG;
    QScreen *screen =  QGuiApplication::primaryScreen();
    QSize window = screen->size();
    bg->setMinimumSize(window.width(),window.height());

}

void GameWindow::posionscore()
{
    QScreen *screen =  QGuiApplication::primaryScreen();
    QSize window = screen->size();
    QPushButton *scorebtn = ui->Score_btn;
    scorebtn->setMinimumSize(200,100);
    scorebtn->move(window.width()/100,window.height()/100);
    QWidget *scorebord = ui->ScorebordLayout;
    scorebord->move(window.width()/100,(window.height()/100)+100);
    scorebord->setMinimumSize(window.width()/2-100,window.height()/2-100);
    scorebord->hide();
}

void GameWindow::posioncity()
{
    QScreen *screen =  QGuiApplication::primaryScreen();
    QSize window = screen->size();
    QWidget *cities =ui->City_layout;
    cities->setMinimumSize(500,500);
    cities->move(window.width()/100,(window.height()/100)+(window.height()/2));
    cities->hide();
}

void GameWindow::on_Score_btn_clicked()
{
    if(ui->ScorebordLayout->isHidden())
    {
        ui->ScorebordLayout->show();
        ui->City_layout->show();
    }
    else if(!ui->ScorebordLayout->isHidden())
    {
        ui->ScorebordLayout->hide();
        ui->City_layout->hide();
    }
}

void GameWindow::on_Map_btn_clicked()
{
    QScreen *screen =  QGuiApplication::primaryScreen();
    QSize window = screen->size();
    ui->Map_pic->setMinimumSize(660,810);
    ui->Map_pic->move(window.width()/2-330,window.height()/2-405);
    if(ui->Map_pic->isHidden())
    {
        ui->Map_pic->show();
    }
    else if(!ui->Map_pic->isHidden())
    {
        ui->Map_pic->hide();
    }
}

void GameWindow::Showplayerinfo()
{

    for (int i = 1;i<7 ; i++)
    {
        QLabel *name_txt = findChild<QLabel *>(QString("Name_%1").arg(i));
        QString qtextLable = QString::fromStdString(service::readplayer(i-1).getName());
        name_txt->setText(qtextLable);
        QLabel *name1_txt = findChild<QLabel *>(QString("name_%1").arg(i));
        name1_txt->setText(qtextLable);
    }

    for (int j = 1;j < 7 ;j++ )
    {
        QLabel *name_txt = findChild<QLabel *>(QString("Name_%1").arg(j));
        if(name_txt->text()=="")
        {
            name_txt->hide();
            QLabel *score_txt = findChild<QLabel *>(QString("Score_%1").arg(j));
            QLabel *card_txt = findChild<QLabel *>(QString("Card_%1").arg(j));
            QLabel *city_txt = findChild<QLabel *>(QString("City_%1").arg(j));
            score_txt->hide();
            card_txt->hide();
            city_txt->hide();
        }
    }
}

void GameWindow::Showcity()
{
    std::string freecities="";
    QString qtextLable = QString::fromStdString(service::Getwarplace());
    ui->Cityinwar->setText(qtextLable+" is in WAR!");
    Map map;
    std::vector<City> cities = map.getCities();
    for (auto c :cities ) {
        freecities = freecities+c.getName();
    }
    QString qtextcities = QString::fromStdString(freecities);
    ui->Freecities->setText("Free cities are : "+qtextcities);
}

void GameWindow::Showcard(std::vector<Card> cards)
{
    std::vector <Player> players = game.GetPlayers();
    int counter{-1};
    std::vector <Card> pcards = game.Getplayedcard()[Turn].cards;

    for (auto c :  pcards)
    {

        counter++;

        if(c.getName() == pcards[counter].getName())
        {
            cards.erase(cards.begin()+counter);

        }
    }


//    qDebug()<<"loop nmae"<<counter<<cards.size();
    for (auto c : cards ) {
//        qDebug()<<"loop nmae"<<QString::fromStdString(c.getName());

    }
    QScreen *screen =  QGuiApplication::primaryScreen();
    QSize window = screen->size();
    QSize size1 = QSize(165,225);
    QString pathfile = ":./src/";
    for (int i = 0 ; i<cards.size() ; i++ )
    {

        QPushButton *cardBut = findChild<QPushButton *>(QString("PlayCard_%1").arg(i+1));
//        if()
//        {
        QString qcardname = QString::fromStdString(cards[i].getName());
//        qDebug()<<cardBut->accessibleName()<<"accname";
        pathfile = pathfile+qcardname+".png";
        QIcon cardpic(pathfile);
        cardBut->setIcon(cardpic);
        cardBut->setAccessibleName(QString::fromStdString(cards[i].getName()));
//        }
        cardBut->setStatusTip("Down");
        pathfile =":./src/";

    }
    for (int j = 1; j<11 ; j++ )
    {
        QPushButton *cardBut = findChild<QPushButton *>(QString("PlayCard_%1").arg(j));
        cardBut->move((j*170),window.height()-300);
        cardBut->setMinimumSize(165,225);
        cardBut->setText("");
        cardBut->setIconSize(size1);
    }
        for (int r=cards.size()+1; r<11 ; r++ )
        {
            QPushButton *cardBut = findChild<QPushButton *>(QString("PlayCard_%1").arg(r));
            pathfile = pathfile+"Back.png";
            QIcon cardpic(pathfile);
            cardBut->setIcon(cardpic);
            pathfile =":./src/";
            cardBut->setDisabled(true);
        }




    pathfile =":./src/";
}

bool GameWindow::Getpass()
{
    return Ispass;
}

void GameWindow::Setpass(bool flag)
{
    Ispass = flag;
}

void GameWindow::on_PassBtn_clicked()
{
    Ispass = true;
    on_PlayCardBtn_clicked();
}

void GameWindow::Posionpassplay()
{
    ui->PassBtn->move(700,200);
    ui->PlayCardBtn->move(1100,200);
}

void GameWindow::Hidepasspaly()
{
    ui->PassBtn->hide();
    ui->PlayCardBtn->hide();
}

void GameWindow::Showpassplay()
{
    ui->PlayCardBtn->show();
    ui->PassBtn->show();

}

void GameWindow::Playerturn(Player p)
{
    QString qplayername = QString::fromStdString(p.getName());
    ui->Player_turn->setText(qplayername);
    QString qplayercolor = QString::fromStdString(p.getColor());
    ui->Turn_layout->setStyleSheet("background-color: "+qplayercolor);
}

void GameWindow::Animationcard(int btnnumber)
{
    QScreen *screen =  QGuiApplication::primaryScreen();
    QSize window = screen->size();
    QPushButton *cardBut = findChild<QPushButton *>(QString("PlayCard_%1").arg(btnnumber));
    QRect firstpo = cardBut->geometry();
    QPropertyAnimation *animation = new QPropertyAnimation(cardBut, "geometry");
            animation->setDuration(1000); // مدت زمان انیمیشن به میلی‌ثانیه
            animation->setEasingCurve(QEasingCurve::OutCubic); // منحنی انیمیشن
    QRect startRect;
    if (cardBut->accessibleName() != "")
    {
        if (cardBut->y() > window.height()-400 && Playcard)
        {
             Setplaycard(false);
             startRect= cardBut->geometry();
           QRect endRect((width() - cardBut->width()) / 2,
                          (height() - cardBut->height()) / 2,
                          cardBut->width(),
                          cardBut->height());
           cardBut->setStatusTip("UP");
            animation->setStartValue(startRect);
            animation->setEndValue(endRect);

        }
        if (cardBut->y() <window.height()-400 && !Playcard)
        {
              Setplaycard(true);
             startRect = cardBut->geometry();
             QRect endRect2 (btnnumber*170,
                             window.height()-300,
                             165,
                             225);
             cardBut->setStatusTip("Down");
            animation->setStartValue(startRect);
            animation->setEndValue(endRect2);
        }
        animation->start();
    }
}

void GameWindow::Setplaycard(bool flag)
{
    Playcard = flag;
}

bool GameWindow::Getplaycard()
{
    return Playcard;
}

void GameWindow::on_PlayCard_7_clicked()
{
    Animationcard(7);
}

void GameWindow::on_PlayCard_1_clicked()
{
    Animationcard(1);

}

void GameWindow::on_PlayCard_2_clicked()
{
    Animationcard(2);
}

void GameWindow::on_PlayCard_3_clicked()
{
    Animationcard(3);
}

void GameWindow::on_PlayCard_6_clicked()
{
    Animationcard(6);
}

void GameWindow::on_PlayCard_4_clicked()
{
    Animationcard(4);
}

void GameWindow::on_PlayCard_5_clicked()
{
    Animationcard(5);
}

void GameWindow::on_PlayCard_8_clicked()
{
    Animationcard(8);
}

void GameWindow::on_PlayCard_9_clicked()
{
    Animationcard(9);
}

void GameWindow::on_PlayCard_10_clicked()
{
    Animationcard(10);
}

void GameWindow::SetPlayedcard(std::string name)
{
    Playedcard = name;
}

std::string GameWindow::Getplayedcard()
{
    return Playedcard;
}

void GameWindow::on_PlayCardBtn_clicked()
{

    if(!Getpass())
    {
        Findplayedcard();
        Setplaycard(true);
        Gameflow();
        Updatescore();
        Checkwinner();
    }
    Handelturn();
}

void GameWindow::Setturn(int turn)
{
    Turn = turn;
}

int GameWindow::GetTurn()
{
    return Turn;
}

void GameWindow::Handelturn()
{
    if(Getpass())
    {
        qDebug()<<"iiiisss paaas";
        bool flag =true;
       std::vector <PlayedCard>& p =  game.Getplayedcard();
       p[GetTurn()].person.setIsPasssed(true);
        Setpass(false);
    }
    std::vector <Player> players = game.GetPlayers();

    if (GetTurn() > -2)
    {
//        for (auto &p : game.Getplayedcard())
//        {
//        }

        Turn++;
        if (GetTurn() > players.size()-1)
        {
            Setturn(0);
        }
        if(game.Getplayedcard()[GetTurn()].person.getIsPassed())
        {
//            qDebug()<<"size"<<game.Getplayedcard().size();
            Turn++;
            if(Turn==3)
                Turn=0;
        }

        Playerturn(players.at(Turn));
        Showcard(players.at(Turn).getCards());
    }
    if (Turn == -2)
    {
        int startWar = game.findStarterOfWar();
               qDebug()<<"starwas"<<QString::number(startWar);

//        Playerturn(players.at(startWar));
//        Showcard(players.at(startWar).getCards());
        Setturn(startWar);
    }
        qDebug()<<GetTurn()<<"turn";

}

void GameWindow::Gameflow()
{
    PlayedCard pc;
   Card playcard =  game.GetPlayers()[GetTurn()].play(Getplayedcard());
   pc.person = game.GetPlayers()[GetTurn()];
   pc.cards.push_back(playcard);
//    qDebug()<<QString::fromStdString(pc.cards[0].getName())<<"pc ";

//    game.doAbility(playcard);
//    qDebug()<<QString::fromStdString(game.GetPlayers()[GetTurn()].play(Getplayedcard()).getName())<<"NAME game flow";
    game.Setplayedcard(pc);


//            for(auto c:game.Getplayedcard(GetTurn()))
//            {
//                qDebug()<<QString::fromStdString(c.getName());
//            }
//        game.doAbility2(playcard);


//game.GetPlayers()[GetTurn()].removeCard(playcard);
//     game.GetPlayers()[GetTurn()].removeCard(playcard);
//     for ( auto c : game.GetPlayers()[GetTurn()].getCards()) {
//         qDebug() << "Card in player after removal:" << QString::fromStdString(c.getName());
//     }
}

void GameWindow::Updatescore()
{
    double score{0};
    for(auto c :game.Getplayedcard().at(GetTurn()).cards)
    {
        int value = c.getPower();
        score = score + value;
        qDebug()<<"namer"<<QString::fromStdString(c.getName())<<"s v"<<score;
    }
    QLabel *scorelable = findChild<QLabel *>(QString("Score_%1").arg(GetTurn()+1));
    qDebug()<<"score is"<<score;
    scorelable->setText(QString::number(score));
}

void GameWindow::Findplayedcard()
{
    QScreen *screen =  QGuiApplication::primaryScreen();
    QSize window = screen->size();
    for (int i=1; i<11 ;i++ )
    {
        QPushButton *cardBut = findChild<QPushButton *>(QString("PlayCard_%1").arg(i));

        if (cardBut->accessibleName() != "")
        {
            if (cardBut->statusTip() == "UP")
            {
                SetPlayedcard(cardBut->accessibleName().toStdString());
                cardBut->setToolTip("play");
//                qDebug()<<"card is"<<QString::fromStdString(Getplayedcard());
            }
        }
    }
}

void GameWindow::Checkwinner()
{
    int canwar=1;
    if(Checkroundisover())
    {
        PlayedCard winner = Checkwinnerround();
        QString Masseg ="The Winner Is "+ QString::fromStdString(winner.person.getName());
        QMessageBox::information(this, "Round Is Over", Masseg);
        game.Getplayedcard()[Turn].person.setCanWar(canwar);
        Readynextround();
    }

}

PlayedCard GameWindow::Checkwinnerround()
{
    int score{0},bestscore{0};
    PlayedCard winner;
    std::vector <PlayedCard> PC = game.Getplayedcard();
    for (auto pc : PC)
    {
        for (auto c :pc.cards )
        {
            score =score+c.getPower();
        }
        if (score > bestscore)
        {
            bestscore = score;
            winner = pc;
        }
        score=0;
    }
    return winner;
}

bool GameWindow::Checkroundisover()
{
    int passCounter{0},cardCounter{0};
    for (auto p : game.Getplayedcard())
    {
        if(p.person.getIsPassed())
        {
            passCounter++;
        }
        for (auto pc : game.Getplayedcard())
        {
               if(pc.cards.size() == game.GetPlayers()[GetTurn()].getCards().size())
               {
                   cardCounter++;
               }
        }
        if(passCounter == service::Getplayernumber()-1)
        {
            return true;
        }
        if(cardCounter == (service::Getplayernumber())-1)
        {
            return true;
        }
//       qDebug()<<"pas counter"<<QString::number(passCounter);

    }
    return false;
}

void GameWindow::Readynextround()
{
    std::vector <PlayedCard>& p =  game.Getplayedcard();
    for (auto &pc :p )
    {
        if(pc.person.getIsPassed())
        {
            pc.person.setIsPasssed(false);

        }
        pc.cards.erase(pc.cards.begin(),pc.cards.end());
        for (auto c  :  pc.cards)
        {
            qDebug()<<"csarsd aFGERTY"<<QString::fromStdString(c.getName());
        }
        qDebug()<<"booklll"<<pc.person.getIsPassed()<<"Canwar" <<QString::number(pc.person.getCanWar());

    }
    for (int i=0;i<service::Getplayernumber() ;i++ )
    {
        Setturn(i);
        Updatescore();
    }
    Setturn(-2);
}

