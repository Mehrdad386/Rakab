#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>
#include "service.h"
#include <QIcon>
#include "./Entity/header/Game.h"
#include "QTimer"
#include <QThread>

QT_BEGIN_NAMESPACE
namespace Ui { class GameWindow; }
QT_END_NAMESPACE

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameWindow (QWidget *parent = nullptr);
    ~GameWindow ();

    void posionbg();

    void posionscore();

    void posioncity();

    void posionturn();

    void posionmapsetting();

    void Showplayerinfo();

    void Showcity();

    void Showcard(std::vector<Card> cards);

    bool Getpass();

    void Setpass(bool);

    void Posionpassplay();

    void Showpassplay();

    void Hidepasspaly();

    void Playerturn(Player );

    void Animationcard(int );

    void Setplaycard(bool );

    bool Getplaycard();

    void SetPlayedcard(std::string);

    std::string Getplayedcard();

    void Setturn(int );

    int GetTurn();

    void Handelturn();

    void Gameflow();

    void Updatescore();

    void Findplayedcard();

    void Checkwinner();

    PlayedCard Checkwinnerround();

    PlayedCard CheckWinnergame();

    bool Checkroundisover();

    void Readynextround();
private slots:


    void on_Score_btn_clicked();

    void on_Map_btn_clicked();

    void on_PassBtn_clicked();

    void on_PlayCard_7_clicked();

    void on_PlayCard_1_clicked();

    void on_PlayCard_2_clicked();

    void on_PlayCard_3_clicked();

    void on_PlayCard_6_clicked();

    void on_PlayCard_4_clicked();

    void on_PlayCard_5_clicked();

    void on_PlayCard_8_clicked();

    void on_PlayCard_9_clicked();

    void on_PlayCard_10_clicked();

    void on_PlayCardBtn_clicked();

private:
    Ui::GameWindow *ui;

    bool Ispass;

    bool Playcard;

    std::string Playedcard;

    Game game;

    int Turn;
};

#endif // GAMEWINDOW_H
