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
        deletePlan->resize(650, 290);
        deletePlan->setMinimumSize(QSize(560, 290));
        deletePlan->setMaximumSize(QSize(650, 290));
        label = new QLabel(deletePlan);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 10, 301, 16));
        comboBox = new QComboBox(deletePlan);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(220, 40, 181, 22));
        tableView = new QTableView(deletePlan);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 80, 621, 141));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lineEdit = new QLineEdit(deletePlan);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(50, 250, 113, 20));
        label_2 = new QLabel(deletePlan);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 250, 47, 21));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        pushButton = new QPushButton(deletePlan);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 250, 75, 23));
        pushButton_2 = new QPushButton(deletePlan);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(560, 250, 75, 21));

        retranslateUi(deletePlan);

        QMetaObject::connectSlotsByName(deletePlan);
    } // setupUi

    void retranslateUi(QDialog *deletePlan)
    {
        deletePlan->setWindowTitle(QApplication::translate("deletePlan", "\320\222\320\270\320\264\320\260\320\273\320\265\320\275\320\275\321\217 \320\277\320\273\320\260\320\275\321\226\320\262", nullptr));
        label->setText(QApplication::translate("deletePlan", "\320\222\320\270\320\261\320\265\321\200\321\226\321\202\321\214 \320\267\320\260\321\205\321\226\320\264 \320\264\320\273\321\217 \320\262\320\270\320\264\320\260\320\273\320\265\320\275\320\275\321\217 \320\277\320\273\320\260\320\275\321\226\320\262:", nullptr));
        label_2->setText(QApplication::translate("deletePlan", "ID:", nullptr));
        pushButton->setText(QApplication::translate("deletePlan", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270", nullptr));
        pushButton_2->setText(QApplication::translate("deletePlan", "\320\227\320\260\320\272\321\200\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deletePlan: public Ui_deletePlan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEPLAN_H
