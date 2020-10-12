/********************************************************************************
** Form generated from reading UI file 'firstwork.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTWORK_H
#define UI_FIRSTWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_FirstWork
{
public:
    QLabel *srclable;
    QLabel *greylable;
    QLabel *histlable;
    QLabel *rgblable;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *FirstWork)
    {
        if (FirstWork->objectName().isEmpty())
            FirstWork->setObjectName(QString::fromUtf8("FirstWork"));
        FirstWork->resize(650, 500);
        srclable = new QLabel(FirstWork);
        srclable->setObjectName(QString::fromUtf8("srclable"));
        srclable->setGeometry(QRect(50, 50, 150, 150));
        greylable = new QLabel(FirstWork);
        greylable->setObjectName(QString::fromUtf8("greylable"));
        greylable->setGeometry(QRect(250, 50, 150, 150));
        histlable = new QLabel(FirstWork);
        histlable->setObjectName(QString::fromUtf8("histlable"));
        histlable->setGeometry(QRect(175, 280, 300, 150));
        rgblable = new QLabel(FirstWork);
        rgblable->setObjectName(QString::fromUtf8("rgblable"));
        rgblable->setGeometry(QRect(450, 50, 150, 150));
        label = new QLabel(FirstWork);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 210, 68, 41));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label_2 = new QLabel(FirstWork);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 210, 68, 41));
        label_2->setFont(font);
        label_3 = new QLabel(FirstWork);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(490, 210, 68, 41));
        label_3->setFont(font);
        label_4 = new QLabel(FirstWork);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(280, 440, 111, 41));
        label_4->setFont(font);

        retranslateUi(FirstWork);

        QMetaObject::connectSlotsByName(FirstWork);
    } // setupUi

    void retranslateUi(QDialog *FirstWork)
    {
        FirstWork->setWindowTitle(QCoreApplication::translate("FirstWork", "Dialog", nullptr));
        srclable->setText(QCoreApplication::translate("FirstWork", "\345\216\237\345\233\276", nullptr));
        greylable->setText(QCoreApplication::translate("FirstWork", "\347\201\260\345\272\246\345\233\276", nullptr));
        histlable->setText(QCoreApplication::translate("FirstWork", "\347\201\260\345\272\246\347\233\264\346\226\271\345\233\276", nullptr));
        rgblable->setText(QCoreApplication::translate("FirstWork", "\344\274\252\345\275\251\350\211\262\345\233\276", nullptr));
        label->setText(QCoreApplication::translate("FirstWork", "\345\216\237\345\233\276", nullptr));
        label_2->setText(QCoreApplication::translate("FirstWork", "\347\201\260\345\272\246\345\233\276", nullptr));
        label_3->setText(QCoreApplication::translate("FirstWork", "\344\274\252\345\275\251\350\211\262\345\233\276", nullptr));
        label_4->setText(QCoreApplication::translate("FirstWork", "\347\201\260\345\272\246\347\233\264\346\226\271\345\233\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FirstWork: public Ui_FirstWork {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTWORK_H
