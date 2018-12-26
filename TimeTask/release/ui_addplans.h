/********************************************************************************
** Form generated from reading UI file 'addplans.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPLANS_H
#define UI_ADDPLANS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AddPlans
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QTextEdit *textEdit;
    QDateTimeEdit *dateTimeEdit;
    QDateTimeEdit *dateTimeEdit_2;

    void setupUi(QDialog *AddPlans)
    {
        if (AddPlans->objectName().isEmpty())
            AddPlans->setObjectName(QStringLiteral("AddPlans"));
        AddPlans->resize(283, 297);
        AddPlans->setMinimumSize(QSize(283, 297));
        AddPlans->setMaximumSize(QSize(283, 297));
        label_2 = new QLabel(AddPlans);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 60, 101, 16));
        label_3 = new QLabel(AddPlans);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 110, 101, 16));
        label = new QLabel(AddPlans);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(12, 0, 301, 21));
        pushButton = new QPushButton(AddPlans);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 250, 171, 31));
        comboBox = new QComboBox(AddPlans);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 30, 241, 22));
        label_4 = new QLabel(AddPlans);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 160, 47, 13));
        pushButton_2 = new QPushButton(AddPlans);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 250, 71, 31));
        textEdit = new QTextEdit(AddPlans);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 179, 261, 61));
        textEdit->setLineWrapColumnOrWidth(0);
        textEdit->setReadOnly(false);
        dateTimeEdit = new QDateTimeEdit(AddPlans);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(10, 80, 194, 22));
        dateTimeEdit_2 = new QDateTimeEdit(AddPlans);
        dateTimeEdit_2->setObjectName(QStringLiteral("dateTimeEdit_2"));
        dateTimeEdit_2->setGeometry(QRect(10, 130, 194, 22));

        retranslateUi(AddPlans);

        QMetaObject::connectSlotsByName(AddPlans);
    } // setupUi

    void retranslateUi(QDialog *AddPlans)
    {
        AddPlans->setWindowTitle(QApplication::translate("AddPlans", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\277\320\273\320\260\320\275", nullptr));
        label_2->setText(QApplication::translate("AddPlans", "\320\237\320\276\321\207\320\260\321\202\320\276\320\272 \320\277\320\273\320\260\320\275\321\203:", nullptr));
        label_3->setText(QApplication::translate("AddPlans", "\320\232\321\226\320\275\320\265\321\206\321\214 \320\277\320\273\320\260\320\275\321\203:", nullptr));
        label->setText(QApplication::translate("AddPlans", "\320\222\320\270\320\261\320\265\321\200\321\226\321\202\321\214 \320\267\320\260\321\205\321\226\320\264:", nullptr));
        pushButton->setText(QApplication::translate("AddPlans", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\277\320\273\320\260\320\275 \320\262 \320\267\320\260\321\205\321\226\320\264", nullptr));
        label_4->setText(QApplication::translate("AddPlans", "\320\237\320\273\320\260\320\275:", nullptr));
        pushButton_2->setText(QApplication::translate("AddPlans", "\320\227\320\260\320\272\321\200\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPlans: public Ui_AddPlans {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPLANS_H
