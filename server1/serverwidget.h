#ifndef SERVERWIDGET_H
#define SERVERWIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
QT_BEGIN_NAMESPACE
namespace Ui { class ServerWidget; }
QT_END_NAMESPACE

class ServerWidget : public QWidget
{
    Q_OBJECT

public:
    ServerWidget(QWidget *parent = nullptr);
    ~ServerWidget();

private slots:
    void on_buttonsend_clicked();

    void on_buttonclose_clicked();

private:
    Ui::ServerWidget *ui;    
    // 声明两种套接字
    QTcpServer *tcpserver;
    QTcpSocket *tcpsocket;
};
#endif // SERVERWIDGET_H
