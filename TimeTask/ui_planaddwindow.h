/********************************************************************************
** Form generated from reading UI file 'planaddwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANADDWINDOW_H
#define UI_PLANADDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_PlanAddWindow
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QTableWidget *tableWidget;

    void setupUi(QDialog *PlanAddWindow)
    {
        if (PlanAddWindow->objectName().isEmpty())
            PlanAddWindow->setObjectName(QStringLiteral("PlanAddWindow"));
        PlanAddWindow->resize(281, 361);
        pushButton_2 = new QPushButton(PlanAddWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 320, 121, 31));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton = new QPushButton(PlanAddWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 190, 261, 31));
        pushButton_3 = new QPushButton(PlanAddWindow);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 320, 121, 31));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5 = new QPushButton(PlanAddWindow);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 270, 261, 31));
        label_2 = new QLabel(PlanAddWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 261, 21));
        pushButton_4 = new QPushButton(PlanAddWindow);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 230, 261, 31));
        tableWidget = new QTableWidget(PlanAddWindow);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 4)
            tableWidget->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 30, 261, 151));

        retranslateUi(PlanAddWindow);

        QMetaObject::connectSlotsByName(PlanAddWindow);
    } // setupUi

    void retranslateUi(QDialog *PlanAddWindow)
    {
        PlanAddWindow->setWindowTitle(QApplication::translate("PlanAddWindow", "Dialog", nullptr));
        pushButton_2->setText(QApplication::translate("PlanAddWindow", "\320\236\320\272", nullptr));
        pushButton->setText(QApplication::translate("PlanAddWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\321\203\320\275\320\272\321\202 \320\277\320\273\320\260\320\275\320\260...(addplanwindow)", nullptr));
        pushButton_3->setText(QApplication::translate("PlanAddWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        pushButton_5->setText(QApplication::translate("PlanAddWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\277\321\203\320\275\320\272\321\202 \320\277\320\273\320\260\320\275\320\260", nullptr));
        label_2->setText(QApplication::translate("PlanAddWindow", "\320\237\320\273\320\260\320\275 \320\274\320\265\321\200\320\276\320\277\321\200\320\270\321\217\321\202\320\270\321\217:", nullptr));
        pushButton_4->setText(QApplication::translate("PlanAddWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\321\203\320\275\320\272\321\202 \320\277\320\273\320\260\320\275\320\260...(editplanwindow)", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PlanAddWindow", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PlanAddWindow", "\320\237\321\203\320\275\320\272\321\202 \320\274\320\265\321\200\320\276\320\277\321\200\320\270\321\217\321\202\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("PlanAddWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("PlanAddWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("PlanAddWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("PlanAddWindow", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlanAddWindow: public Ui_PlanAddWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANADDWINDOW_H
