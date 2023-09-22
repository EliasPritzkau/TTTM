#include "networking.h"

//Master or slave state

Networking::Networking(QObject *parent) : QObject(parent)
{
    qDebug() << coinflip();
    CWidget = new QWidget;
    PartnerPeer = new QTcpSocket;
}

void Networking::sendString(QString message)
{
    PartnerPeer->write(message.toUtf8());
    qDebug() << message << "has been send";
    PartnerPeer->flush();
}
const QByteArray &Networking::getMessage() const
{
    return message;
}
void Networking::catchMessage()
{
    qDebug()<< "catch message";
    message = PartnerPeer->readAll();
    qDebug() << "message from inside networking :" << message;
    emit messageSend();
}

void Networking::clearSocket()
{
    Server->setMaxPendingConnections(0);
    qDebug() << "clear socket";
    PartnerPeer->deleteLater();
    emit playerDisconnected();

}

//Returns a number either 1 or 2
int Networking::coinflip()
{

    QRandomGenerator rng;
    rng.seed(QTime::currentTime().msecsSinceStartOfDay());
    int number = rng.bounded(0, 2);
    return number;
}

//Master Mode
void Networking::buildServer(int port)
{
    qDebug()<< "build server";
    Server = new QTcpServer;

    Server->setMaxPendingConnections(1);
    Server->listen(QHostAddress::Any, port);

    connect(Server, &QTcpServer::newConnection, this,  &Networking::processNewConnectionRequest);
}

void Networking::determineStartingPLayer()
{
    if(coinflip())
    {
        sendString("resetandyoustart");
        emit ourTurn(false);
    }
    else
    {
        sendString("resetandistart");
        emit ourTurn(true);
    }
}

void Networking::clientHello()
{
    sendString("Hello");
}

void Networking::processNewConnectionRequest()
{

    PartnerPeer = Server->nextPendingConnection();

    connect(PartnerPeer, &QTcpSocket::disconnected, this ,&Networking::clearSocket);
    connect(PartnerPeer, &QAbstractSocket::readyRead, this, &Networking::catchMessage);

    Server->setMaxPendingConnections(0);
    PartnerPeer->waitForConnected();

    emit connecttionEstablished();
}

void Networking::listenMode()
{

    qDebug() << "listen mode";

    //my default port
    buildServer(51703);

}

//Slave Mode
void Networking::connectToPlayer()
{

    if(Server) Server->deleteLater();

    qDebug() << "slaveMode";
    PartnerPeer->connectToHost("localhost", 51703);

    if(PartnerPeer->waitForConnected(1000))
    {
        connect(PartnerPeer, &QAbstractSocket::readyRead, this, &Networking::catchMessage);

        clientHello();
        PartnerPeer->flush();

        emit connecttionEstablished();
    }
    else
        qDebug() << "connecting to player was unsuccsessfull";
    emit searchtimeOver();

}

