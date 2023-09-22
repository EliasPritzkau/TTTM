/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QFrame *frame;
    QPushButton *FindPlayer;
    QPushButton *PbSurrender;
    QLCDNumber *StandingsEnemy;
    QFrame *frame_2;
    QPushButton *PB2;
    QPushButton *PB1;
    QPushButton *PB3;
    QPushButton *PB6;
    QPushButton *PB5;
    QPushButton *PB4;
    QPushButton *PB7;
    QPushButton *PB8;
    QPushButton *PB9;
    QPushButton *TestButton;
    QPushButton *ListenMode;
    QLCDNumber *StandingsYou;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(413, 342);
        frame = new QFrame(Widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 411, 341));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        FindPlayer = new QPushButton(frame);
        FindPlayer->setObjectName(QString::fromUtf8("FindPlayer"));
        FindPlayer->setGeometry(QRect(320, 210, 80, 25));
        PbSurrender = new QPushButton(frame);
        PbSurrender->setObjectName(QString::fromUtf8("PbSurrender"));
        PbSurrender->setGeometry(QRect(320, 80, 80, 25));
        StandingsEnemy = new QLCDNumber(frame);
        StandingsEnemy->setObjectName(QString::fromUtf8("StandingsEnemy"));
        StandingsEnemy->setGeometry(QRect(370, 40, 31, 31));
        StandingsEnemy->setDigitCount(1);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(10, 20, 301, 301));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        PB2 = new QPushButton(frame_2);
        PB2->setObjectName(QString::fromUtf8("PB2"));
        PB2->setGeometry(QRect(110, 20, 80, 80));
        QFont font;
        font.setPointSize(35);
        PB2->setFont(font);
        PB1 = new QPushButton(frame_2);
        PB1->setObjectName(QString::fromUtf8("PB1"));
        PB1->setGeometry(QRect(20, 20, 80, 80));
        PB1->setFont(font);
        PB3 = new QPushButton(frame_2);
        PB3->setObjectName(QString::fromUtf8("PB3"));
        PB3->setGeometry(QRect(200, 20, 80, 80));
        PB3->setFont(font);
        PB6 = new QPushButton(frame_2);
        PB6->setObjectName(QString::fromUtf8("PB6"));
        PB6->setGeometry(QRect(200, 110, 80, 80));
        PB6->setFont(font);
        PB5 = new QPushButton(frame_2);
        PB5->setObjectName(QString::fromUtf8("PB5"));
        PB5->setGeometry(QRect(110, 110, 80, 80));
        PB5->setFont(font);
        PB4 = new QPushButton(frame_2);
        PB4->setObjectName(QString::fromUtf8("PB4"));
        PB4->setGeometry(QRect(20, 110, 80, 80));
        PB4->setFont(font);
        PB7 = new QPushButton(frame_2);
        PB7->setObjectName(QString::fromUtf8("PB7"));
        PB7->setGeometry(QRect(20, 200, 80, 80));
        PB7->setFont(font);
        PB8 = new QPushButton(frame_2);
        PB8->setObjectName(QString::fromUtf8("PB8"));
        PB8->setGeometry(QRect(110, 200, 80, 80));
        PB8->setFont(font);
        PB9 = new QPushButton(frame_2);
        PB9->setObjectName(QString::fromUtf8("PB9"));
        PB9->setGeometry(QRect(200, 200, 80, 80));
        PB9->setFont(font);
        TestButton = new QPushButton(frame);
        TestButton->setObjectName(QString::fromUtf8("TestButton"));
        TestButton->setGeometry(QRect(320, 270, 80, 25));
        ListenMode = new QPushButton(frame);
        ListenMode->setObjectName(QString::fromUtf8("ListenMode"));
        ListenMode->setGeometry(QRect(320, 240, 80, 25));
        StandingsYou = new QLCDNumber(frame);
        StandingsYou->setObjectName(QString::fromUtf8("StandingsYou"));
        StandingsYou->setGeometry(QRect(320, 40, 31, 31));
        StandingsYou->setDigitCount(1);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        FindPlayer->setText(QApplication::translate("Widget", "Find Player", nullptr));
        PbSurrender->setText(QApplication::translate("Widget", "Surrender", nullptr));
        PB2->setText(QApplication::translate("Widget", "X", nullptr));
        PB1->setText(QApplication::translate("Widget", "X", nullptr));
        PB3->setText(QApplication::translate("Widget", "X", nullptr));
        PB6->setText(QApplication::translate("Widget", "X", nullptr));
        PB5->setText(QApplication::translate("Widget", "X", nullptr));
        PB4->setText(QApplication::translate("Widget", "X", nullptr));
        PB7->setText(QApplication::translate("Widget", "X", nullptr));
        PB8->setText(QApplication::translate("Widget", "X", nullptr));
        PB9->setText(QApplication::translate("Widget", "X", nullptr));
        TestButton->setText(QApplication::translate("Widget", "Test", nullptr));
        ListenMode->setText(QApplication::translate("Widget", "Listen Mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
