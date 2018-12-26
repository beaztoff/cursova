/********************************************************************************
** Form generated from reading UI file 'addplanwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPLANWINDOW_H
#define UI_ADDPLANWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_AddPlanWindow
{
public:
    QTimeEdit *timeEdit;
    QLabel *label_6;
    QLabel *label_7;
    QTimeEdit *timeEdit_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *AddPlanWindow)
    {
        if (AddPlanWindow->objectName().isEmpty())
            AddPlanWindow->setObjectName(QStringLiteral("AddPlanWindow"));
        AddPlanWindow->resize(301, 151);
        timeEdit = new QTimeEdit(AddPlanWindow);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(140, 10, 151, 22));
        label_6 = new QLabel(AddPlanWindow);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 10, 131, 21));
        label_7 = new QLabel(AddPlanWindow);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 40, 131, 21));
        timeEdit_2 = new QTimeEdit(AddPlanWindow);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));
        timeEdit_2->setGeometry(QRect(140, 40, 151, 22));
        label = new QLabel(AddPlanWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 70, 131, 21));
        lineEdit = new QLineEdit(AddPlanWindow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 70, 151, 21));
        pushButton_2 = new QPushButton(AddPlanWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 110, 121, 31));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton = new QPushButton(AddPlanWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 110, 121, 31));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(AddPlanWindow);

        QMetaObject::connectSlotsByName(AddPlanWindow);
    } // setupUi

    void retranslateUi(QDialog *AddPlanWindow)
    {
        AddPlanWindow->setWindowTitle(QApplication::translate("AddPlanWindow", "Dialog", nullptr));
        label_6->setText(QApplication::translate("AddPlanWindow", "\320\222\321\200\320\265\320\274\321\217 \320\275\320\260\321\207\320\260\320\273\320\260:", nullptr));
        label_7->setText(QApplication::translate("AddPlanWindow", "\320\222\321\200\320\265\320\274\321\217 \320\276\320\272\320\276\320\275\321\207\320\260\320\275\320\270\321\217:", nullptr));
        label->setText(QApplication::translate("AddPlanWindow", "\320\237\321\203\320\275\320\272\321\202 \320\274\320\265\321\200\320\276\320\277\321\200\320\270\321\217\321\202\320\270\321\217:", nullptr));
        pushButton_2->setText(QApplication::translate("AddPlanWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        pushButton->setText(QApplication::translate("AddPlanWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPlanWindow: public Ui_AddPlanWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPLANWINDOW_H
