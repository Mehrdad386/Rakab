#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "playerwindow.h"
#include "helpwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_Start_Btn_clicked();

    void on_Exit_Btn_clicked();

    void on_Info_Btn_clicked();

private:
    Ui::MainWindow *ui;
    PlayerWindow *playerwindow;
    HelpWindow *helpwindow;
};
#endif // MAINWINDOW_H
