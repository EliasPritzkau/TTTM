/********************************************************************************
** Form generated from reading UI file 'console.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
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

class Ui_consol
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *consol)
    {
        if (consol->objectName().isEmpty())
            consol->setObjectName(QString::fromUtf8("consol"));
        consol->resize(400, 300);
        pushButton = new QPushButton(consol);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 140, 80, 25));

        retranslateUi(consol);

        QMetaObject::connectSlotsByName(consol);
    } // setupUi

    void retranslateUi(QWidget *consol)
    {
        consol->setWindowTitle(QCoreApplication::translate("consol", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("consol", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class consol: public Ui_consol {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLE_H
