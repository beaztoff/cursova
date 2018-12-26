/********************************************************************************
** Form generated from reading UI file 'aboutwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTWINDOW_H
#define UI_ABOUTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AboutWindow
{
public:
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *AboutWindow)
    {
        if (AboutWindow->objectName().isEmpty())
            AboutWindow->setObjectName(QStringLiteral("AboutWindow"));
        AboutWindow->resize(241, 201);
        AboutWindow->setMinimumSize(QSize(241, 201));
        AboutWindow->setMaximumSize(QSize(241, 201));
        AboutWindow->setStyleSheet(QStringLiteral("background-color: rgb(250, 255, 188);"));
        pushButton = new QPushButton(AboutWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 160, 121, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: rgb(215, 132, 0);\n"
"border-style: solid;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: black;\n"
"color: rgb(215, 132, 0);\n"
"\n"
"}"));
        groupBox = new QGroupBox(AboutWindow);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 221, 131));
        groupBox->setStyleSheet(QStringLiteral(""));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 201, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 201, 41));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 100, 91, 21));
        label_3->setStyleSheet(QStringLiteral(""));

        retranslateUi(AboutWindow);

        QMetaObject::connectSlotsByName(AboutWindow);
    } // setupUi

    void retranslateUi(QDialog *AboutWindow)
    {
        AboutWindow->setWindowTitle(QApplication::translate("AboutWindow", "\320\237\321\200\320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\321\203", nullptr));
        pushButton->setText(QApplication::translate("AboutWindow", "\320\227\320\260\320\272\321\200\320\270\321\202\320\270", nullptr));
        groupBox->setTitle(QApplication::translate("AboutWindow", "\320\237\321\200\320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\321\203", nullptr));
        label->setText(QApplication::translate("AboutWindow", "\320\227\320\235\320\242\320\243, \320\232\320\260\321\204\320\265\320\264\321\200\320\260 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\275\320\270\321\205 \320\267\320\260\321\201\320\276\320\261\321\226\320\262", nullptr));
        label_2->setText(QApplication::translate("AboutWindow", "\320\232\321\203\321\200\321\201\320\276\320\262\320\270\320\271 \320\277\321\200\320\276\320\265\320\272\321\202 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\321\226\320\262 \320\263\321\200\321\203\320\277\320\270 \n"
"\320\232\320\235\320\242-117: \320\234.\320\222. \320\242\320\260\321\200\321\217\320\275\320\270\320\272\320\260, \320\220.\320\241. \320\206\320\262\321\207\320\265\320\275\320\272\320\260,\n"
" \320\242.\320\222. \320\232\321\203\320\267\320\275\321\224\321\206\320\276\320\262\320\260, \320\206.\320\234. \320\235\320\265\321\201\320\272\320\276\321\200\320\276\320\274\320\275\320\276\320\263\320\276.", nullptr));
        label_3->setText(QApplication::translate("AboutWindow", "\320\227\320\260\320\277\320\276\321\200\321\226\320\266\320\266\321\217, 2018", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutWindow: public Ui_AboutWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWINDOW_H
