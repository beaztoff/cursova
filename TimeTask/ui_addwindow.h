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
        AddWindow->resize(351, 301);
        AddWindow->setMinimumSize(QSize(351, 301));
        AddWindow->setMaximumSize(QSize(351, 301));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/timetask-ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        AddWindow->setWindowIcon(icon);
        AddWindow->setStyleSheet(QStringLiteral("background-color: rgb(250, 255, 188);"));
        label = new QLabel(AddWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 171, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(AddWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 171, 31));
        label_2->setFont(font);
        label_3 = new QLabel(AddWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 90, 171, 31));
        label_3->setFont(font);
        label_4 = new QLabel(AddWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 170, 171, 31));
        label_4->setFont(font);
        label_5 = new QLabel(AddWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 210, 171, 31));
        label_5->setFont(font);
        lineEdit = new QLineEdit(AddWindow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 10, 151, 31));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-style: solid;\n"
"border-width:2px;\n"
"border-color: rgb(215, 132, 0);"));
        lineEdit_2 = new QLineEdit(AddWindow);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 50, 151, 31));
        lineEdit_2->setFont(font);
        lineEdit_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-style: solid;\n"
"border-width:2px;\n"
"border-color: rgb(215, 132, 0);"));
        lineEdit_3 = new QLineEdit(AddWindow);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(190, 90, 151, 31));
        lineEdit_3->setFont(font);
        lineEdit_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-style: solid;\n"
"border-width:2px;\n"
"border-color: rgb(215, 132, 0);"));
        pushButton = new QPushButton(AddWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 260, 121, 31));
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
        pushButton_2 = new QPushButton(AddWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 260, 121, 31));
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
        label_6 = new QLabel(AddWindow);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 130, 171, 31));
        label_6->setFont(font);
        lineEdit_4 = new QLineEdit(AddWindow);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(190, 130, 151, 31));
        lineEdit_4->setFont(font);
        lineEdit_4->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-style: solid;\n"
"border-width:2px;\n"
"border-color: rgb(215, 132, 0);"));
        dateTimeEdit = new QDateTimeEdit(AddWindow);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(190, 170, 151, 31));
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
        dateTimeEdit_2 = new QDateTimeEdit(AddWindow);
        dateTimeEdit_2->setObjectName(QStringLiteral("dateTimeEdit_2"));
        dateTimeEdit_2->setGeometry(QRect(190, 210, 151, 31));
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

        retranslateUi(AddWindow);

        QMetaObject::connectSlotsByName(AddWindow);
    } // setupUi

    void retranslateUi(QDialog *AddWindow)
    {
        AddWindow->setWindowTitle(QApplication::translate("AddWindow", "TimeTask - \320\224\320\276\320\264\320\260\321\202\320\270 \320\267\320\260\321\205\321\226\320\264", nullptr));
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
