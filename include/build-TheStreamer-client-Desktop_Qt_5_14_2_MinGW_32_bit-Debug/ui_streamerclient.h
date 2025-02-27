/********************************************************************************
** Form generated from reading UI file 'streamerclient.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STREAMERCLIENT_H
#define UI_STREAMERCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TheStreamerClient
{
public:
    QWidget *centralWidget;
    QLabel *lblImage;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QPushButton *btnFS;
    QPushButton *btnQuit;

    void setupUi(QMainWindow *TheStreamerClient)
    {
        if (TheStreamerClient->objectName().isEmpty())
            TheStreamerClient->setObjectName(QString::fromUtf8("TheStreamerClient"));
        TheStreamerClient->resize(1290, 729);
        centralWidget = new QWidget(TheStreamerClient);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lblImage = new QLabel(centralWidget);
        lblImage->setObjectName(QString::fromUtf8("lblImage"));
        lblImage->setGeometry(QRect(5, 4, 1161, 621));
        lblImage->setStyleSheet(QString::fromUtf8("background-color: black"));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(1170, 170, 91, 19));
        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(1170, 210, 91, 19));
        checkBox_3 = new QCheckBox(centralWidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(1170, 250, 91, 19));
        btnFS = new QPushButton(centralWidget);
        btnFS->setObjectName(QString::fromUtf8("btnFS"));
        btnFS->setGeometry(QRect(980, 630, 191, 41));
        btnQuit = new QPushButton(centralWidget);
        btnQuit->setObjectName(QString::fromUtf8("btnQuit"));
        btnQuit->setGeometry(QRect(980, 680, 191, 41));
        TheStreamerClient->setCentralWidget(centralWidget);

        retranslateUi(TheStreamerClient);

        QMetaObject::connectSlotsByName(TheStreamerClient);
    } // setupUi

    void retranslateUi(QMainWindow *TheStreamerClient)
    {
        TheStreamerClient->setWindowTitle(QCoreApplication::translate("TheStreamerClient", "Sender", nullptr));
        lblImage->setText(QString());
        checkBox->setText(QCoreApplication::translate("TheStreamerClient", "\345\201\234\350\275\246", nullptr));
        checkBox_2->setText(QCoreApplication::translate("TheStreamerClient", "\346\237\261\345\255\220", nullptr));
        checkBox_3->setText(QCoreApplication::translate("TheStreamerClient", "\344\272\272", nullptr));
        btnFS->setText(QCoreApplication::translate("TheStreamerClient", "Full screen", nullptr));
        btnQuit->setText(QCoreApplication::translate("TheStreamerClient", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TheStreamerClient: public Ui_TheStreamerClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STREAMERCLIENT_H
