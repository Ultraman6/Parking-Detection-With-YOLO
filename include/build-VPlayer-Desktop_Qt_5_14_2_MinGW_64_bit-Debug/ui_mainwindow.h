/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *btnFullScreen;
    QWidget *centralWidget;
    QPushButton *btnLecture;
    QSpinBox *spnVitesse;
    QLabel *lblVitesse;
    QCheckBox *ckLoop;
    QSlider *slidVideo;
    QLabel *lblVideo;
    QPushButton *btnQuit;
    QPushButton *btnFS;
    QLabel *lblConnected;
    QLabel *lblClientCount;
    QLabel *lblIP;
    QMenuBar *menuBar;
    QStatusBar *sbTimer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1255, 846);
        MainWindow->setMinimumSize(QSize(1255, 820));
        MainWindow->setMaximumSize(QSize(1255, 846));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Serif"));
        MainWindow->setFont(font);
        btnFullScreen = new QAction(MainWindow);
        btnFullScreen->setObjectName(QString::fromUtf8("btnFullScreen"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        btnLecture = new QPushButton(centralWidget);
        btnLecture->setObjectName(QString::fromUtf8("btnLecture"));
        btnLecture->setGeometry(QRect(50, 740, 111, 51));
        spnVitesse = new QSpinBox(centralWidget);
        spnVitesse->setObjectName(QString::fromUtf8("spnVitesse"));
        spnVitesse->setGeometry(QRect(180, 740, 48, 26));
        spnVitesse->setMaximum(3);
        spnVitesse->setValue(1);
        lblVitesse = new QLabel(centralWidget);
        lblVitesse->setObjectName(QString::fromUtf8("lblVitesse"));
        lblVitesse->setGeometry(QRect(240, 745, 181, 21));
        QFont font1;
        font1.setPointSize(12);
        lblVitesse->setFont(font1);
        lblVitesse->setAutoFillBackground(true);
        ckLoop = new QCheckBox(centralWidget);
        ckLoop->setObjectName(QString::fromUtf8("ckLoop"));
        ckLoop->setGeometry(QRect(180, 770, 171, 21));
        slidVideo = new QSlider(centralWidget);
        slidVideo->setObjectName(QString::fromUtf8("slidVideo"));
        slidVideo->setGeometry(QRect(50, 720, 1151, 20));
        slidVideo->setMaximum(1252);
        slidVideo->setOrientation(Qt::Horizontal);
        lblVideo = new QLabel(centralWidget);
        lblVideo->setObjectName(QString::fromUtf8("lblVideo"));
        lblVideo->setGeometry(QRect(0, -5, 1280, 720));
        lblVideo->setMaximumSize(QSize(1280, 720));
        lblVideo->setAutoFillBackground(false);
        btnQuit = new QPushButton(centralWidget);
        btnQuit->setObjectName(QString::fromUtf8("btnQuit"));
        btnQuit->setGeometry(QRect(1110, 770, 91, 21));
        btnFS = new QPushButton(centralWidget);
        btnFS->setObjectName(QString::fromUtf8("btnFS"));
        btnFS->setGeometry(QRect(1030, 740, 171, 21));
        lblConnected = new QLabel(centralWidget);
        lblConnected->setObjectName(QString::fromUtf8("lblConnected"));
        lblConnected->setGeometry(QRect(510, 750, 261, 21));
        lblConnected->setFont(font1);
        lblConnected->setAutoFillBackground(true);
        lblClientCount = new QLabel(centralWidget);
        lblClientCount->setObjectName(QString::fromUtf8("lblClientCount"));
        lblClientCount->setGeometry(QRect(720, 750, 161, 21));
        lblClientCount->setFont(font1);
        lblClientCount->setAutoFillBackground(true);
        lblIP = new QLabel(centralWidget);
        lblIP->setObjectName(QString::fromUtf8("lblIP"));
        lblIP->setGeometry(QRect(510, 770, 261, 21));
        lblIP->setFont(font1);
        lblIP->setAutoFillBackground(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1255, 23));
        MainWindow->setMenuBar(menuBar);
        sbTimer = new QStatusBar(MainWindow);
        sbTimer->setObjectName(QString::fromUtf8("sbTimer"));
        MainWindow->setStatusBar(sbTimer);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Client", nullptr));
        btnFullScreen->setText(QCoreApplication::translate("MainWindow", "FullScreen", nullptr));
#if QT_CONFIG(tooltip)
        btnFullScreen->setToolTip(QCoreApplication::translate("MainWindow", "FullScreen", nullptr));
#endif // QT_CONFIG(tooltip)
        btnLecture->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        lblVitesse->setText(QCoreApplication::translate("MainWindow", "images per second", nullptr));
        ckLoop->setText(QCoreApplication::translate("MainWindow", "Loop", nullptr));
        lblVideo->setText(QCoreApplication::translate("MainWindow", "Lbl", nullptr));
        btnQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        btnFS->setText(QCoreApplication::translate("MainWindow", "Full screen", nullptr));
        lblConnected->setText(QCoreApplication::translate("MainWindow", "clients connect:", nullptr));
        lblClientCount->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lblIP->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
