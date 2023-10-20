/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_gamewindow
{
public:
    QPushButton *btn_rouge;
    QPushButton *btn_vert;
    QPushButton *btn_bleu;
    QPushButton *btn_jaune;
    QLabel *label;
    QLabel *label_end;
    QLabel *compteur_lb;

    void setupUi(QDialog *gamewindow)
    {
        if (gamewindow->objectName().isEmpty())
            gamewindow->setObjectName("gamewindow");
        gamewindow->resize(764, 437);
        gamewindow->setStyleSheet(QString::fromUtf8("#btn_rouge{background-color: red; border-top-left-radius: 80px 80px;}\n"
"#btn_bleu{background-color: blue; border-bottom-left-radius: 80px 80px;}\n"
"#btn_vert{background-color: green; border-top-right-radius: 80px 80px;}\n"
"#btn_jaune{background-color: yellow;border-bottom-right-radius: 80px 80px;}"));
        btn_rouge = new QPushButton(gamewindow);
        btn_rouge->setObjectName("btn_rouge");
        btn_rouge->setGeometry(QRect(110, 50, 231, 141));
        btn_vert = new QPushButton(gamewindow);
        btn_vert->setObjectName("btn_vert");
        btn_vert->setGeometry(QRect(420, 50, 231, 141));
        btn_bleu = new QPushButton(gamewindow);
        btn_bleu->setObjectName("btn_bleu");
        btn_bleu->setGeometry(QRect(110, 230, 231, 141));
        btn_jaune = new QPushButton(gamewindow);
        btn_jaune->setObjectName("btn_jaune");
        btn_jaune->setGeometry(QRect(420, 230, 231, 141));
        label = new QLabel(gamewindow);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 50, 541, 321));
        label->setStyleSheet(QString::fromUtf8("background-color : black;\n"
"border-radius: 80px;"));
        label_end = new QLabel(gamewindow);
        label_end->setObjectName("label_end");
        label_end->setGeometry(QRect(30, 130, 781, 141));
        QFont font;
        font.setFamilies({QString::fromUtf8("Script MT Bold")});
        font.setPointSize(36);
        font.setBold(true);
        label_end->setFont(font);
        label_end->setStyleSheet(QString::fromUtf8("color: purple;"));
        compteur_lb = new QLabel(gamewindow);
        compteur_lb->setObjectName("compteur_lb");
        compteur_lb->setGeometry(QRect(20, 370, 121, 51));
        compteur_lb->setStyleSheet(QString::fromUtf8("background-color:white;\n"
""));
        label->raise();
        btn_rouge->raise();
        btn_vert->raise();
        btn_bleu->raise();
        btn_jaune->raise();
        label_end->raise();
        compteur_lb->raise();

        retranslateUi(gamewindow);

        QMetaObject::connectSlotsByName(gamewindow);
    } // setupUi

    void retranslateUi(QDialog *gamewindow)
    {
        gamewindow->setWindowTitle(QCoreApplication::translate("gamewindow", "Game", nullptr));
        btn_rouge->setText(QString());
        btn_vert->setText(QString());
        btn_bleu->setText(QString());
        btn_jaune->setText(QString());
        label->setText(QString());
        label_end->setText(QCoreApplication::translate("gamewindow", "Vous avez perdu !  Merci d'avoir jou\303\251", nullptr));
        compteur_lb->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class gamewindow: public Ui_gamewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
