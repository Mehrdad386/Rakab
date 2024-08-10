#include "MapWindow.h"
#include "ui_mapwindow.h"
#include "service.h"
#include <QScreen>
#include <QLabel>
#include <QPushButton>
#include <QTextEdit>
#include <QApplication>
#include <QComboBox>
#include <QDebug>

MapWindow::MapWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MapWindow),
    gamewindow(nullptr)
{
    ui->setupUi(this);
    this->setWindowTitle("WarPlace");
    this->showMaximized();
    posion();
    Setwarlable("");
}

MapWindow ::~MapWindow ()
{
    delete ui;
    if (gamewindow) delete gamewindow;
}

void MapWindow::posion()
{
    QScreen *screen =  QGuiApplication::primaryScreen();
    QSize windowSize = screen->size();
    QLabel *select = ui->Select_labe;
    QLabel *map = ui->Map_lable;
    QTextEdit *war = ui->war_txt;
    QPushButton *gobtn = ui->go_btn;
    select->setMinimumSize(500,50);
    select->move(100,windowSize.height()/50);
    war->setMinimumSize(200,10);
    war->move(windowSize.width()/2-150,windowSize.height()/50);
    war->setFontPointSize(16);
    map->setMinimumSize(660,810);
    map->move(windowSize.width()/2-330,(windowSize.height()/2-405));
    map->setScaledContents(true);
    gobtn->setMinimumSize(210,61);
    gobtn->move(windowSize.width()/2+100,windowSize.height()/50);
    ui->BG->setMinimumSize(windowSize.width(),windowSize.height());

}

std::string MapWindow::Findyoungestplayer()
{
    int age{100},index;
    for (int i = 0 ; i<6 ; i++ )
    {
        if(service::readplayer(i).getAge() < age )
        {
            age = service::readplayer(i).getAge();
            index = i;
        }
    }


    return service::readplayer(index).getName();
}

void MapWindow::on_go_btn_clicked()
{
    setwarplace();
    if (!gamewindow) {
        gamewindow = new GameWindow(this);
    }
    gamewindow->show();
    gamewindow->raise();
    gamewindow->activateWindow();
    this->hide();
}

void MapWindow::setwarplace()
{
    std::string wp = ui->war_txt->toPlainText().toStdString();
    service::Setwarplace(wp);
}

void MapWindow::Setwarlable(std::string name)
{
    std::string textLable;
    if(name == ""){
        textLable = Findyoungestplayer()+" Choose war place";
    }
    else if(name != "")
    {
        textLable = name;
    }
    QString qtextLable = QString::fromStdString(textLable);
    ui->Select_labe->setText((qtextLable));
}
