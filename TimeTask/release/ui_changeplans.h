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
        ChangePlans->resize(594, 258);
        ChangePlans->setMinimumSize(QSize(594, 258));
        ChangePlans->setMaximumSize(QSize(594, 258));
        tableView = new QTableView(ChangePlans);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 80, 551, 111));
        label = new QLabel(ChangePlans);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 10, 301, 16));
        comboBox = new QComboBox(ChangePlans);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(190, 40, 181, 22));
        pushButton = new QPushButton(ChangePlans);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 210, 81, 23));
        pushButton_2 = new QPushButton(ChangePlans);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 210, 75, 23));

        retranslateUi(ChangePlans);

        QMetaObject::connectSlotsByName(ChangePlans);
    } // setupUi

    void retranslateUi(QDialog *ChangePlans)
    {
        ChangePlans->setWindowTitle(QApplication::translate("ChangePlans", "\320\240\320\265\320\264\320\260\320\263\321\203\320\262\320\260\320\275\320\275\321\217 \320\277\320\273\320\260\320\275\321\203", nullptr));
        label->setText(QApplication::translate("ChangePlans", "\320\222\320\270\320\261\320\265\321\200\321\226\321\202\321\214 \320\267\320\260\321\205\321\226\320\264 \320\264\320\273\321\217 \321\200\320\265\320\264\320\260\320\263\321\203\320\262\320\260\320\275\320\275\321\217 \320\277\320\273\320\260\320\275\321\226\320\262:", nullptr));
        pushButton->setText(QApplication::translate("ChangePlans", "\320\222\321\226\320\264\321\200\320\265\320\260\320\263\321\203\320\262\320\260\321\202\320\270", nullptr));
        pushButton_2->setText(QApplication::translate("ChangePlans", "\320\227\320\260\320\272\321\200\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangePlans: public Ui_ChangePlans {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPLANS_H
