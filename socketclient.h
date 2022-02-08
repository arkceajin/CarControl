#ifndef SOCKETCLIENT_H
#define SOCKETCLIENT_H

#include <QObject>
#include <QtQml>
#include <QTcpSocket>

class SocketClient : public QTcpSocket
{
    Q_OBJECT
    QML_ELEMENT
public:
    explicit SocketClient(QObject *parent = nullptr);

    Q_INVOKABLE void connect();
    Q_INVOKABLE void send(QString s);
signals:

};

#endif // SOCKETCLIENT_H
