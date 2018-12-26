/********************************************************************************
** Form generated from reading UI file 'changewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEWINDOW_H
#define UI_CHANGEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_changeWindow
{
public:
    QLabel *label;
    QComboBox *comboBox;
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *changeWindow)
    {
        if (changeWindow->objectName().isEmpty())
            changeWindow->setObjectName(QStringLiteral("changeWindow"));
        changeWindow->resize(542, 162);
        changeWindow->setMinimumSize(QSize(542, 162));
        changeWindow->setMaximumSize(QSize(542, 162));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/timetask-ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        changeWindow->setWindowIcon(icon);
        changeWindow->setStyleSheet(QStringLiteral("background-color: rgb(250, 255, 188);"));
        label = new QLabel(changeWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 171, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        comboBox = new QComboBox(changeWindow);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(280, 10, 251, 31));
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
        tableView = new QTableView(changeWindow);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 50, 521, 51));
        tableView->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-style: solid;\n"
"border-width:2px;\n"
"border-color: rgb(215, 132, 0);"));
        tableView->setSortingEnabled(true);
        tableView->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        pushButton = new QPushButton(changeWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 120, 151, 31));
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
        pushButton_2 = new QPushButton(changeWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(410, 120, 121, 31));
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

        retranslateUi(changeWindow);

        QMetaObject::connectSlotsByName(changeWindow);
    } // setupUi

    void retranslateUi(QDialog *changeWindow)
    {
        changeWindow->setWindowTitle(QApplication::translate("changeWindow", "TimeTask - \320\240\320\265\320\264\320\260\320\263\321\203\320\262\320\260\320\275\320\275\321\217 \320\267\320\260\321\205\320\276\320\264\321\203", nullptr));
        label->setText(QApplication::translate("changeWindow", "\320\222\320\270\320\261\320\265\321\200\321\226\321\202\321\214 \320\267\320\260\321\205\321\226\320\264:", nullptr));
        pushButton->setText(QApplication::translate("changeWindow", "\320\222\321\226\320\264\321\200\320\265\320\260\320\263\321\203\320\262\320\260\321\202\320\270", nullptr));
        pushButton_2->setText(QApplication::translate("changeWindow", "\320\227\320\260\320\272\321\200\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changeWindow: public Ui_changeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEWINDOW_H
