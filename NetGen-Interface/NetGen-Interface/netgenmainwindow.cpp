#include "netgenmainwindow.h"
#include "ui_netgenmainwindow.h"

NetGenMainWindow::NetGenMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::NetGenMainWindow)
{
    ui->setupUi(this);
}

NetGenMainWindow::~NetGenMainWindow()
{
    delete ui;
}

