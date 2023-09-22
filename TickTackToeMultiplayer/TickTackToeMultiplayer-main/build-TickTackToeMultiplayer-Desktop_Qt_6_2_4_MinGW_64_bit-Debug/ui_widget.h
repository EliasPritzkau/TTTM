/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QFrame *frame;
    QPushButton *PB2;
    QPushButton *PB1;
    QPushButton *PB3;
    QPushButton *PB6;
    QPushButton *PB5;
    QPushButton *PB4;
    QPushButton *PB7;
    QPushButton *PB8;
    QPushButton *PB9;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(320, 340);
        frame = new QFrame(Widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 30, 301, 301));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        PB2 = new QPushButton(frame);
        PB2->setObjectName(QString::fromUtf8("PB2"));
        PB2->setGeometry(QRect(110, 20, 80, 80));
        QFont font;
        font.setPointSize(35);
        PB2->setFont(font);
        PB1 = new QPushButton(frame);
        PB1->setObjectName(QString::fromUtf8("PB1"));
        PB1->setGeometry(QRect(20, 20, 80, 80));
        PB1->setFont(font);
        PB3 = new QPushButton(frame);
        PB3->setObjectName(QString::fromUtf8("PB3"));
        PB3->setGeometry(QRect(200, 20, 80, 80));
        PB3->setFont(font);
        PB6 = new QPushButton(frame);
        PB6->setObjectName(QString::fromUtf8("PB6"));
        PB6->setGeometry(QRect(200, 110, 80, 80));
        PB6->setFont(font);
        PB5 = new QPushButton(frame);
        PB5->setObjectName(QString::fromUtf8("PB5"));
        PB5->setGeometry(QRect(110, 110, 80, 80));
        PB5->setFont(font);
        PB4 = new QPushButton(frame);
        PB4->setObjectName(QString::fromUtf8("PB4"));
        PB4->setGeometry(QRect(20, 110, 80, 80));
        PB4->setFont(font);
        PB7 = new QPushButton(frame);
        PB7->setObjectName(QString::fromUtf8("PB7"));
        PB7->setGeometry(QRect(20, 200, 80, 80));
        PB7->setFont(font);
        PB8 = new QPushButton(frame);
        PB8->setObjectName(QString::fromUtf8("PB8"));
        PB8->setGeometry(QRect(110, 200, 80, 80));
        PB8->setFont(font);
        PB9 = new QPushButton(frame);
        PB9->setObjectName(QString::fromUtf8("PB9"));
        PB9->setGeometry(QRect(200, 200, 80, 80));
        PB9->setFont(font);
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 5, 300, 20));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        PB2->setText(QCoreApplication::translate("Widget", "X", nullptr));
        PB1->setText(QCoreApplication::translate("Widget", "X", nullptr));
        PB3->setText(QCoreApplication::translate("Widget", "X", nullptr));
        PB6->setText(QCoreApplication::translate("Widget", "X", nullptr));
        PB5->setText(QCoreApplication::translate("Widget", "X", nullptr));
        PB4->setText(QCoreApplication::translate("Widget", "X", nullptr));
        PB7->setText(QCoreApplication::translate("Widget", "X", nullptr));
        PB8->setText(QCoreApplication::translate("Widget", "X", nullptr));
        PB9->setText(QCoreApplication::translate("Widget", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
