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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ShowWindow
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QTableView *tableView;
    QComboBox *comboBox;
    QDateEdit *dateEdit;
    QLabel *label_3;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QTableView *tableView_2;

    void setupUi(QDialog *ShowWindow)
    {
        if (ShowWindow->objectName().isEmpty())
            ShowWindow->setObjectName(QStringLiteral("ShowWindow"));
        ShowWindow->resize(857, 256);
        ShowWindow->setMinimumSize(QSize(746, 240));
        ShowWindow->setMaximumSize(QSize(1920, 256));
        pushButton = new QPushButton(ShowWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 200, 281, 31));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2 = new QPushButton(ShowWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 140, 281, 41));
        label = new QLabel(ShowWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(22, 80, 301, 21));
        label_2 = new QLabel(ShowWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(320, 0, 311, 20));
        tableView = new QTableView(ShowWindow);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(320, 20, 521, 71));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        comboBox = new QComboBox(ShowWindow);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(20, 110, 281, 22));
        dateEdit = new QDateEdit(ShowWindow);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(20, 40, 101, 31));
        label_3 = new QLabel(ShowWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 13, 261, 20));
        pushButton_4 = new QPushButton(ShowWindow);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(140, 40, 75, 31));
        label_4 = new QLabel(ShowWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(320, 100, 101, 16));
        tableView_2 = new QTableView(ShowWindow);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(320, 120, 521, 111));
        tableView_2->setLineWidth(1);
        tableView_2->setMidLineWidth(0);
        tableView_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_2->setAlternatingRowColors(false);
        tableView_2->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_2->setSortingEnabled(false);

        retranslateUi(ShowWindow);

        QMetaObject::connectSlotsByName(ShowWindow);
    } // setupUi

    void retranslateUi(QDialog *ShowWindow)
    {
        ShowWindow->setWindowTitle(QApplication::translate("ShowWindow", "\320\237\321\200\320\276 \320\267\320\260\321\205\320\276\320\264\320\270", nullptr));
        pushButton->setText(QApplication::translate("ShowWindow", "\320\227\320\260\320\272\321\200\320\270\321\202\320\270", nullptr));
        pushButton_2->setText(QApplication::translate("ShowWindow", "\320\222\320\270\320\261\321\200\320\260\321\202\320\270 \320\267\320\260\321\205\321\226\320\264", nullptr));
        label->setText(QApplication::translate("ShowWindow", "\320\222\320\270\320\261\320\265\321\200\321\226\321\202\321\214 \320\267\320\260\321\205\321\226\320\264:", nullptr));
        label_2->setText(QApplication::translate("ShowWindow", "\320\237\321\200\320\276 \320\267\320\260\321\205\321\226\320\264:", nullptr));
        label_3->setText(QApplication::translate("ShowWindow", "\320\222\320\270\320\261\320\265\321\200\321\226\321\202\321\214 \320\264\320\260\321\202\321\203 \320\277\320\276\321\207\320\260\321\202\320\272\321\203 \320\267\320\260\321\205\320\276\320\264\321\203:", nullptr));
        pushButton_4->setText(QApplication::translate("ShowWindow", "OK", nullptr));
        label_4->setText(QApplication::translate("ShowWindow", "\320\237\320\273\320\260\320\275 \320\267\320\260\321\205\320\276\320\264\321\203:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowWindow: public Ui_ShowWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWWINDOW_H
