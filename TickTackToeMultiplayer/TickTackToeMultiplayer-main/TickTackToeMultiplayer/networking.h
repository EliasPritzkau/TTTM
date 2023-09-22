#ifndef NETWORKING_H
#define NETWORKING_H

#include <QObject>
#include <QtNetwork>
#include <QtWidgets>
#include "ui_console.h"

// Diese klasse verbindet die beiden Peers miteinander und kann eine debug Console ausgeben
class Networking : public QObject
{
    Q_OBJECT
public:
    explicit Networking(QObject *parent = nullptr);


    void sendString(QString whateverHasToBesend);

    void determineStartingPLayer();
    int coinflip();


    //Initiates the slave mode
    //Connects to a Server,
    void connectToPlayer();

    //Master Mode
    //Builds a server and waits for a connection request
    void listenMode();

    const QByteArray &getMessage() const;

signals:

    void messageSend();
    void connecttionEstablished();
    void ourTurn(bool);
    void searchtimeOver();

    //? needet
    void playerDisconnected();

private:
    Ui::console *consoleUi;

    QWidget *CWidget= nullptr;
    QTcpSocket *PartnerPeer = nullptr;
    QByteArray message;

    //Master Mode
    void buildServer(int port);

    QTcpServer *Server = nullptr;

    //Slave Mode
    void connectWithPeer();
    void clientHello();


private slots:
    void clearSocket();
    void catchMessage();

    //Master Mode
    void processNewConnectionRequest();

};

#endif // NETWORKING_H
