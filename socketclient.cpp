#include "socketclient.h"

SocketClient::SocketClient(QObject *parent)
    : QTcpSocket{parent}
{

}

void SocketClient::connect()
{
    connectToHost("192.168.4.1", 333);
}

void SocketClient::send(QString s)
{
    write(s.toUtf8());
}
