#ifndef NETGENMAINWINDOW_H
#define NETGENMAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class NetGenMainWindow; }
QT_END_NAMESPACE

class NetGenMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    NetGenMainWindow(QWidget *parent = nullptr);
    ~NetGenMainWindow();

private:
    Ui::NetGenMainWindow *ui;
};
#endif // NETGENMAINWINDOW_H
