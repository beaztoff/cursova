/********************************************************************************
** Form generated from reading UI file 'planwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANWINDOW_H
#define UI_PLANWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_PlanWindow
{
public:
    QListView *listView;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *PlanWindow)
    {
        if (PlanWindow->objectName().isEmpty())
            PlanWindow->setObjectName(QStringLiteral("PlanWindow"));
        PlanWindow->resize(481, 361);
        listView = new QListView(PlanWindow);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 30, 181, 271));
        pushButton_2 = new QPushButton(PlanWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 320, 121, 31));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3 = new QPushButton(PlanWindow);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(220, 320, 121, 31));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(PlanWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 181, 21));
        tableWidget = new QTableWidget(PlanWindow);
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
        tableWidget->setGeometry(QRect(210, 30, 261, 151));
        label_2 = new QLabel(PlanWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 10, 261, 21));
        pushButton = new QPushButton(PlanWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 190, 261, 31));
        pushButton_4 = new QPushButton(PlanWindow);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(210, 230, 261, 31));
        pushButton_5 = new QPushButton(PlanWindow);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(210, 270, 261, 31));

        retranslateUi(PlanWindow);

        QMetaObject::connectSlotsByName(PlanWindow);
    } // setupUi

    void retranslateUi(QDialog *PlanWindow)
    {
        PlanWindow->setWindowTitle(QApplication::translate("PlanWindow", "Dialog", nullptr));
        pushButton_2->setText(QApplication::translate("PlanWindow", "\320\236\320\272", nullptr));
        pushButton_3->setText(QApplication::translate("PlanWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        label->setText(QApplication::translate("PlanWindow", "\320\222\321\213\320\261\320\276\321\200 \320\274\320\265\321\200\320\276\320\277\321\200\320\270\321\217\321\202\320\270\321\217:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PlanWindow", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PlanWindow", "\320\237\321\203\320\275\320\272\321\202 \320\274\320\265\321\200\320\276\320\277\321\200\320\270\321\217\321\202\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("PlanWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("PlanWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("PlanWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("PlanWindow", "...", nullptr));
        label_2->setText(QApplication::translate("PlanWindow", "\320\237\320\273\320\260\320\275 \320\274\320\265\321\200\320\276\320\277\321\200\320\270\321\217\321\202\320\270\321\217:", nullptr));
        pushButton->setText(QApplication::translate("PlanWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\321\203\320\275\320\272\321\202 \320\277\320\273\320\260\320\275\320\260...(addplanwindow)", nullptr));
        pushButton_4->setText(QApplication::translate("PlanWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\321\203\320\275\320\272\321\202 \320\277\320\273\320\260\320\275\320\260...(editplanwindow)", nullptr));
        pushButton_5->setText(QApplication::translate("PlanWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\277\321\203\320\275\320\272\321\202 \320\277\320\273\320\260\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlanWindow: public Ui_PlanWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANWINDOW_H
