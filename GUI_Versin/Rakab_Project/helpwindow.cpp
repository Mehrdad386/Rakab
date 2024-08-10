#include "helpwindow.h"

HelpWindow::HelpWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // Initialize your HelpWindow here
    setWindowTitle("Help Window");
    resize(400, 300); // Set the size of the HelpWindow
}
