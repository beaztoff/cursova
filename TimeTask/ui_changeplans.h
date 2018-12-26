/********************************************************************************
** Form generated from reading UI file 'changeplans.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPLANS_H
#define UI_CHANGEPLANS_H

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

class Ui_ChangePlans
{
public:
    QTableView *tableView;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ChangePlans)
    {
        if (ChangePlans->objectName().isEmpty())
            ChangePlans->setObjectName(QStringLiteral("ChangePlans"));
        ChangePlans->resize(380, 221);
        ChangePlans->setMinimumSize(QSize(380, 221));
        ChangePlans->setMaximumSize(QSize(380, 221));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/timetask-ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ChangePlans->setWindowIcon(icon);
        ChangePlans->setStyleSheet(QStringLiteral("background-color: rgb(250, 255, 188);"));
        tableView = new QTableView(ChangePlans);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 50, 361, 111));
        tableView->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-style: solid;\n"
"border-width:2px;\n"
"border-color: rgb(215, 132, 0);"));
        tableView->setSortingEnabled(true);
        tableView->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        label = new QLabel(ChangePlans);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 101, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        comboBox = new QComboBox(ChangePlans);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(150, 10, 221, 31));
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
        pushButton = new QPushButton(ChangePlans);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 180, 121, 31));
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
        pushButton_2 = new QPushButton(ChangePlans);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 180, 121, 31));
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

        retranslateUi(ChangePlans);

        QMetaObject::connectSlotsByName(ChangePlans);
    } // setupUi

    void retranslateUi(QDialog *ChangePlans)
    {
        ChangePlans->setWindowTitle(QApplication::translate("ChangePlans", "TimeTask - \320\240\320\265\320\264\320\260\320\263\321\203\320\262\320\260\320\275\320\275\321\217 \320\277\320\273\320\260\320\275\321\203", nullptr));
        label->setText(QApplication::translate("ChangePlans", "\320\222\320\270\320\261\321\226\321\200 \320\267\320\260\321\205\320\276\320\264\321\203:", nullptr));
        pushButton->setText(QApplication::translate("ChangePlans", "\320\222\321\226\320\264\321\200\320\265\320\260\320\263\321\203\320\262\320\260\321\202\320\270", nullptr));
        pushButton_2->setText(QApplication::translate("ChangePlans", "\320\227\320\260\320\272\321\200\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangePlans: public Ui_ChangePlans {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPLANS_H
