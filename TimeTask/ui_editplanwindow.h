/********************************************************************************
** Form generated from reading UI file 'editplanwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPLANWINDOW_H
#define UI_EDITPLANWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_EditPlanWindow
{
public:
    QLabel *label_6;
    QPushButton *pushButton;
    QTimeEdit *timeEdit;
    QTimeEdit *timeEdit_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_7;

    void setupUi(QDialog *EditPlanWindow)
    {
        if (EditPlanWindow->objectName().isEmpty())
            EditPlanWindow->setObjectName(QStringLiteral("EditPlanWindow"));
        EditPlanWindow->resize(301, 151);
        label_6 = new QLabel(EditPlanWindow);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 10, 131, 21));
        pushButton = new QPushButton(EditPlanWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 110, 121, 31));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        timeEdit = new QTimeEdit(EditPlanWindow);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(140, 10, 151, 22));
        timeEdit_2 = new QTimeEdit(EditPlanWindow);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));
        timeEdit_2->setGeometry(QRect(140, 40, 151, 22));
        lineEdit = new QLineEdit(EditPlanWindow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 70, 151, 21));
        pushButton_2 = new QPushButton(EditPlanWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 110, 121, 31));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(EditPlanWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 70, 131, 21));
        label_7 = new QLabel(EditPlanWindow);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 40, 131, 21));

        retranslateUi(EditPlanWindow);

        QMetaObject::connectSlotsByName(EditPlanWindow);
    } // setupUi

    void retranslateUi(QDialog *EditPlanWindow)
    {
        EditPlanWindow->setWindowTitle(QApplication::translate("EditPlanWindow", "Dialog", nullptr));
        label_6->setText(QApplication::translate("EditPlanWindow", "\320\222\321\200\320\265\320\274\321\217 \320\275\320\260\321\207\320\260\320\273\320\260:", nullptr));
        pushButton->setText(QApplication::translate("EditPlanWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushButton_2->setText(QApplication::translate("EditPlanWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        label->setText(QApplication::translate("EditPlanWindow", "\320\237\321\203\320\275\320\272\321\202 \320\274\320\265\321\200\320\276\320\277\321\200\320\270\321\217\321\202\320\270\321\217:", nullptr));
        label_7->setText(QApplication::translate("EditPlanWindow", "\320\222\321\200\320\265\320\274\321\217 \320\276\320\272\320\276\320\275\321\207\320\260\320\275\320\270\321\217:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditPlanWindow: public Ui_EditPlanWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPLANWINDOW_H
