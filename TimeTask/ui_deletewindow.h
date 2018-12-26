/********************************************************************************
** Form generated from reading UI file 'deletewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEWINDOW_H
#define UI_DELETEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DeleteWindow
{
public:
    QPushButton *pushButton_2;
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *DeleteWindow)
    {
        if (DeleteWindow->objectName().isEmpty())
            DeleteWindow->setObjectName(QStringLiteral("DeleteWindow"));
        DeleteWindow->resize(282, 101);
        DeleteWindow->setMinimumSize(QSize(282, 101));
        DeleteWindow->setMaximumSize(QSize(282, 101));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/timetask-ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        DeleteWindow->setWindowIcon(icon);
        DeleteWindow->setStyleSheet(QStringLiteral("background-color: rgb(250, 255, 188);"));
        pushButton_2 = new QPushButton(DeleteWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 60, 121, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
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
        comboBox = new QComboBox(DeleteWindow);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(120, 10, 151, 31));
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
"QComboBox::down-arrow:on {\n"
"	top: 2px;\n"
" }"));
        label = new QLabel(DeleteWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 101, 31));
        label->setFont(font);
        pushButton = new QPushButton(DeleteWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 60, 111, 31));
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

        retranslateUi(DeleteWindow);

        QMetaObject::connectSlotsByName(DeleteWindow);
    } // setupUi

    void retranslateUi(QDialog *DeleteWindow)
    {
        DeleteWindow->setWindowTitle(QApplication::translate("DeleteWindow", "TimeTask - \320\222\320\270\320\264\320\260\320\273\320\265\320\275\320\275\321\217 \320\267\320\260\321\205\320\276\320\264\321\226\320\262", nullptr));
        pushButton_2->setText(QApplication::translate("DeleteWindow", "\320\227\320\260\320\272\321\200\320\270\321\202\320\270", nullptr));
        label->setText(QApplication::translate("DeleteWindow", "\320\222\320\270\320\261\320\265\321\200\321\226\321\202\321\214 \320\267\320\260\321\205\321\226\320\264:", nullptr));
        pushButton->setText(QApplication::translate("DeleteWindow", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteWindow: public Ui_DeleteWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEWINDOW_H
