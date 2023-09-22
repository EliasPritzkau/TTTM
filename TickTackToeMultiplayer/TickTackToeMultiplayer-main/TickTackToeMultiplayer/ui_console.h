/********************************************************************************
** Form generated from reading UI file 'console.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLE_H
#define UI_CONSOLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_console
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *console)
    {
        if (console->objectName().isEmpty())
            console->setObjectName(QString::fromUtf8("console"));
        console->resize(400, 300);
        pushButton = new QPushButton(console);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 140, 80, 25));

        retranslateUi(console);

        QMetaObject::connectSlotsByName(console);
    } // setupUi

    void retranslateUi(QWidget *console)
    {
        console->setWindowTitle(QApplication::translate("console", "Form", nullptr));
        pushButton->setText(QApplication::translate("console", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class console: public Ui_console {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLE_H
