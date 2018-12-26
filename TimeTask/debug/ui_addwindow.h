/********************************************************************************
** Form generated from reading UI file 'addwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWINDOW_H
#define UI_ADDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QDateTimeEdit *dateTimeEdit;
    QDateTimeEdit *dateTimeEdit_2;

    void setupUi(QDialog *AddWindow)
    {
        if (AddWindow->objectName().isEmpty())
            AddWindow->setObjectName(QStringLiteral("AddWindow"));
        AddWindow->resize(301, 242);
        AddWindow->setMinimumSize(QSize(301, 242));
        AddWindow->setMaximumSize(QSize(301, 242));
        label = new QLabel(AddWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 131, 21));
        label_2 = new QLabel(AddWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 131, 21));
        label_3 = new QLabel(AddWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 70, 131, 21));
        label_4 = new QLabel(AddWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 130, 131, 21));
        label_5 = new QLabel(AddWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 160, 131, 21));
        lineEdit = new QLineEdit(AddWindow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 10, 151, 21));
        lineEdit_2 = new QLineEdit(AddWindow);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 40, 151, 21));
        lineEdit_3 = new QLineEdit(AddWindow);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(140, 70, 151, 21));
        pushButton = new QPushButton(AddWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 200, 121, 31));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2 = new QPushButton(AddWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 200, 121, 31));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        label_6 = new QLabel(AddWindow);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 100, 111, 16));
        lineEdit_4 = new QLineEdit(AddWindow);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(140, 100, 151, 20));
        dateTimeEdit = new QDateTimeEdit(AddWindow);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(140, 130, 151, 22));
        dateTimeEdit_2 = new QDateTimeEdit(AddWindow);
        dateTimeEdit_2->setObjectName(QStringLiteral("dateTimeEdit_2"));
        dateTimeEdit_2->setGeometry(QRect(140, 160, 151, 22));

        retranslateUi(AddWindow);

        QMetaObject::connectSlotsByName(AddWindow);
    } // setupUi

    void retranslateUi(QDialog *AddWindow)
    {
        AddWindow->setWindowTitle(QApplication::translate("AddWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\267\320\260\321\205\321\226\320\264", nullptr));
        label->setText(QApplication::translate("AddWindow", "\320\235\320\260\320\267\320\262\320\260 \320\267\320\260\321\205\320\276\320\264\321\203:", nullptr));
        label_2->setText(QApplication::translate("AddWindow", "\320\235\320\260\320\267\320\262\320\260 \320\274\321\226\321\201\321\206\321\217 \320\277\321\200\320\276\320\262\320\265\320\264\320\265\320\275\320\275\321\217:", nullptr));
        label_3->setText(QApplication::translate("AddWindow", "\320\220\320\264\321\200\320\265\321\201\320\260 \320\267\320\260\321\205\320\276\320\264\321\203:", nullptr));
        label_4->setText(QApplication::translate("AddWindow", "\320\224\320\260\321\202\320\260 \320\277\320\276\321\207\320\260\321\202\320\272\321\203:", nullptr));
        label_5->setText(QApplication::translate("AddWindow", "\320\224\320\260\321\202\320\260 \320\272\321\226\320\275\321\206\321\217:", nullptr));
        pushButton->setText(QApplication::translate("AddWindow", "\320\224\320\276\320\264\320\260\321\202\320\270", nullptr));
        pushButton_2->setText(QApplication::translate("AddWindow", "\320\227\320\260\320\272\321\200\320\270\321\202\320\270", nullptr));
        label_6->setText(QApplication::translate("AddWindow", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\273\321\216\320\264\320\265\320\271: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddWindow: public Ui_AddWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWINDOW_H
