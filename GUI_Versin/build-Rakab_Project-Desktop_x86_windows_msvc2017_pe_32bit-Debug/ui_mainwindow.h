/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *BG;
    QPushButton *Start_Btn;
    QPushButton *Info_Btn;
    QPushButton *Exit_Btn;
    QLabel *Title;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(668, 529);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(5);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/C:/Users/Novin SOft/Desktop/New folder/Back_final.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setIconSize(QSize(30, 30));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        BG = new QLabel(centralwidget);
        BG->setObjectName(QString::fromUtf8("BG"));
        BG->setGeometry(QRect(20, 10, 1, 1));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BG->sizePolicy().hasHeightForWidth());
        BG->setSizePolicy(sizePolicy1);
        BG->setMaximumSize(QSize(1, 1));
        BG->setPixmap(QPixmap(QString::fromUtf8(":/image/src/Back_final.jpg")));
        BG->setScaledContents(true);
        BG->setAlignment(Qt::AlignCenter);
        Start_Btn = new QPushButton(centralwidget);
        Start_Btn->setObjectName(QString::fromUtf8("Start_Btn"));
        Start_Btn->setGeometry(QRect(60, 10, 261, 91));
        Start_Btn->setAutoFillBackground(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/src/Play_But.png"), QSize(), QIcon::Normal, QIcon::Off);
        Start_Btn->setIcon(icon1);
        Start_Btn->setIconSize(QSize(700, 250));
        Start_Btn->setFlat(true);
        Info_Btn = new QPushButton(centralwidget);
        Info_Btn->setObjectName(QString::fromUtf8("Info_Btn"));
        Info_Btn->setGeometry(QRect(90, 90, 181, 81));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/src/help_Btn.png"), QSize(), QIcon::Normal, QIcon::Off);
        Info_Btn->setIcon(icon2);
        Info_Btn->setIconSize(QSize(700, 250));
        Info_Btn->setFlat(true);
        Exit_Btn = new QPushButton(centralwidget);
        Exit_Btn->setObjectName(QString::fromUtf8("Exit_Btn"));
        Exit_Btn->setGeometry(QRect(50, 170, 221, 91));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/src/Exit_but.png"), QSize(), QIcon::Normal, QIcon::Off);
        Exit_Btn->setIcon(icon3);
        Exit_Btn->setIconSize(QSize(700, 250));
        Exit_Btn->setFlat(true);
        Title = new QLabel(centralwidget);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setGeometry(QRect(400, 110, 181, 141));
        Title->setPixmap(QPixmap(QString::fromUtf8(":/src/Title.png")));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 668, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "RAKABMAIN", nullptr));
        BG->setText(QString());
        Start_Btn->setText(QString());
        Info_Btn->setText(QString());
        Exit_Btn->setText(QString());
        Title->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
