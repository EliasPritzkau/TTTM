#ifndef WIDGET_H
#define WIDGET_H

#include <networking.h>
#include <QtWidgets>


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QList<QPushButton*> PBList;

signals:
    QString WinDetected(QString);

private:
    enum mode {master, slave};
    mode mode;

    Ui::Widget *ui;
    Networking *n;

    QString playersymbol, enemyPlayerSymbol;

    QList <QString> myOptions;

    QString winnerLoser = NULL;
    QDialog *Dialog;

    void buildField();
    void buildDialog(QString winner);
    bool checkIfWrittenOn(int indexOfButton);
    void updateStandings();

    bool gameOver = false;
    int winns,losses;

    void resetField();
    void determineSymbol();
    void checkForWin(QString symbol);
    void surrender();


private slots:

    void minMax();
    void connectionTest();

    void writeOnFieldAfterButtonClicked();
    void connectFieldsWithClicked();

    void interpretMessage();
    void enableFields();
    void disableFields();


    void connectToPlayer();







};
#endif // WIDGET_H
