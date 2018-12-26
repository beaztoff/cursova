/********************************************************************************
** Form generated from reading UI file 'showwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWWINDOW_H
#define UI_SHOWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ShowWindow
{
public:
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QDateEdit *dateEdit;
    QPushButton *pushButton_4;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QComboBox *comboBox;
    QLabel *label;
    QFrame *line;
    QGroupBox *groupBox_2;
    QTableView *tableView;
    QLabel *label_2;
    QTableView *tableView_2;
    QLabel *label_4;

    void setupUi(QDialog *ShowWindow)
    {
        if (ShowWindow->objectName().isEmpty())
            ShowWindow->setObjectName(QStringLiteral("ShowWindow"));
        ShowWindow->resize(691, 331);
        ShowWindow->setMinimumSize(QSize(691, 331));
        ShowWindow->setMaximumSize(QSize(691, 331));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/timetask-ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ShowWindow->setWindowIcon(icon);
        ShowWindow->setStyleSheet(QStringLiteral("background-color: rgb(250, 255, 188);"));
        pushButton = new QPushButton(ShowWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(560, 290, 121, 31));
        pushButton->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
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
        groupBox = new QGroupBox(ShowWindow);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 301, 261));
        groupBox->setFont(font);
        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(180, 30, 101, 31));
        dateEdit->setFont(font);
        dateEdit->setStyleSheet(QLatin1String("QDateEdit {\n"
"background-color: rgb(255, 255, 255);\n"
"border-style: solid;\n"
"border-width:2px;\n"
"border-color: rgb(215, 132, 0);\n"
"}\n"
"QDateEdit::up-button {\n"
"background-color: rgb(215, 132, 0);\n"
"}\n"
"QDateEdit::up-arrow {\n"
"image: url(:/images/up.png);\n"
"}\n"
"QDateEdit::down-button {\n"
"background-color: rgb(215, 132, 0);\n"
"}\n"
"QDateEdit::down-arrow {\n"
"image: url(:/images/down.png);\n"
"}\n"
"QDateEdit::up-button:pressed {\n"
"background-color: rgb(154, 92, 0);\n"
" }\n"
"QDateEdit::down-button:pressed {\n"
"background-color: rgb(154, 92, 0);\n"
" }"));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 70, 261, 31));
        pushButton_4->setFont(font);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: rgb(215, 132, 0);\n"
"border-style: solid;\n"
"border-radius: 7px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: black;\n"
"color: rgb(215, 132, 0);\n"
"}\n"
""));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 30, 151, 31));
        label_3->setFont(font);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 210, 261, 31));
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
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(180, 170, 101, 31));
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
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 170, 101, 31));
        label->setFont(font);
        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 130, 261, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        groupBox_2 = new QGroupBox(ShowWindow);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(320, 10, 361, 261));
        groupBox_2->setFont(font);
        tableView = new QTableView(groupBox_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 40, 341, 81));
        QFont font1;
        font1.setPointSize(10);
        tableView->setFont(font1);
        tableView->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-style: solid;\n"
"border-width:2px;\n"
"border-color: rgb(215, 132, 0);"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSortingEnabled(true);
        tableView->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 20, 101, 20));
        label_2->setFont(font);
        tableView_2 = new QTableView(groupBox_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(10, 150, 341, 101));
        tableView_2->setFont(font1);
        tableView_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-style: solid;\n"
"border-width:2px;\n"
"border-color: rgb(215, 132, 0);"));
        tableView_2->setLineWidth(1);
        tableView_2->setMidLineWidth(0);
        tableView_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_2->setAlternatingRowColors(false);
        tableView_2->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_2->setSortingEnabled(true);
        tableView_2->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 130, 101, 16));
        label_4->setFont(font);

        retranslateUi(ShowWindow);

        QMetaObject::connectSlotsByName(ShowWindow);
    } // setupUi

    void retranslateUi(QDialog *ShowWindow)
    {
        ShowWindow->setWindowTitle(QApplication::translate("ShowWindow", "TimeTask - \320\237\321\200\320\276 \320\267\320\260\321\205\320\276\320\264\320\270", nullptr));
        pushButton->setText(QApplication::translate("ShowWindow", "\320\227\320\260\320\272\321\200\320\270\321\202\320\270", nullptr));
        groupBox->setTitle(QApplication::translate("ShowWindow", "\320\222\320\270\320\261\321\226\321\200 \320\267\320\260\321\205\320\276\320\264\321\203", nullptr));
        pushButton_4->setText(QApplication::translate("ShowWindow", "OK", nullptr));
        label_3->setText(QApplication::translate("ShowWindow", "\320\224\320\260\321\202\320\260 \320\277\320\276\321\207\320\260\321\202\320\272\321\203 \320\267\320\260\321\205\320\276\320\264\321\203:", nullptr));
        pushButton_2->setText(QApplication::translate("ShowWindow", "\320\222\320\270\320\261\321\200\320\260\321\202\320\270 \320\267\320\260\321\205\321\226\320\264", nullptr));
        label->setText(QApplication::translate("ShowWindow", "\320\222\320\270\320\261\320\265\321\200\321\226\321\202\321\214 \320\267\320\260\321\205\321\226\320\264:", nullptr));
        groupBox_2->setTitle(QApplication::translate("ShowWindow", "\320\206\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217 \320\277\321\200\320\276 \320\267\320\260\321\205\321\226\320\264", nullptr));
        label_2->setText(QApplication::translate("ShowWindow", "\320\237\321\200\320\276 \320\267\320\260\321\205\321\226\320\264:", nullptr));
        label_4->setText(QApplication::translate("ShowWindow", "\320\237\320\273\320\260\320\275 \320\267\320\260\321\205\320\276\320\264\321\203:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowWindow: public Ui_ShowWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWWINDOW_H
