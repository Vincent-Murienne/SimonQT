/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *btn_jouer;
    QPushButton *btn_exit;
    QLabel *background;

    void setupUi(QMainWindow *mainwindow)
    {
        if (mainwindow->objectName().isEmpty())
            mainwindow->setObjectName("mainwindow");
        mainwindow->resize(800, 600);
        centralwidget = new QWidget(mainwindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 20, 501, 161));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(26);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font:700 italic 26pt \"Segoe UI\";\n"
"color :black;"));
        btn_jouer = new QPushButton(centralwidget);
        btn_jouer->setObjectName("btn_jouer");
        btn_jouer->setGeometry(QRect(180, 290, 161, 91));
        QFont font1;
        font1.setPointSize(24);
        btn_jouer->setFont(font1);
        btn_jouer->setCursor(QCursor(Qt::PointingHandCursor));
        btn_jouer->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(190,190,190);\n"
"color:black;"));
        btn_exit = new QPushButton(centralwidget);
        btn_exit->setObjectName("btn_exit");
        btn_exit->setGeometry(QRect(80, 420, 161, 91));
        btn_exit->setFont(font1);
        btn_exit->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(190,190,190);\n"
"color:black;"));
        background = new QLabel(centralwidget);
        background->setObjectName("background");
        background->setGeometry(QRect(-160, -20, 961, 601));
        background->setPixmap(QPixmap(QString::fromUtf8(":/images/Arp.jpg")));
        mainwindow->setCentralWidget(centralwidget);
        background->raise();
        label->raise();
        btn_jouer->raise();
        btn_exit->raise();

        retranslateUi(mainwindow);

        QMetaObject::connectSlotsByName(mainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindow)
    {
        mainwindow->setWindowTitle(QCoreApplication::translate("mainwindow", "Menu", nullptr));
        label->setText(QCoreApplication::translate("mainwindow", "Bienvenue sur le jeu du Simon", nullptr));
        btn_jouer->setText(QCoreApplication::translate("mainwindow", "Jouer", nullptr));
        btn_exit->setText(QCoreApplication::translate("mainwindow", "Quitter", nullptr));
        background->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mainwindow: public Ui_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
