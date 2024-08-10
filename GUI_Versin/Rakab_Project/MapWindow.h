#ifndef MAPWINDOW_H
#define MAPWINDOW_H

#include <QMainWindow>
#include "gamewindow.h"
#include <vector>

QT_BEGIN_NAMESPACE
namespace Ui { class MapWindow; }
QT_END_NAMESPACE

class MapWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MapWindow (QWidget *parent = nullptr);
    ~MapWindow ();

    void posion();

    std::string Findyoungestplayer();

    void setwarplace();

    void Setwarlable(std::string);

private slots:


    void on_go_btn_clicked();

private:
    Ui::MapWindow *ui;
    GameWindow *gamewindow;
};





#endif // MAPWINDOW_H
