#include "playerwindow.h"
#include "ui_playerwindow.h"
#include "service.h"
#include <QScreen>
#include <QLabel>
#include <QPushButton>
#include <QTextEdit>
#include <QApplication>
#include <QComboBox>
#include <QDebug>

PlayerWindow::PlayerWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PlayerWindow),
    mapwindow(nullptr)

{
    ui->setupUi(this);
    this->setWindowTitle("PlayerInfo");
    this->showMaximized();
    QScreen *screen =  QGuiApplication::primaryScreen();
    QSize windowSize = screen->size();
    QLabel *bg = ui->BG;
    bg->setMinimumHeight(windowSize.height());
    bg->setMinimumWidth(windowSize.width());
    position();
    QStringList itemList ;
    itemList << "Select Player Color..." <<"Red" << "Blue" << "Yellow" << "Green" << "white" << "orange" ;
    setcombobox(itemList);

}

PlayerWindow ::~PlayerWindow ()
{
    delete ui;
    if (mapwindow) delete mapwindow;
}

void PlayerWindow::hideselect()
{
    QLabel *select = ui->lable_select;
    QPushButton *btn3 = ui->btn_3;
    QPushButton *btn4 = ui->btn_4;
    QPushButton *btn5 = ui->btn_5;
    QPushButton *btn6 = ui->btn_6;
    QPushButton *gobtn = ui->go_btn;

    select->setVisible(false);
    btn3->setVisible(false);
    btn4->setVisible(false);
    btn5->setVisible(false);
    btn6->setVisible(false);
    gobtn->setVisible(true);
}

void PlayerWindow::position()
{
    QScreen *screen =  QGuiApplication::primaryScreen();
    QSize windowSize = screen->size();
    QLabel *select = ui->lable_select;
    select->move(windowSize.width()/2-300,50);
    select->setMinimumSize(200,50);
    QPushButton *btn3 = ui->btn_3;
    QPushButton *btn4 = ui->btn_4;
    QPushButton *btn5 = ui->btn_5;
    QPushButton *btn6 = ui->btn_6;
    QPushButton *gobtn = ui->go_btn;
    btn3->move(windowSize.width()/2-150,60);
    btn3->setMinimumSize(210,61);
    btn4->move(windowSize.width()/2,60);
    btn4->setMinimumSize(210,61);
    btn5->move(windowSize.width()/2+150,60);
    btn5->setMinimumSize(210,61);
    btn6->move(windowSize.width()/2+300,60);
    btn6->setMinimumSize(210,61);
    gobtn->move(windowSize.width()/2-150,60);
    gobtn->setMinimumSize(300,100);
    gobtn->setVisible(false);

    QTextEdit *name1 = ui->Name_1;
    QTextEdit *name2 = ui->Name_2;
    QTextEdit *name3 = ui->Name_3;
    QTextEdit *name4 = ui->Name_4;
    QTextEdit *name5 = ui->Name_5;
    QTextEdit *name6 = ui->Name_6;
    QTextEdit *age1 = ui->Age_1;
    QTextEdit *age2 = ui->Age_2;
    QTextEdit *age3 = ui->Age_3;
    QTextEdit *age4 = ui->Age_4;
    QTextEdit *age5 = ui->Age_5;
    QTextEdit *age6 = ui->Age_6;
    QComboBox *color1 = ui->color_1;
    QComboBox *color2 = ui->color_2;
    QComboBox *color3 = ui->color_3;
    QComboBox *color4 = ui->color_4;
    QComboBox *color5 = ui->color_5;
    QComboBox *color6 = ui->color_6;
    int posion = windowSize.width()/3-200;

    name1->move(posion,300);
    name1->setFontPointSize(16);
    name1->setMinimumSize(200,40);
    name1->setVisible(false);

    age1->move(posion,400);
    age1->setMinimumSize(200,40);
    age1->setFontPointSize(16);
    age1->setVisible(false);

    name2->move(posion*2,300);
    name2->setMinimumSize(200,40);
    name2->setFontPointSize(16);
    name2->setVisible(false);

    age2->move(posion*2,400);
    age2->setMinimumSize(200,40);
    age2->setFontPointSize(16);
    age2->setVisible(false);

    name3->move(posion*3,300);
    name3->setMinimumSize(200,40);
    name3->setFontPointSize(16);
    name3->setVisible(false);

    age3->move(posion*3,400);
    age3->setMinimumSize(200,40);
    age3->setFontPointSize(16);
    age3->setVisible(false);

    name4->move(posion,700);
    name4->setMinimumSize(200,40);
    name4->setFontPointSize(16);
    name4->setVisible(false);

    age4->move(posion,800);
    age4->setMinimumSize(200,40);
    age4->setFontPointSize(16);
    age4->setVisible(false);

    name5->move(posion*2,700);
    name5->setMinimumSize(200,40);
    name5->setFontPointSize(16);
    name5->setVisible(false);

    age5->move(posion*2,800);
    age5->setMinimumSize(200,40);
    age5->setFontPointSize(16);
    age5->setVisible(false);

    name6->move(posion*3,700);
    name6->setMinimumSize(200,40);
    name6->setFontPointSize(16);
    name6->setVisible(false);

    age6->move(posion*3,800);
    age6->setMinimumSize(200,40);
    age6->setFontPointSize(16);
    age6->setVisible(false);

    color1->move(posion,500);
    color1->setMinimumSize(200,40);
    color1->setVisible(false);

    color2->move(posion*2,500);
    color2->setMinimumSize(200,40);
    color2->setVisible(false);

    color3->move(posion*3,500);
    color3->setMinimumSize(200,40);
    color3->setVisible(false);

    color4->move(posion,900);
    color4->setMinimumSize(200,40);
    color4->setVisible(false);

    color5->move(posion*2,900);
    color5->setMinimumSize(200,40);
    color5->setVisible(false);

    color6->move(posion*3,900);
    color6->setMinimumSize(200,40);
    color6->setVisible(false);
}

void PlayerWindow::hideplayer()
{
    QTextEdit *name1 = ui->Name_1;
    QTextEdit *name2 = ui->Name_2;
    QTextEdit *name3 = ui->Name_3;
    QTextEdit *age1 = ui->Age_1;
    QTextEdit *age2 = ui->Age_2;
    QTextEdit *age3 = ui->Age_3;
    QComboBox *color1 = ui->color_1;
    QComboBox *color2 = ui->color_2;
    QComboBox *color3 = ui->color_3;
    color1->setVisible(true);
    color2->setVisible(true);
    color3->setVisible(true);
    name1->setVisible(true);
    name2->setVisible(true);
    name3->setVisible(true);
    age1->setVisible(true);
    age2->setVisible(true);
    age3->setVisible(true);
    hideselect();
}

void PlayerWindow::setcombobox(QStringList itemlist)
{
    QComboBox *color1 = ui->color_1;
    QComboBox *color2 = ui->color_2;
    QComboBox *color3 = ui->color_3;
    QComboBox *color4 = ui->color_4;
    QComboBox *color5 = ui->color_5;
    QComboBox *color6 = ui->color_6;

    color1->addItems(itemlist);
    color2->addItems(itemlist);
    color3->addItems(itemlist);
    color4->addItems(itemlist);
    color5->addItems(itemlist);
    color6->addItems(itemlist);
}

void PlayerWindow::on_btn_3_clicked()
{
    hideplayer();
    service::Setplayernumber(3);
}

void PlayerWindow::on_btn_4_clicked()
{
    hideplayer();
    service::Setplayernumber(4);
    QTextEdit *name4 = ui->Name_4;
    QTextEdit *age4 = ui->Age_4;
    QComboBox *color4 = ui->color_4;
    name4->setVisible(true);
    age4->setVisible(true);
    color4->setVisible(true);

}

void PlayerWindow::on_btn_5_clicked()
{
    hideplayer();
    service::Setplayernumber(5);
    QTextEdit *name4 = ui->Name_4;
    QTextEdit *name5 = ui->Name_4;
    QTextEdit *age4 = ui->Age_4;
    QTextEdit *age5 = ui->Age_4;
    QComboBox *color5 = ui->color_5;
    QComboBox *color4 = ui->color_4;
    name4->setVisible(true);
    name5->setVisible(true);
    age4->setVisible(true);
    age5->setVisible(true);
    color5->setVisible(true);
    color4->setVisible(true);


}

void PlayerWindow::on_btn_6_clicked()
{
    hideplayer();
    service::Setplayernumber(6);
    QTextEdit *name4 = ui->Name_4;
    QTextEdit *name5 = ui->Name_5;
     QTextEdit *name6 = ui->Name_6;
     QComboBox *color6 = ui->color_6;
     QComboBox *color4 = ui->color_4;
     QComboBox *color5 = ui->color_5;
    QTextEdit *age4 = ui->Age_4;
    QTextEdit *age5 = ui->Age_5;
    QTextEdit *age6 = ui->Age_6;
    name4->setVisible(true);
    name5->setVisible(true);
    name6->setVisible(true);
    age4->setVisible(true);
    age5->setVisible(true);
    age6->setVisible(true);
    color6->setVisible(true);
    color4->setVisible(true);
    color5->setVisible(true);
}

void PlayerWindow::on_go_btn_clicked()
{
    SetPlayer();
    if (!mapwindow) {
        mapwindow = new MapWindow(this);
    }
    mapwindow->show();
    mapwindow->raise();
    mapwindow->activateWindow();
    this->hide();
}

void PlayerWindow::SetPlayer()
{
    std::string name , color;
    int age;
    for (int i=1; i<7 ; i++ )
    {
        QTextEdit *name_txt = findChild<QTextEdit *>(QString("Name_%1").arg(i));
        QTextEdit *age_txt = findChild<QTextEdit *>(QString("Age_%1").arg(i));
        QComboBox *color_txt = findChild<QComboBox *>(QString("color_%1").arg(i));
        color = color_txt->currentText().toStdString();
        name= (name_txt->toPlainText()).toStdString();
        age= (age_txt->toPlainText()).toInt();
        if(age==0)
        {
            age=100;
        }
        service::addplayer(name,age,color);
    }
}
