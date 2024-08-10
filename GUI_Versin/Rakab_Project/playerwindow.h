#ifndef PLAYERWINDOW_H
#define PLAYERWINDOW_H

#include <QMainWindow>
#include "MapWindow.h"
#include "service.h"

QT_BEGIN_NAMESPACE
namespace Ui { class PlayerWindow; }
QT_END_NAMESPACE

class PlayerWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PlayerWindow (QWidget *parent = nullptr);
    ~PlayerWindow ();

    void SetPlayer();
private slots:
    void position();

    void hideselect();

    void hideplayer();

    void setcombobox(QStringList );

    void on_btn_3_clicked();

    void on_btn_4_clicked();

    void on_btn_5_clicked();

    void on_btn_6_clicked();

    void on_go_btn_clicked();

private:
    Ui::PlayerWindow *ui;
    MapWindow *mapwindow;
};





#endif // PLAYER_H
