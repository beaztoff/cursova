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
        changeWindow->resize(571, 291);
        changeWindow->setMinimumSize(QSize(511, 291));
        changeWindow->setMaximumSize(QSize(711, 291));
        label = new QLabel(changeWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 0, 301, 16));
        comboBox = new QComboBox(changeWindow);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(180, 30, 181, 22));
        tableView = new QTableView(changeWindow);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 80, 541, 141));
        pushButton = new QPushButton(changeWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 240, 91, 31));
        pushButton_2 = new QPushButton(changeWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 240, 75, 31));

        retranslateUi(changeWindow);

        QMetaObject::connectSlotsByName(changeWindow);
    } // setupUi

    void retranslateUi(QDialog *changeWindow)
    {
        changeWindow->setWindowTitle(QApplication::translate("changeWindow", "\320\240\320\265\320\264\320\260\320\263\321\203\320\262\320\260\320\275\320\275\321\217 \320\267\320\260\321\205\320\276\320\264\321\203", nullptr));
        label->setText(QApplication::translate("changeWindow", "\320\222\320\270\320\261\320\265\321\200\321\226\321\202\321\214 \320\267\320\260\321\205\321\226\320\264 \320\264\320\273\321\217 \321\200\320\265\320\264\320\260\320\263\321\203\320\262\320\260\320\275\320\275\321\217:", nullptr));
        pushButton->setText(QApplication::translate("changeWindow", "\320\222\321\226\320\264\321\200\320\265\320\260\320\263\321\203\320\262\320\260\321\202\320\270", nullptr));
        pushButton_2->setText(QApplication::translate("changeWindow", "\320\227\320\260\320\272\321\200\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changeWindow: public Ui_changeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEWINDOW_H
