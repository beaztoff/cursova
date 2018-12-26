/********************************************************************************
** Form generated from reading UI file 'editwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITWINDOW_H
#define UI_EDITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_EditWindow
{
public:
    QLabel *label;
    QDateEdit *dateEdit_2;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QLabel *label_7;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit_2;
    QLabel *label_3;
    QTimeEdit *timeEdit;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_2;
    QListView *listView;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *EditWindow)
    {
        if (EditWindow->objectName().isEmpty())
            EditWindow->setObjectName(QStringLiteral("EditWindow"));
        EditWindow->resize(631, 341);
        label = new QLabel(EditWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 30, 131, 21));
        dateEdit_2 = new QDateEdit(EditWindow);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(460, 150, 151, 22));
        label_4 = new QLabel(EditWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(330, 120, 131, 21));
        label_6 = new QLabel(EditWindow);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(330, 180, 131, 21));
        lineEdit = new QLineEdit(EditWindow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(460, 30, 151, 21));
        label_5 = new QLabel(EditWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(330, 150, 131, 21));
        label_7 = new QLabel(EditWindow);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(330, 210, 131, 21));
        dateEdit = new QDateEdit(EditWindow);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(460, 120, 151, 22));
        timeEdit_2 = new QTimeEdit(EditWindow);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));
        timeEdit_2->setGeometry(QRect(460, 210, 151, 22));
        label_3 = new QLabel(EditWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(330, 90, 131, 21));
        timeEdit = new QTimeEdit(EditWindow);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(460, 180, 151, 22));
        lineEdit_3 = new QLineEdit(EditWindow);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(460, 90, 151, 21));
        label_2 = new QLabel(EditWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 60, 131, 21));
        lineEdit_2 = new QLineEdit(EditWindow);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(460, 60, 151, 21));
        groupBox = new QGroupBox(EditWindow);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(320, 10, 301, 271));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 230, 281, 31));
        groupBox_2 = new QGroupBox(EditWindow);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 301, 271));
        listView = new QListView(groupBox_2);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 20, 281, 241));
        pushButton_2 = new QPushButton(EditWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 300, 121, 31));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton = new QPushButton(EditWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(500, 300, 121, 31));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(EditWindow);

        QMetaObject::connectSlotsByName(EditWindow);
    } // setupUi

    void retranslateUi(QDialog *EditWindow)
    {
        EditWindow->setWindowTitle(QApplication::translate("EditWindow", "TimeTask - \320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label->setText(QApplication::translate("EditWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\274\320\265\321\200\320\276\320\277\321\200\320\270\321\217\321\202\320\270\321\217:", nullptr));
        label_4->setText(QApplication::translate("EditWindow", "\320\224\320\260\321\202\320\260 \320\275\320\260\321\207\320\260\320\273\320\260:", nullptr));
        label_6->setText(QApplication::translate("EditWindow", "\320\222\321\200\320\265\320\274\321\217 \320\275\320\260\321\207\320\260\320\273\320\260:", nullptr));
        label_5->setText(QApplication::translate("EditWindow", "\320\224\320\260\321\202\320\260 \320\276\320\272\320\276\320\275\321\207\320\260\320\275\320\270\321\217:", nullptr));
        label_7->setText(QApplication::translate("EditWindow", "\320\222\321\200\320\265\320\274\321\217 \320\276\320\272\320\276\320\275\321\207\320\260\320\275\320\270\321\217:", nullptr));
        label_3->setText(QApplication::translate("EditWindow", "\320\220\320\264\321\200\320\265\321\201\321\201 \320\267\320\260\320\262\320\265\320\264\320\265\320\275\320\270\321\217:", nullptr));
        label_2->setText(QApplication::translate("EditWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\267\320\260\320\262\320\265\320\264\320\265\320\275\320\270\321\217:", nullptr));
        groupBox->setTitle(QApplication::translate("EditWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        pushButton_3->setText(QApplication::translate("EditWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\273\320\260\320\275 \320\274\320\265\321\200\320\276\320\277\321\200\320\270\321\217\321\202\320\270\321\217...(planwindow)", nullptr));
        groupBox_2->setTitle(QApplication::translate("EditWindow", "\320\222\321\213\320\261\320\276\321\200 \320\274\320\265\321\200\320\276\320\277\321\200\320\270\321\217\321\202\320\270\321\217", nullptr));
        pushButton_2->setText(QApplication::translate("EditWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        pushButton->setText(QApplication::translate("EditWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditWindow: public Ui_EditWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITWINDOW_H
