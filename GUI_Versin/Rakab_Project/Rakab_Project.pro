QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Entity/sources/Bahar.cpp \
    Entity/sources/Card.cpp \
    Entity/sources/City.cpp \
    Entity/sources/Data.cpp \
    Entity/sources/Foksefid.cpp \
    Entity/sources/Game.cpp \
    Entity/sources/Manager.cpp \
    Entity/sources/Map.cpp \
    Entity/sources/Matarsak.cpp \
    Entity/sources/ParchamDar.cpp \
    Entity/sources/PirpleCard.cpp \
    Entity/sources/Player.cpp \
    Entity/sources/Rakab.cpp \
    Entity/sources/RakhshSefid.cpp \
    Entity/sources/RishSefid.cpp \
    Entity/sources/ShirDokht.cpp \
    Entity/sources/ShirZan.cpp \
    Entity/sources/ShirinAghl.cpp \
    Entity/sources/TablZan.cpp \
    Entity/sources/YellowCard.cpp \
    Entity/sources/Zemestan.cpp \
    MapWindow.cpp \
    gamewindow.cpp \
    helpwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    playerwindow.cpp \
    service.cpp

HEADERS += \
    Entity/header/Bahar.h \
    Entity/header/Card.h \
    Entity/header/City.h \
    Entity/header/Data.h \
    Entity/header/FokSefid.h \
    Entity/header/Game.h \
    Entity/header/Manager.h \
    Entity/header/Map.h \
    Entity/header/Matarsak.h \
    Entity/header/ParchamDar.h \
    Entity/header/PirpleCard.h \
    Entity/header/Player.h \
    Entity/header/RakhshSefid.h \
    Entity/header/RishSefid.h \
    Entity/header/ShirDokht.h \
    Entity/header/ShirZan.h \
    Entity/header/ShirinAghl.h \
    Entity/header/TablZan.h \
    Entity/header/YellowCard.h \
    Entity/header/Zemestan.h \
    MapWindow.h \
    gamewindow.h \
    helpwindow.h \
    mainwindow.h \
    playerwindow.h \
    service.h

FORMS += \
    gamewindow.ui \
    mainwindow.ui \
    mapwindow.ui \
    playerwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resource.qrc

DISTFILES +=
