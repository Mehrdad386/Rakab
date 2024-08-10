#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QStackedWidget>
#include <QPushButton>
#include <QApplication>
#include <QScreen>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , playerwindow(nullptr)
    ,helpwindow(nullptr)
{

    ui->setupUi(this);
    //set size of btn
    int widdthBtn = 250;
    int heightBtn = 140;
    //show lable BG size of screen
    this->showMaximized();
    QScreen *screen =  QGuiApplication::primaryScreen();
    QLabel *backgroundLabel = ui->BG;
    QSize window = screen->size();
    backgroundLabel->setMinimumHeight(window.height());
    backgroundLabel->setMinimumWidth(window.width());

    QPushButton *Startbtn = ui->Start_Btn;
    QPushButton *Infobtn = ui->Info_Btn;
    QPushButton *Exitbtn = ui->Exit_Btn;
    QLabel *title = ui->Title;
    Startbtn->setMinimumWidth(widdthBtn);
    Startbtn->setMinimumHeight(heightBtn);
    Infobtn->setMinimumWidth(widdthBtn);
    Infobtn->setMinimumHeight(heightBtn);
    Exitbtn->setMinimumWidth(widdthBtn);
    Exitbtn->setMinimumHeight(heightBtn);
    title->setMinimumWidth(1000);
    title->setMinimumHeight(300);
    int centerX = window.width()/2;
    int centerY = window.height()/2;
    Startbtn->move(centerX-100,centerY-200);
    Infobtn->move(centerX-100,centerY-100);
    Exitbtn->move(centerX-100,centerY);
    title->move(centerX-400,centerY-530);
}

MainWindow::~MainWindow()
{
    delete ui;
    if (playerwindow) delete playerwindow;
    if (helpwindow) delete helpwindow;
}

void MainWindow::on_Start_Btn_clicked()
{
    if (!playerwindow) {
        playerwindow = new PlayerWindow(this);
    }
    playerwindow->show();
    playerwindow->raise();
    playerwindow->activateWindow();
    this->hide();
}


void MainWindow::on_Exit_Btn_clicked()
{
    this->close();
}


void MainWindow::on_Info_Btn_clicked()
{
    if (!helpwindow) {
            helpwindow = new HelpWindow(this);
        }
        helpwindow->show();
        this->hide();
}

