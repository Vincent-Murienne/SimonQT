/********************************************************************************
** Form generated from reading UI file 'endwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENDWINDOW_H
#define UI_ENDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_endwindow
{
public:

    void setupUi(QDialog *endwindow)
    {
        if (endwindow->objectName().isEmpty())
            endwindow->setObjectName("endwindow");
        endwindow->resize(830, 511);

        retranslateUi(endwindow);

        QMetaObject::connectSlotsByName(endwindow);
    } // setupUi

    void retranslateUi(QDialog *endwindow)
    {
        endwindow->setWindowTitle(QCoreApplication::translate("endwindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class endwindow: public Ui_endwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENDWINDOW_H
