/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QToolButton *toolButton;
    QPushButton *OpenImgButton;
    QLabel *SrcImglabel;
    QPushButton *WorkButton1;
    QLabel *pathlabel;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(750, 580);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(550, 50, 50, 25));
        OpenImgButton = new QPushButton(centralWidget);
        OpenImgButton->setObjectName(QString::fromUtf8("OpenImgButton"));
        OpenImgButton->setGeometry(QRect(50, 120, 100, 30));
        QFont font;
        font.setPointSize(10);
        OpenImgButton->setFont(font);
        SrcImglabel = new QLabel(centralWidget);
        SrcImglabel->setObjectName(QString::fromUtf8("SrcImglabel"));
        SrcImglabel->setGeometry(QRect(350, 150, 300, 300));
        WorkButton1 = new QPushButton(centralWidget);
        WorkButton1->setObjectName(QString::fromUtf8("WorkButton1"));
        WorkButton1->setGeometry(QRect(50, 180, 100, 30));
        WorkButton1->setFont(font);
        pathlabel = new QLabel(centralWidget);
        pathlabel->setObjectName(QString::fromUtf8("pathlabel"));
        pathlabel->setGeometry(QRect(135, 50, 400, 25));
        QFont font1;
        font1.setPointSize(9);
        pathlabel->setFont(font1);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 50, 100, 25));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 750, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        OpenImgButton->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\345\233\276\347\211\207", nullptr));
        SrcImglabel->setText(QString());
        WorkButton1->setText(QCoreApplication::translate("MainWindow", "\347\254\254\344\270\200\350\212\202\344\275\234\344\270\232", nullptr));
        pathlabel->setText(QCoreApplication::translate("MainWindow", "C:/Users/LJY/Desktop/CV_work/lena_c.png", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\233\276\347\211\207\345\234\260\345\235\200\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
