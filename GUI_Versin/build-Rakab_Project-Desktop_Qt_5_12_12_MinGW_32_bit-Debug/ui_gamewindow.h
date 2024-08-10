/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameWindow
{
public:
    QWidget *centralwidget;
    QLabel *BG;
    QPushButton *Score_btn;
    QWidget *ScorebordLayout;
    QGridLayout *gridLayout;
    QLabel *Name_4;
    QLabel *Name_3;
    QLabel *Score_6;
    QLabel *Score_4;
    QLabel *Name_5;
    QLabel *Score_2;
    QLabel *Name_1;
    QLabel *Name_2;
    QLabel *Name_6;
    QLabel *Score_1;
    QLabel *Score_5;
    QLabel *Score_3;
    QLabel *Card_1;
    QLabel *Card_2;
    QLabel *Card_3;
    QLabel *Card_4;
    QLabel *Card_5;
    QLabel *Card_6;
    QWidget *City_layout;
    QFormLayout *formLayout;
    QLabel *name_1;
    QLabel *name_2;
    QLabel *name_3;
    QLabel *name_4;
    QLabel *name_5;
    QLabel *name_6;
    QLabel *City_1;
    QLabel *City_2;
    QLabel *City_3;
    QLabel *City_4;
    QLabel *City_5;
    QLabel *City_6;
    QLabel *Cityinwar;
    QLabel *Freecities;
    QWidget *Turn_layout;
    QHBoxLayout *horizontalLayout;
    QLabel *Turn;
    QLabel *Player_turn;
    QPushButton *Map_btn;
    QPushButton *Setting_btn;
    QLabel *Map_pic;
    QPushButton *PlayCard_1;
    QPushButton *PlayCard_2;
    QPushButton *PlayCard_3;
    QPushButton *PlayCard_4;
    QPushButton *PlayCard_5;
    QPushButton *PlayCard_6;
    QPushButton *PlayCard_7;
    QPushButton *PlayCard_8;
    QPushButton *PlayCard_9;
    QPushButton *PlayCard_10;
    QPushButton *PlayCardBtn;
    QPushButton *PassBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GameWindow)
    {
        if (GameWindow->objectName().isEmpty())
            GameWindow->setObjectName(QString::fromUtf8("GameWindow"));
        GameWindow->resize(800, 600);
        centralwidget = new QWidget(GameWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        BG = new QLabel(centralwidget);
        BG->setObjectName(QString::fromUtf8("BG"));
        BG->setGeometry(QRect(10, 10, 21, 16));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BG->sizePolicy().hasHeightForWidth());
        BG->setSizePolicy(sizePolicy);
        BG->setPixmap(QPixmap(QString::fromUtf8(":/image/src/Back_final.jpg")));
        BG->setScaledContents(true);
        Score_btn = new QPushButton(centralwidget);
        Score_btn->setObjectName(QString::fromUtf8("Score_btn"));
        Score_btn->setGeometry(QRect(10, 40, 80, 22));
        sizePolicy.setHeightForWidth(Score_btn->sizePolicy().hasHeightForWidth());
        Score_btn->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/src/scorebtn.png"), QSize(), QIcon::Normal, QIcon::Off);
        Score_btn->setIcon(icon);
        Score_btn->setIconSize(QSize(200, 100));
        Score_btn->setFlat(true);
        ScorebordLayout = new QWidget(centralwidget);
        ScorebordLayout->setObjectName(QString::fromUtf8("ScorebordLayout"));
        ScorebordLayout->setGeometry(QRect(30, 70, 241, 211));
        QFont font;
        font.setFamily(QString::fromUtf8("Minecraft"));
        font.setPointSize(14);
        ScorebordLayout->setFont(font);
        ScorebordLayout->setCursor(QCursor(Qt::ArrowCursor));
        ScorebordLayout->setAutoFillBackground(false);
        ScorebordLayout->setStyleSheet(QString::fromUtf8("background-image: url(:/src/bg.png);\n"
""));
        gridLayout = new QGridLayout(ScorebordLayout);
        gridLayout->setSpacing(15);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(10, 10, 10, 10);
        Name_4 = new QLabel(ScorebordLayout);
        Name_4->setObjectName(QString::fromUtf8("Name_4"));
        Name_4->setFont(font);
        Name_4->setMargin(5);

        gridLayout->addWidget(Name_4, 3, 0, 1, 1);

        Name_3 = new QLabel(ScorebordLayout);
        Name_3->setObjectName(QString::fromUtf8("Name_3"));
        Name_3->setFont(font);
        Name_3->setMargin(5);

        gridLayout->addWidget(Name_3, 2, 0, 1, 1);

        Score_6 = new QLabel(ScorebordLayout);
        Score_6->setObjectName(QString::fromUtf8("Score_6"));
        Score_6->setFont(font);
        Score_6->setMargin(5);

        gridLayout->addWidget(Score_6, 5, 1, 1, 1);

        Score_4 = new QLabel(ScorebordLayout);
        Score_4->setObjectName(QString::fromUtf8("Score_4"));
        Score_4->setFont(font);
        Score_4->setMargin(5);

        gridLayout->addWidget(Score_4, 3, 1, 1, 1);

        Name_5 = new QLabel(ScorebordLayout);
        Name_5->setObjectName(QString::fromUtf8("Name_5"));
        Name_5->setFont(font);
        Name_5->setMargin(5);

        gridLayout->addWidget(Name_5, 4, 0, 1, 1);

        Score_2 = new QLabel(ScorebordLayout);
        Score_2->setObjectName(QString::fromUtf8("Score_2"));
        Score_2->setFont(font);
        Score_2->setMargin(5);

        gridLayout->addWidget(Score_2, 1, 1, 1, 1);

        Name_1 = new QLabel(ScorebordLayout);
        Name_1->setObjectName(QString::fromUtf8("Name_1"));
        Name_1->setFont(font);
        Name_1->setAutoFillBackground(false);
        Name_1->setStyleSheet(QString::fromUtf8("background-color: #cccccc;"));
        Name_1->setMargin(5);

        gridLayout->addWidget(Name_1, 0, 0, 1, 1);

        Name_2 = new QLabel(ScorebordLayout);
        Name_2->setObjectName(QString::fromUtf8("Name_2"));
        Name_2->setFont(font);
        Name_2->setMargin(5);

        gridLayout->addWidget(Name_2, 1, 0, 1, 1);

        Name_6 = new QLabel(ScorebordLayout);
        Name_6->setObjectName(QString::fromUtf8("Name_6"));
        Name_6->setFont(font);
        Name_6->setMargin(5);

        gridLayout->addWidget(Name_6, 5, 0, 1, 1);

        Score_1 = new QLabel(ScorebordLayout);
        Score_1->setObjectName(QString::fromUtf8("Score_1"));
        Score_1->setFont(font);
        Score_1->setAutoFillBackground(false);
        Score_1->setMargin(5);

        gridLayout->addWidget(Score_1, 0, 1, 1, 1);

        Score_5 = new QLabel(ScorebordLayout);
        Score_5->setObjectName(QString::fromUtf8("Score_5"));
        Score_5->setFont(font);
        Score_5->setMargin(5);

        gridLayout->addWidget(Score_5, 4, 1, 1, 1);

        Score_3 = new QLabel(ScorebordLayout);
        Score_3->setObjectName(QString::fromUtf8("Score_3"));
        Score_3->setFont(font);
        Score_3->setMargin(5);

        gridLayout->addWidget(Score_3, 2, 1, 1, 1);

        Card_1 = new QLabel(ScorebordLayout);
        Card_1->setObjectName(QString::fromUtf8("Card_1"));
        Card_1->setFont(font);
        Card_1->setAutoFillBackground(false);
        Card_1->setMargin(5);

        gridLayout->addWidget(Card_1, 0, 2, 1, 1);

        Card_2 = new QLabel(ScorebordLayout);
        Card_2->setObjectName(QString::fromUtf8("Card_2"));
        Card_2->setFont(font);
        Card_2->setMargin(5);

        gridLayout->addWidget(Card_2, 1, 2, 1, 1);

        Card_3 = new QLabel(ScorebordLayout);
        Card_3->setObjectName(QString::fromUtf8("Card_3"));
        Card_3->setFont(font);
        Card_3->setMargin(5);

        gridLayout->addWidget(Card_3, 2, 2, 1, 1);

        Card_4 = new QLabel(ScorebordLayout);
        Card_4->setObjectName(QString::fromUtf8("Card_4"));
        Card_4->setFont(font);
        Card_4->setMargin(5);

        gridLayout->addWidget(Card_4, 3, 2, 1, 1);

        Card_5 = new QLabel(ScorebordLayout);
        Card_5->setObjectName(QString::fromUtf8("Card_5"));
        Card_5->setFont(font);
        Card_5->setMargin(5);

        gridLayout->addWidget(Card_5, 4, 2, 1, 1);

        Card_6 = new QLabel(ScorebordLayout);
        Card_6->setObjectName(QString::fromUtf8("Card_6"));
        Card_6->setFont(font);
        Card_6->setMargin(5);

        gridLayout->addWidget(Card_6, 5, 2, 1, 1);

        City_layout = new QWidget(centralwidget);
        City_layout->setObjectName(QString::fromUtf8("City_layout"));
        City_layout->setGeometry(QRect(80, 260, 241, 301));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(City_layout->sizePolicy().hasHeightForWidth());
        City_layout->setSizePolicy(sizePolicy1);
        City_layout->setFont(font);
        City_layout->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 108, 23);"));
        formLayout = new QFormLayout(City_layout);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setRowWrapPolicy(QFormLayout::WrapLongRows);
        formLayout->setLabelAlignment(Qt::AlignCenter);
        formLayout->setHorizontalSpacing(25);
        formLayout->setVerticalSpacing(20);
        formLayout->setContentsMargins(10, 10, 10, 10);
        name_1 = new QLabel(City_layout);
        name_1->setObjectName(QString::fromUtf8("name_1"));
        name_1->setFont(font);
        name_1->setMargin(5);

        formLayout->setWidget(1, QFormLayout::LabelRole, name_1);

        name_2 = new QLabel(City_layout);
        name_2->setObjectName(QString::fromUtf8("name_2"));
        name_2->setFont(font);
        name_2->setMargin(5);

        formLayout->setWidget(2, QFormLayout::LabelRole, name_2);

        name_3 = new QLabel(City_layout);
        name_3->setObjectName(QString::fromUtf8("name_3"));
        name_3->setFont(font);
        name_3->setMargin(5);

        formLayout->setWidget(3, QFormLayout::LabelRole, name_3);

        name_4 = new QLabel(City_layout);
        name_4->setObjectName(QString::fromUtf8("name_4"));
        name_4->setFont(font);
        name_4->setMargin(5);

        formLayout->setWidget(4, QFormLayout::LabelRole, name_4);

        name_5 = new QLabel(City_layout);
        name_5->setObjectName(QString::fromUtf8("name_5"));
        name_5->setFont(font);
        name_5->setMargin(5);

        formLayout->setWidget(5, QFormLayout::LabelRole, name_5);

        name_6 = new QLabel(City_layout);
        name_6->setObjectName(QString::fromUtf8("name_6"));
        name_6->setFont(font);
        name_6->setMargin(5);

        formLayout->setWidget(6, QFormLayout::LabelRole, name_6);

        City_1 = new QLabel(City_layout);
        City_1->setObjectName(QString::fromUtf8("City_1"));
        City_1->setFont(font);
        City_1->setMargin(5);

        formLayout->setWidget(1, QFormLayout::FieldRole, City_1);

        City_2 = new QLabel(City_layout);
        City_2->setObjectName(QString::fromUtf8("City_2"));
        City_2->setFont(font);
        City_2->setMargin(5);

        formLayout->setWidget(2, QFormLayout::FieldRole, City_2);

        City_3 = new QLabel(City_layout);
        City_3->setObjectName(QString::fromUtf8("City_3"));
        City_3->setFont(font);
        City_3->setMargin(5);

        formLayout->setWidget(3, QFormLayout::FieldRole, City_3);

        City_4 = new QLabel(City_layout);
        City_4->setObjectName(QString::fromUtf8("City_4"));
        City_4->setFont(font);
        City_4->setMargin(5);

        formLayout->setWidget(4, QFormLayout::FieldRole, City_4);

        City_5 = new QLabel(City_layout);
        City_5->setObjectName(QString::fromUtf8("City_5"));
        City_5->setFont(font);
        City_5->setMargin(5);

        formLayout->setWidget(5, QFormLayout::FieldRole, City_5);

        City_6 = new QLabel(City_layout);
        City_6->setObjectName(QString::fromUtf8("City_6"));
        City_6->setFont(font);
        City_6->setMargin(5);

        formLayout->setWidget(6, QFormLayout::FieldRole, City_6);

        Cityinwar = new QLabel(City_layout);
        Cityinwar->setObjectName(QString::fromUtf8("Cityinwar"));
        Cityinwar->setFont(font);
        Cityinwar->setMargin(5);

        formLayout->setWidget(0, QFormLayout::LabelRole, Cityinwar);

        Freecities = new QLabel(City_layout);
        Freecities->setObjectName(QString::fromUtf8("Freecities"));
        Freecities->setFont(font);
        Freecities->setMargin(5);

        formLayout->setWidget(7, QFormLayout::SpanningRole, Freecities);

        City_4->raise();
        name_1->raise();
        name_2->raise();
        name_3->raise();
        name_4->raise();
        name_5->raise();
        name_6->raise();
        City_1->raise();
        City_2->raise();
        City_3->raise();
        City_5->raise();
        City_6->raise();
        Cityinwar->raise();
        Freecities->raise();
        Turn_layout = new QWidget(centralwidget);
        Turn_layout->setObjectName(QString::fromUtf8("Turn_layout"));
        Turn_layout->setGeometry(QRect(120, 30, 160, 31));
        Turn_layout->setFont(font);
        horizontalLayout = new QHBoxLayout(Turn_layout);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Turn = new QLabel(Turn_layout);
        Turn->setObjectName(QString::fromUtf8("Turn"));
        Turn->setFont(font);
        Turn->setWordWrap(false);
        Turn->setMargin(5);

        horizontalLayout->addWidget(Turn);

        Player_turn = new QLabel(Turn_layout);
        Player_turn->setObjectName(QString::fromUtf8("Player_turn"));
        Player_turn->setFont(font);

        horizontalLayout->addWidget(Player_turn);

        Map_btn = new QPushButton(centralwidget);
        Map_btn->setObjectName(QString::fromUtf8("Map_btn"));
        Map_btn->setGeometry(QRect(270, 30, 171, 61));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/src/Mapbtn.png"), QSize(), QIcon::Normal, QIcon::Off);
        Map_btn->setIcon(icon1);
        Map_btn->setIconSize(QSize(200, 100));
        Map_btn->setFlat(true);
        Setting_btn = new QPushButton(centralwidget);
        Setting_btn->setObjectName(QString::fromUtf8("Setting_btn"));
        Setting_btn->setGeometry(QRect(279, 90, 101, 91));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/src/setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        Setting_btn->setIcon(icon2);
        Setting_btn->setIconSize(QSize(80, 70));
        Setting_btn->setFlat(true);
        Map_pic = new QLabel(centralwidget);
        Map_pic->setObjectName(QString::fromUtf8("Map_pic"));
        Map_pic->setGeometry(QRect(410, 60, 151, 201));
        Map_pic->setAcceptDrops(false);
        Map_pic->setToolTipDuration(-1);
        Map_pic->setLayoutDirection(Qt::RightToLeft);
        Map_pic->setStyleSheet(QString::fromUtf8("origin:center;"));
        Map_pic->setFrameShape(QFrame::Box);
        Map_pic->setLineWidth(0);
        Map_pic->setTextFormat(Qt::AutoText);
        Map_pic->setPixmap(QPixmap(QString::fromUtf8(":/src/Map.png")));
        Map_pic->setScaledContents(false);
        Map_pic->setAlignment(Qt::AlignCenter);
        Map_pic->setWordWrap(false);
        PlayCard_1 = new QPushButton(centralwidget);
        PlayCard_1->setObjectName(QString::fromUtf8("PlayCard_1"));
        PlayCard_1->setGeometry(QRect(460, 440, 80, 22));
        PlayCard_1->setFlat(true);
        PlayCard_2 = new QPushButton(centralwidget);
        PlayCard_2->setObjectName(QString::fromUtf8("PlayCard_2"));
        PlayCard_2->setGeometry(QRect(540, 440, 80, 22));
        PlayCard_2->setFlat(true);
        PlayCard_3 = new QPushButton(centralwidget);
        PlayCard_3->setObjectName(QString::fromUtf8("PlayCard_3"));
        PlayCard_3->setGeometry(QRect(460, 470, 80, 22));
        PlayCard_3->setFlat(true);
        PlayCard_4 = new QPushButton(centralwidget);
        PlayCard_4->setObjectName(QString::fromUtf8("PlayCard_4"));
        PlayCard_4->setGeometry(QRect(550, 470, 80, 22));
        PlayCard_4->setFlat(true);
        PlayCard_5 = new QPushButton(centralwidget);
        PlayCard_5->setObjectName(QString::fromUtf8("PlayCard_5"));
        PlayCard_5->setGeometry(QRect(460, 500, 80, 22));
        PlayCard_5->setFlat(true);
        PlayCard_6 = new QPushButton(centralwidget);
        PlayCard_6->setObjectName(QString::fromUtf8("PlayCard_6"));
        PlayCard_6->setGeometry(QRect(540, 500, 80, 22));
        PlayCard_6->setFlat(true);
        PlayCard_7 = new QPushButton(centralwidget);
        PlayCard_7->setObjectName(QString::fromUtf8("PlayCard_7"));
        PlayCard_7->setGeometry(QRect(460, 530, 80, 22));
        PlayCard_7->setFlat(true);
        PlayCard_8 = new QPushButton(centralwidget);
        PlayCard_8->setObjectName(QString::fromUtf8("PlayCard_8"));
        PlayCard_8->setGeometry(QRect(560, 530, 80, 22));
        PlayCard_8->setFlat(true);
        PlayCard_9 = new QPushButton(centralwidget);
        PlayCard_9->setObjectName(QString::fromUtf8("PlayCard_9"));
        PlayCard_9->setGeometry(QRect(630, 450, 80, 22));
        PlayCard_9->setFlat(true);
        PlayCard_10 = new QPushButton(centralwidget);
        PlayCard_10->setObjectName(QString::fromUtf8("PlayCard_10"));
        PlayCard_10->setGeometry(QRect(650, 500, 80, 22));
        PlayCard_10->setFlat(true);
        PlayCardBtn = new QPushButton(centralwidget);
        PlayCardBtn->setObjectName(QString::fromUtf8("PlayCardBtn"));
        PlayCardBtn->setGeometry(QRect(480, 110, 300, 140));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/src/Play_ButBig.png"), QSize(), QIcon::Normal, QIcon::Off);
        PlayCardBtn->setIcon(icon3);
        PlayCardBtn->setIconSize(QSize(300, 140));
        PlayCardBtn->setFlat(true);
        PassBtn = new QPushButton(centralwidget);
        PassBtn->setObjectName(QString::fromUtf8("PassBtn"));
        PassBtn->setGeometry(QRect(440, 280, 300, 140));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/src/pass.btn.png"), QSize(), QIcon::Normal, QIcon::Off);
        PassBtn->setIcon(icon4);
        PassBtn->setIconSize(QSize(300, 140));
        PassBtn->setFlat(true);
        GameWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GameWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        GameWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(GameWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GameWindow->setStatusBar(statusbar);

        retranslateUi(GameWindow);

        QMetaObject::connectSlotsByName(GameWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GameWindow)
    {
        GameWindow->setWindowTitle(QApplication::translate("GameWindow", "MainWindow", nullptr));
        BG->setText(QString());
        Score_btn->setText(QString());
        Name_4->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        Name_3->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        Score_6->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        Score_4->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        Name_5->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        Score_2->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        Name_1->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        Name_2->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        Name_6->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        Score_1->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        Score_5->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        Score_3->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        Card_1->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        Card_2->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        Card_3->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        Card_4->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        Card_5->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        Card_6->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        name_1->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        name_2->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        name_3->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        name_4->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        name_5->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        name_6->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        City_1->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        City_2->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        City_3->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        City_4->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        City_5->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        City_6->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        Cityinwar->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        Freecities->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        Turn->setText(QApplication::translate("GameWindow", "Is turn :", nullptr));
        Player_turn->setText(QApplication::translate("GameWindow", "TextLabel", nullptr));
        Map_btn->setText(QString());
        Setting_btn->setText(QString());
#ifndef QT_NO_TOOLTIP
        Map_pic->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        Map_pic->setWhatsThis(QApplication::translate("GameWindow", "map", nullptr));
#endif // QT_NO_WHATSTHIS
        Map_pic->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        PlayCard_1->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        PlayCard_1->setText(QApplication::translate("GameWindow", "PushButton", nullptr));
        PlayCard_2->setText(QApplication::translate("GameWindow", "PushButton", nullptr));
        PlayCard_3->setText(QApplication::translate("GameWindow", "PushButton", nullptr));
        PlayCard_4->setText(QApplication::translate("GameWindow", "PushButton", nullptr));
        PlayCard_5->setText(QApplication::translate("GameWindow", "PushButton", nullptr));
        PlayCard_6->setText(QApplication::translate("GameWindow", "PushButton", nullptr));
        PlayCard_7->setText(QApplication::translate("GameWindow", "PushButton", nullptr));
        PlayCard_8->setText(QApplication::translate("GameWindow", "PushButton", nullptr));
        PlayCard_9->setText(QApplication::translate("GameWindow", "PushButton", nullptr));
        PlayCard_10->setText(QApplication::translate("GameWindow", "PushButton", nullptr));
        PlayCardBtn->setText(QString());
        PassBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameWindow: public Ui_GameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
