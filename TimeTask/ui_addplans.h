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
        AddPlans->resize(331, 221);
        AddPlans->setMinimumSize(QSize(331, 221));
        AddPlans->setMaximumSize(QSize(331, 221));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/timetask-ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        AddPlans->setWindowIcon(icon);
        AddPlans->setStyleSheet(QStringLiteral("background-color: rgb(250, 255, 188);"));
        label_2 = new QLabel(AddPlans);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 111, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_3 = new QLabel(AddPlans);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 90, 111, 31));
        label_3->setFont(font);
        label = new QLabel(AddPlans);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 111, 31));
        label->setFont(font);
        pushButton = new QPushButton(AddPlans);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 180, 151, 31));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: rgb(215, 132, 0);\n"
"border-style: solid;\n"
"border-radius: 7px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: black;\n"
"color: rgb(215, 132, 0);\n"
"}\n"
""));
        comboBox = new QComboBox(AddPlans);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(150, 10, 171, 31));
        comboBox->setFont(font);
        comboBox->setStyleSheet(QLatin1String("QComboBox {\n"
"background-color: rgb(255, 255, 255);\n"
"border-style: solid;\n"
"border-width:2px;\n"
"border-color: rgb(215, 132, 0);\n"
"selection-color: rgb(0, 0, 0);\n"
"}\n"
"QComboBox::drop-down {\n"
"background-color: rgb(215, 132, 0);\n"
"}\n"
"QComboBox::down-arrow {\n"
"image: url(:/images/down.png);\n"
"top: 1px;\n"
"left: 1px;\n"
"}\n"
"QComboBox::drop-down:pressed {\n"
"background-color: rgb(154, 92, 0);\n"
" }"));
        label_4 = new QLabel(AddPlans);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 130, 111, 31));
        label_4->setFont(font);
        pushButton_2 = new QPushButton(AddPlans);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 180, 131, 31));
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: rgb(215, 132, 0);\n"
"border-style: solid;\n"
"border-radius: 7px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: black;\n"
"color: rgb(215, 132, 0);\n"
"}\n"
""));
        textEdit = new QTextEdit(AddPlans);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(150, 130, 171, 31));
        textEdit->setFont(font);
        textEdit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-style: solid;\n"
"border-width:2px;\n"
"border-color: rgb(215, 132, 0);"));
        textEdit->setLineWrapColumnOrWidth(0);
        textEdit->setReadOnly(false);
        dateTimeEdit = new QDateTimeEdit(AddPlans);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(150, 50, 171, 31));
        dateTimeEdit->setFont(font);
        dateTimeEdit->setStyleSheet(QLatin1String("QDateTimeEdit {\n"
"background-color: rgb(255, 255, 255);\n"
"border-style: solid;\n"
"border-width:2px;\n"
"border-color: rgb(215, 132, 0);\n"
"}\n"
"QDateTimeEdit::up-button {\n"
"background-color: rgb(215, 132, 0);\n"
"}\n"
"QDateTimeEdit::up-arrow {\n"
"image: url(:/images/up.png);\n"
"}\n"
"QDateTimeEdit::down-button {\n"
"background-color: rgb(215, 132, 0);\n"
"}\n"
"QDateTimeEdit::down-arrow {\n"
"image: url(:/images/down.png);\n"
"}\n"
"QDateTimeEdit::up-button:pressed {\n"
"background-color: rgb(154, 92, 0);\n"
" }\n"
"QDateTimeEdit::down-button:pressed {\n"
"background-color: rgb(154, 92, 0);\n"
" }"));
        dateTimeEdit_2 = new QDateTimeEdit(AddPlans);
        dateTimeEdit_2->setObjectName(QStringLiteral("dateTimeEdit_2"));
        dateTimeEdit_2->setGeometry(QRect(150, 90, 171, 31));
        dateTimeEdit_2->setFont(font);
        dateTimeEdit_2->setStyleSheet(QLatin1String("QDateTimeEdit {\n"
"background-color: rgb(255, 255, 255);\n"
"border-style: solid;\n"
"border-width:2px;\n"
"border-color: rgb(215, 132, 0);\n"
"}\n"
"QDateTimeEdit::up-button {\n"
"background-color: rgb(215, 132, 0);\n"
"}\n"
"QDateTimeEdit::up-arrow {\n"
"image: url(:/images/up.png);\n"
"}\n"
"QDateTimeEdit::down-button {\n"
"background-color: rgb(215, 132, 0);\n"
"}\n"
"QDateTimeEdit::down-arrow {\n"
"image: url(:/images/down.png);\n"
"}\n"
"QDateTimeEdit::up-button:pressed {\n"
"background-color: rgb(154, 92, 0);\n"
" }\n"
"QDateTimeEdit::down-button:pressed {\n"
"background-color: rgb(154, 92, 0);\n"
" }"));

        retranslateUi(AddPlans);

        QMetaObject::connectSlotsByName(AddPlans);
    } // setupUi

    void retranslateUi(QDialog *AddPlans)
    {
        AddPlans->setWindowTitle(QApplication::translate("AddPlans", "TimeTask - \320\224\320\276\320\264\320\260\321\202\320\270 \320\277\320\273\320\260\320\275", nullptr));
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
