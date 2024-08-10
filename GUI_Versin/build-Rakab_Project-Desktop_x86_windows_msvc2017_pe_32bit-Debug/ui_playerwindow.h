/********************************************************************************
** Form generated from reading UI file 'playerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYERWINDOW_H
#define UI_PLAYERWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayerWindow
{
public:
    QWidget *centralwidget;
    QLabel *BG;
    QLabel *lable_select;
    QPushButton *btn_3;
    QPushButton *btn_4;
    QPushButton *btn_5;
    QPushButton *btn_6;
    QTextEdit *Name_1;
    QTextEdit *Name_2;
    QTextEdit *Name_3;
    QTextEdit *Name_4;
    QTextEdit *Name_5;
    QTextEdit *Name_6;
    QTextEdit *Age_1;
    QTextEdit *Age_2;
    QTextEdit *Age_3;
    QTextEdit *Age_4;
    QTextEdit *Age_5;
    QTextEdit *Age_6;
    QComboBox *color_1;
    QComboBox *color_2;
    QComboBox *color_3;
    QComboBox *color_4;
    QComboBox *color_5;
    QComboBox *color_6;
    QPushButton *go_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PlayerWindow)
    {
        if (PlayerWindow->objectName().isEmpty())
            PlayerWindow->setObjectName(QString::fromUtf8("PlayerWindow"));
        PlayerWindow->resize(422, 306);
        centralwidget = new QWidget(PlayerWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        BG = new QLabel(centralwidget);
        BG->setObjectName(QString::fromUtf8("BG"));
        BG->setGeometry(QRect(10, 10, 1, 1));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BG->sizePolicy().hasHeightForWidth());
        BG->setSizePolicy(sizePolicy);
        BG->setMaximumSize(QSize(1, 1));
        BG->setPixmap(QPixmap(QString::fromUtf8(":/image/src/Back_final.jpg")));
        BG->setScaledContents(true);
        BG->setAlignment(Qt::AlignCenter);
        BG->setWordWrap(false);
        lable_select = new QLabel(centralwidget);
        lable_select->setObjectName(QString::fromUtf8("lable_select"));
        lable_select->setEnabled(true);
        lable_select->setGeometry(QRect(10, 110, 151, 91));
        lable_select->setPixmap(QPixmap(QString::fromUtf8(":/src/select.png")));
        lable_select->setIndent(2);
        btn_3 = new QPushButton(centralwidget);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));
        btn_3->setGeometry(QRect(40, 31, 51, 31));
        btn_3->setToolTipDuration(0);
        btn_3->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/src/number 3.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_3->setIcon(icon);
        btn_3->setIconSize(QSize(200, 60));
        btn_3->setFlat(true);
        btn_4 = new QPushButton(centralwidget);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));
        btn_4->setGeometry(QRect(40, 80, 41, 21));
        btn_4->setToolTipDuration(0);
        btn_4->setAutoFillBackground(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/src/number4.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_4->setIcon(icon1);
        btn_4->setIconSize(QSize(200, 60));
        btn_4->setFlat(true);
        btn_5 = new QPushButton(centralwidget);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));
        btn_5->setGeometry(QRect(110, 30, 31, 31));
        btn_5->setToolTipDuration(0);
        btn_5->setAutoFillBackground(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/src/number 5.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_5->setIcon(icon2);
        btn_5->setIconSize(QSize(200, 60));
        btn_5->setFlat(true);
        btn_6 = new QPushButton(centralwidget);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));
        btn_6->setGeometry(QRect(100, 80, 31, 31));
        btn_6->setToolTipDuration(0);
        btn_6->setAutoFillBackground(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/src/number 6.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_6->setIcon(icon3);
        btn_6->setIconSize(QSize(200, 60));
        btn_6->setFlat(true);
        Name_1 = new QTextEdit(centralwidget);
        Name_1->setObjectName(QString::fromUtf8("Name_1"));
        Name_1->setGeometry(QRect(180, 40, 51, 21));
        Name_1->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        Name_1->setAutoFillBackground(true);
        Name_1->setStyleSheet(QString::fromUtf8("background-image: url(:/src/LineEdit_selected2.png);\n"
"background-repeat: no-repeat;\n"
"background-position: center;"));
        Name_1->setLineWidth(0);
        Name_1->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Name_1->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Name_1->setTabChangesFocus(true);
        Name_1->setReadOnly(false);
        Name_1->setCursorWidth(3);
        Name_2 = new QTextEdit(centralwidget);
        Name_2->setObjectName(QString::fromUtf8("Name_2"));
        Name_2->setGeometry(QRect(250, 40, 51, 21));
        Name_2->setStyleSheet(QString::fromUtf8("background-image: url(:/src/LineEdit_selected2.png);\n"
"background-repeat: no-repeat;\n"
"background-position: center;"));
        Name_3 = new QTextEdit(centralwidget);
        Name_3->setObjectName(QString::fromUtf8("Name_3"));
        Name_3->setGeometry(QRect(180, 80, 51, 21));
        Name_3->setStyleSheet(QString::fromUtf8("background-image: url(:/src/LineEdit_selected2.png);\n"
"background-repeat: no-repeat;\n"
"background-position: center;"));
        Name_4 = new QTextEdit(centralwidget);
        Name_4->setObjectName(QString::fromUtf8("Name_4"));
        Name_4->setGeometry(QRect(250, 80, 51, 21));
        Name_4->setStyleSheet(QString::fromUtf8("background-image: url(:/src/LineEdit_selected2.png);\n"
"background-repeat: no-repeat;\n"
"background-position: center;"));
        Name_5 = new QTextEdit(centralwidget);
        Name_5->setObjectName(QString::fromUtf8("Name_5"));
        Name_5->setGeometry(QRect(180, 120, 51, 21));
        Name_5->setStyleSheet(QString::fromUtf8("background-image: url(:/src/LineEdit_selected2.png);\n"
"background-repeat: no-repeat;\n"
"background-position: center;"));
        Name_6 = new QTextEdit(centralwidget);
        Name_6->setObjectName(QString::fromUtf8("Name_6"));
        Name_6->setGeometry(QRect(250, 120, 51, 21));
        Name_6->setStyleSheet(QString::fromUtf8("background-image: url(:/src/LineEdit_selected2.png);\n"
"background-repeat: no-repeat;\n"
"background-position: center;"));
        Age_1 = new QTextEdit(centralwidget);
        Age_1->setObjectName(QString::fromUtf8("Age_1"));
        Age_1->setGeometry(QRect(180, 150, 51, 21));
        Age_1->setStyleSheet(QString::fromUtf8("background-image: url(:/src/LineEdit_selected2.png);\n"
"background-repeat: no-repeat;\n"
"background-position: center;"));
        Age_2 = new QTextEdit(centralwidget);
        Age_2->setObjectName(QString::fromUtf8("Age_2"));
        Age_2->setGeometry(QRect(250, 150, 51, 21));
        Age_2->setStyleSheet(QString::fromUtf8("background-image: url(:/src/LineEdit_selected2.png);\n"
"background-repeat: no-repeat;\n"
"background-position: center;"));
        Age_3 = new QTextEdit(centralwidget);
        Age_3->setObjectName(QString::fromUtf8("Age_3"));
        Age_3->setGeometry(QRect(180, 180, 51, 21));
        Age_3->setStyleSheet(QString::fromUtf8("background-image: url(:/src/LineEdit_selected2.png);\n"
"background-repeat: no-repeat;\n"
"background-position: center;"));
        Age_4 = new QTextEdit(centralwidget);
        Age_4->setObjectName(QString::fromUtf8("Age_4"));
        Age_4->setGeometry(QRect(250, 180, 51, 21));
        Age_4->setStyleSheet(QString::fromUtf8("background-image: url(:/src/LineEdit_selected2.png);\n"
"background-repeat: no-repeat;\n"
"background-position: center;"));
        Age_5 = new QTextEdit(centralwidget);
        Age_5->setObjectName(QString::fromUtf8("Age_5"));
        Age_5->setGeometry(QRect(180, 220, 51, 21));
        Age_5->setStyleSheet(QString::fromUtf8("background-image: url(:/src/LineEdit_selected2.png);\n"
"background-repeat: no-repeat;\n"
"background-position: center;"));
        Age_6 = new QTextEdit(centralwidget);
        Age_6->setObjectName(QString::fromUtf8("Age_6"));
        Age_6->setGeometry(QRect(250, 220, 51, 21));
        Age_6->setStyleSheet(QString::fromUtf8("background-image: url(:/src/LineEdit_selected2.png);\n"
"background-repeat: no-repeat;\n"
"background-position: center;"));
        color_1 = new QComboBox(centralwidget);
        color_1->setObjectName(QString::fromUtf8("color_1"));
        color_1->setGeometry(QRect(310, 40, 65, 22));
        color_1->setModelColumn(0);
        color_2 = new QComboBox(centralwidget);
        color_2->setObjectName(QString::fromUtf8("color_2"));
        color_2->setGeometry(QRect(310, 70, 65, 22));
        color_3 = new QComboBox(centralwidget);
        color_3->setObjectName(QString::fromUtf8("color_3"));
        color_3->setGeometry(QRect(310, 100, 65, 22));
        color_4 = new QComboBox(centralwidget);
        color_4->setObjectName(QString::fromUtf8("color_4"));
        color_4->setGeometry(QRect(310, 130, 65, 22));
        color_5 = new QComboBox(centralwidget);
        color_5->setObjectName(QString::fromUtf8("color_5"));
        color_5->setGeometry(QRect(310, 160, 65, 22));
        color_6 = new QComboBox(centralwidget);
        color_6->setObjectName(QString::fromUtf8("color_6"));
        color_6->setGeometry(QRect(310, 190, 65, 22));
        go_btn = new QPushButton(centralwidget);
        go_btn->setObjectName(QString::fromUtf8("go_btn"));
        go_btn->setGeometry(QRect(40, 210, 80, 22));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/src/Gobtn.png"), QSize(), QIcon::Normal, QIcon::Off);
        go_btn->setIcon(icon4);
        go_btn->setIconSize(QSize(300, 100));
        go_btn->setFlat(true);
        PlayerWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PlayerWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 422, 24));
        PlayerWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(PlayerWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PlayerWindow->setStatusBar(statusbar);

        retranslateUi(PlayerWindow);

        QMetaObject::connectSlotsByName(PlayerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PlayerWindow)
    {
        PlayerWindow->setWindowTitle(QApplication::translate("PlayerWindow", "MainWindow", nullptr));
        BG->setText(QString());
        lable_select->setText(QString());
        btn_3->setText(QString());
        btn_4->setText(QString());
        btn_5->setText(QString());
        btn_6->setText(QString());
        Name_1->setPlaceholderText(QApplication::translate("PlayerWindow", "Player 1 Name", nullptr));
        Name_2->setPlaceholderText(QApplication::translate("PlayerWindow", "Player 2 Name", nullptr));
        Name_3->setPlaceholderText(QApplication::translate("PlayerWindow", "Player 3 Name", nullptr));
        Name_4->setPlaceholderText(QApplication::translate("PlayerWindow", "Player 4 Name", nullptr));
        Name_5->setPlaceholderText(QApplication::translate("PlayerWindow", "Player 5 Name", nullptr));
        Name_6->setPlaceholderText(QApplication::translate("PlayerWindow", "Player 6 Name", nullptr));
        Age_1->setPlaceholderText(QApplication::translate("PlayerWindow", "Player 1 Age", nullptr));
        Age_2->setPlaceholderText(QApplication::translate("PlayerWindow", "Player 2 Age", nullptr));
        Age_3->setPlaceholderText(QApplication::translate("PlayerWindow", "Player 3 Age", nullptr));
        Age_4->setPlaceholderText(QApplication::translate("PlayerWindow", "Player 4 Age", nullptr));
        Age_5->setPlaceholderText(QApplication::translate("PlayerWindow", "Player 5 Age", nullptr));
        Age_6->setPlaceholderText(QApplication::translate("PlayerWindow", "Player 6 Age", nullptr));
        color_1->setCurrentText(QString());
        //color_1->setPlaceholderText(QString());
        go_btn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PlayerWindow: public Ui_PlayerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERWINDOW_H
