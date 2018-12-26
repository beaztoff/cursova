/********************************************************************************
** Form generated from reading UI file 'deleteplan.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEPLAN_H
#define UI_DELETEPLAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_deletePlan
{
public:
    QLabel *label;
    QComboBox *comboBox;
    QTableView *tableView;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *deletePlan)
    {
        if (deletePlan->objectName().isEmpty())
            deletePlan->setObjectName(QStringLiteral("deletePlan"));
        deletePlan->resize(451, 261);
        deletePlan->setMinimumSize(QSize(451, 261));
        deletePlan->setMaximumSize(QSize(451, 261));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        deletePlan->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/timetask-ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        deletePlan->setWindowIcon(icon);
        deletePlan->setStyleSheet(QStringLiteral("background-color: rgb(250, 255, 188);"));
        label = new QLabel(deletePlan);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 121, 31));
        label->setFont(font);
        comboBox = new QComboBox(deletePlan);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(140, 10, 301, 31));
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
        tableView = new QTableView(deletePlan);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 50, 431, 111));
        tableView->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-style: solid;\n"
"border-width:2px;\n"
"border-color: rgb(215, 132, 0);"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSortingEnabled(true);
        tableView->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        lineEdit = new QLineEdit(deletePlan);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 170, 171, 31));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-style: solid;\n"
"border-width:2px;\n"
"border-color: rgb(215, 132, 0);"));
        label_2 = new QLabel(deletePlan);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 170, 121, 31));
        label_2->setFont(font);
        pushButton = new QPushButton(deletePlan);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 170, 121, 31));
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
        pushButton_2 = new QPushButton(deletePlan);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 220, 121, 31));
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

        retranslateUi(deletePlan);

        QMetaObject::connectSlotsByName(deletePlan);
    } // setupUi

    void retranslateUi(QDialog *deletePlan)
    {
        deletePlan->setWindowTitle(QApplication::translate("deletePlan", "TimeTask - \320\222\320\270\320\264\320\260\320\273\320\265\320\275\320\275\321\217 \320\277\320\273\320\260\320\275\321\226\320\262", nullptr));
        label->setText(QApplication::translate("deletePlan", "\320\222\320\270\320\261\320\265\321\200\321\226\321\202\321\214 \320\267\320\260\321\205\321\226\320\264:", nullptr));
        label_2->setText(QApplication::translate("deletePlan", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 ID \320\277\320\273\320\260\320\275\321\203:", nullptr));
        pushButton->setText(QApplication::translate("deletePlan", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270", nullptr));
        pushButton_2->setText(QApplication::translate("deletePlan", "\320\227\320\260\320\272\321\200\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deletePlan: public Ui_deletePlan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEPLAN_H
