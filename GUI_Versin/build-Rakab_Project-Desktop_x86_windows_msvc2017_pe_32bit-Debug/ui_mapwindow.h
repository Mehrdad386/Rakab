/********************************************************************************
** Form generated from reading UI file 'mapwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPWINDOW_H
#define UI_MAPWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MapWindow
{
public:
    QWidget *centralwidget;
    QLabel *Map_lable;
    QLabel *Select_labe;
    QTextEdit *war_txt;
    QPushButton *go_btn;
    QLabel *BG;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MapWindow)
    {
        if (MapWindow->objectName().isEmpty())
            MapWindow->setObjectName(QString::fromUtf8("MapWindow"));
        MapWindow->setWindowModality(Qt::NonModal);
        MapWindow->resize(800, 600);
        MapWindow->setDocumentMode(false);
        MapWindow->setDockNestingEnabled(false);
        centralwidget = new QWidget(MapWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Map_lable = new QLabel(centralwidget);
        Map_lable->setObjectName(QString::fromUtf8("Map_lable"));
        Map_lable->setGeometry(QRect(50, 20, 311, 151));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Map_lable->sizePolicy().hasHeightForWidth());
        Map_lable->setSizePolicy(sizePolicy);
        Map_lable->setPixmap(QPixmap(QString::fromUtf8(":/src/Map.png")));
        Map_lable->setScaledContents(false);
        Select_labe = new QLabel(centralwidget);
        Select_labe->setObjectName(QString::fromUtf8("Select_labe"));
        Select_labe->setGeometry(QRect(20, 220, 47, 14));
        QFont font;
        font.setFamily(QString::fromUtf8("Minecraft"));
        font.setPointSize(20);
        Select_labe->setFont(font);
        war_txt = new QTextEdit(centralwidget);
        war_txt->setObjectName(QString::fromUtf8("war_txt"));
        war_txt->setGeometry(QRect(110, 200, 121, 41));
        sizePolicy.setHeightForWidth(war_txt->sizePolicy().hasHeightForWidth());
        war_txt->setSizePolicy(sizePolicy);
        war_txt->setAutoFillBackground(false);
        war_txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        war_txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        go_btn = new QPushButton(centralwidget);
        go_btn->setObjectName(QString::fromUtf8("go_btn"));
        go_btn->setGeometry(QRect(100, 270, 80, 22));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/src/Gobtn.png"), QSize(), QIcon::Normal, QIcon::Off);
        go_btn->setIcon(icon);
        go_btn->setIconSize(QSize(210, 60));
        go_btn->setFlat(true);
        BG = new QLabel(centralwidget);
        BG->setObjectName(QString::fromUtf8("BG"));
        BG->setGeometry(QRect(20, 20, 21, 16));
        sizePolicy.setHeightForWidth(BG->sizePolicy().hasHeightForWidth());
        BG->setSizePolicy(sizePolicy);
        BG->setPixmap(QPixmap(QString::fromUtf8(":/image/src/Back_final.jpg")));
        BG->setScaledContents(true);
        BG->setIndent(-9);
        MapWindow->setCentralWidget(centralwidget);
        BG->raise();
        Map_lable->raise();
        Select_labe->raise();
        war_txt->raise();
        go_btn->raise();
        menubar = new QMenuBar(MapWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MapWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MapWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MapWindow->setStatusBar(statusbar);

        retranslateUi(MapWindow);

        QMetaObject::connectSlotsByName(MapWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MapWindow)
    {
        MapWindow->setWindowTitle(QApplication::translate("MapWindow", "MainWindow", nullptr));
        Map_lable->setText(QString());
        Select_labe->setText(QApplication::translate("MapWindow", "TextLabel", nullptr));
        go_btn->setText(QString());
        BG->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MapWindow: public Ui_MapWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPWINDOW_H
