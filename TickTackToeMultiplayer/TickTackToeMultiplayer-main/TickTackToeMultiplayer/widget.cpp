﻿#include "widget.h"
#include "ui_widget.h"

//QMessage box als terminal
//To do:

//Winn/Loss/Draw detetction

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    Dialog = new QDialog;
    n = new Networking;
    buildField();


    connect(this, &Widget::WinDetected, [=] (QString winnerSymbol) {buildDialog(winnerSymbol); disableFields();});

    connect(n, &Networking::playerDisconnected, this, &Widget::disableFields);

    connect(n,&Networking::messageSend, this, &Widget::interpretMessage);

    connect(n, &Networking::ourTurn, this,  [=] (bool ourturn){  if(ourturn){ resetField(); enableFields();}else{ resetField(); disableFields();}  });

    connect(ui->PbSurrender, &QPushButton::clicked, this, [=] { n->sendString("surrender"); n->determineStartingPLayer();});

    connect(n, &Networking::searchtimeOver,ui->FindPlayer, [=] {ui->FindPlayer->setEnabled(true);});
    connect(ui->ListenMode, &QPushButton::clicked, n, [=] { n->listenMode(); mode = master; ui->ListenMode->setDisabled(true);});

    connect(ui->FindPlayer,&QPushButton::clicked, this ,[&] {

        ui->ListenMode->setDisabled(false);
        ui->FindPlayer->setDisabled(true);
        mode = slave;
        n->connectToPlayer();

    });
    connect(ui->TestButton, &QPushButton::clicked, this, &Widget::connectionTest);

}
Widget::~Widget()
{
    delete ui;
}

void Widget::buildField()
{
    PBList << nullptr << ui->PB1 << ui->PB2 << ui->PB3 << ui->PB4 << ui->PB5 << ui->PB6 << ui->PB7 << ui->PB8 << ui->PB9;
    myOptions  << "surrender" << "rematch" << "X" << "O" <<"resetandyoustart" << "resetandistart" <<  "Hello";
    connectFieldsWithClicked();
    disableFields();
}

void Widget::writeOnFieldAfterButtonClicked()
{

    qDebug() << "button clicked";
    QPushButton *button = qobject_cast<QPushButton *>(sender());

    //Just marginally different from interpret message
    if (writeOnField(QString().number(PBList.indexOf(button)), playersymbol))
        n->sendString(QString().number(PBList.indexOf(button)));

    qDebug() << "Mistakes where made";
}
void Widget::interpretMessage()
{

    QString message = QString(n->getMessage());
    switch(myOptions.indexOf(message))
    {
    case 0:
        resetField();
        winns++;
        return;
    case 1:
        resetField();
        return;
    case 2:
        playersymbol = 'X';
        enemyPlayerSymbol = 'O';
        return;
    case 3:
        playersymbol = 'O';
        enemyPlayerSymbol = 'X';
        return;
    case 4:
        resetField();
        enableFields();
        return;
    case 5:
        resetField();
        disableFields();
        return;
    case 6:
        determineSymbol();
        Sleep(50);
        n->determineStartingPLayer();
        return;

    default:
        if (writeOnField(message, enemyPlayerSymbol))
            return;
        else
            qDebug() << "Mistakes happend";
    }
}


//---------------


void Widget::enableFields()
{

    for (int i = 1; i < PBList.length(); i++)
        PBList.at(i)->setDisabled(false);

}

void Widget::disableFields()
{
    for (int i = 1; i < PBList.length(); i++)
        PBList.at(i)->setDisabled(true);

}

void Widget::connectToPlayer()
{
    disableFields();
    n->connectToPlayer();
}

bool Widget::checkIfWrittenOn(int indexOfButton)
{
    if(PBList.at(indexOfButton)->text() == "-")
        return true;
    return false;
}

void Widget::drawDetection()
{
    for (int i = 1; i < 10; i++)
        if (PBList.at(i)->text() ==  "_")
            return;

    //return draw?
}

void Widget::resetField()
{
    for (int i = 1; i < PBList.length(); i++)
        PBList.at(i)->setText("-");

}
void Widget::determineSymbol()
{
    if(n->coinflip())
    {
        n->sendString("X");
        playersymbol = 'O';
        enemyPlayerSymbol = 'X';
    }
    else
    {
        n->sendString("O");
        playersymbol = 'X';
        enemyPlayerSymbol = 'O';
    }
}

//The symbol rotates from enemy Symbol to playerSymbol
void Widget::checkForWin(QString symbol)
{
    //top line
    if(ui->PB1->text() == symbol && ui->PB2->text() == symbol && ui->PB3->text() == symbol)
        emit WinDetected(symbol);

    //mid line
    else if(ui->PB4->text() == symbol && ui->PB5->text() == symbol && ui->PB6->text() == symbol)
        emit WinDetected(symbol);

    //bottom line
    else if (ui->PB7->text() == symbol && ui->PB8->text() == symbol && ui->PB9->text() == symbol)
        emit WinDetected(symbol);

    //Diagonal right left
    else if(ui->PB1->text() == symbol && ui->PB5->text() == symbol && ui->PB9->text() == symbol)
        emit WinDetected(symbol);

    //Diagonal left right
    else if(ui->PB3->text() == symbol && ui->PB5->text() == symbol && ui->PB7->text() == symbol)
        emit WinDetected(symbol);

    //left collumn
    if(ui->PB1->text() == symbol && ui->PB4->text() == symbol && ui->PB7->text() == symbol)
        emit WinDetected(symbol);

    //mid collumn
    else if(ui->PB2->text() == symbol && ui->PB5->text() == symbol && ui->PB8->text() == symbol)
        emit WinDetected(symbol);

    //right collumn
    else if (ui->PB3->text() == symbol && ui->PB6->text() == symbol && ui->PB9->text() == symbol)
        emit WinDetected(symbol);

}

bool Widget::writeOnField(QString index, QString symbol)
{
    qDebug() << "write on field called";
    try
    {

        if (checkIfWrittenOn(index.toInt()))
            //Crashes if unnkonwn input
        {
            PBList.at(index.toInt())->setText(symbol);
            if (symbol == enemyPlayerSymbol)
                enableFields();
            else
                disableFields();
            checkForWin(playersymbol);
            drawDetection();
            return true;
        }
        else return false;
    }
    catch(...)
    {
        qDebug()<< "mistake inside of Write on field";
    }
    return  false;
}



void Widget::buildDialog(QString winner)
{
    QLabel *label = new QLabel("!Game Over!" + winner + "won the game");
    QVBoxLayout *layout = new QVBoxLayout();

    layout->addWidget(label);
    Dialog->setLayout(layout);
    Dialog->show();
}

void Widget::connectFieldsWithClicked()
{

    qDebug()<<"Make connect called";
    for (int i = 1; i < PBList.length(); i-=-1)
    {
        PBList.at(i)->setText("-");

        connect(PBList.at(i), &QPushButton::clicked, this, &Widget::writeOnFieldAfterButtonClicked);

    }
}
void Widget::minMax()
{
    qDebug() << "Minmax called";
}

void Widget::connectionTest()
{
    n->sendString("test");
}


