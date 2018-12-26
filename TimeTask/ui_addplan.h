/********************************************************************************
** Form generated from reading UI file 'addplan.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPLAN_H
#define UI_ADDPLAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addplan
{
public:
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QDateEdit *dateEdit_2;
    QLineEdit *lineEdit;

    void setupUi(QWidget *addplan)
    {
        if (addplan->objectName().isEmpty())
            addplan->setObjectName(QStringLiteral("addplan"));
        addplan->resize(273, 295);
        label = new QLabel(addplan);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(12, 0, 301, 21));
        comboBox = new QComboBox(addplan);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 30, 241, 22));
        pushButton = new QPushButton(addplan);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 250, 181, 31));
        label_2 = new QLabel(addplan);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 60, 61, 16));
        label_3 = new QLabel(addplan);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 110, 47, 13));
        label_4 = new QLabel(addplan);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 160, 47, 13));
        dateEdit = new QDateEdit(addplan);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(20, 80, 121, 22));
        dateEdit_2 = new QDateEdit(addplan);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(20, 130, 121, 22));
        lineEdit = new QLineEdit(addplan);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 180, 231, 51));

        retranslateUi(addplan);

        QMetaObject::connectSlotsByName(addplan);
    } // setupUi

    void retranslateUi(QWidget *addplan)
    {
        addplan->setWindowTitle(QApplication::translate("addplan", "Form", nullptr));
        label->setText(QApplication::translate("addplan", "\320\234\320\265\321\200\320\276\320\277\321\200\320\270\321\217\321\202\320\270\321\217:", nullptr));
        pushButton->setText(QApplication::translate("addplan", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262 \320\277\320\273\320\260\320\275 \320\274\320\265\321\200\320\276\320\277\321\200\320\270\321\217\321\202\320\270\321\217", nullptr));
        label_2->setText(QApplication::translate("addplan", "timeStart:", nullptr));
        label_3->setText(QApplication::translate("addplan", "timeEnd:", nullptr));
        label_4->setText(QApplication::translate("addplan", "Schedule:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addplan: public Ui_addplan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPLAN_H
