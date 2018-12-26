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
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *AboutWindow)
    {
        if (AboutWindow->objectName().isEmpty())
            AboutWindow->setObjectName(QStringLiteral("AboutWindow"));
        AboutWindow->resize(511, 271);
        AboutWindow->setMinimumSize(QSize(511, 271));
        AboutWindow->setMaximumSize(QSize(511, 271));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/timetask-ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        AboutWindow->setWindowIcon(icon);
        AboutWindow->setStyleSheet(QStringLiteral("background-color: rgb(250, 255, 188);"));
        pushButton = new QPushButton(AboutWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(380, 230, 121, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
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
        groupBox = new QGroupBox(AboutWindow);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 491, 201));
        groupBox->setFont(font);
        groupBox->setStyleSheet(QStringLiteral(""));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 30, 271, 21));
        label->setFont(font);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 90, 271, 51));
        label_2->setFont(font);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(350, 170, 121, 21));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral(""));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 30, 161, 151));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/timetask-ico.png")));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 60, 291, 21));
        label_5->setFont(font);

        retranslateUi(AboutWindow);

        QMetaObject::connectSlotsByName(AboutWindow);
    } // setupUi

    void retranslateUi(QDialog *AboutWindow)
    {
        AboutWindow->setWindowTitle(QApplication::translate("AboutWindow", "TimeTask - \320\237\321\200\320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\321\203", nullptr));
        pushButton->setText(QApplication::translate("AboutWindow", "\320\227\320\260\320\272\321\200\320\270\321\202\320\270", nullptr));
        groupBox->setTitle(QApplication::translate("AboutWindow", "\320\237\321\200\320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\321\203", nullptr));
        label->setText(QApplication::translate("AboutWindow", "\320\227\320\235\320\242\320\243, \320\232\320\260\321\204\320\265\320\264\321\200\320\260 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\275\320\270\321\205 \320\267\320\260\321\201\320\276\320\261\321\226\320\262", nullptr));
        label_2->setText(QApplication::translate("AboutWindow", "\320\232\321\203\321\200\321\201\320\276\320\262\320\270\320\271 \320\277\321\200\320\276\320\265\320\272\321\202 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\321\226\320\262 \320\263\321\200\321\203\320\277\320\270 \n"
"\320\232\320\235\320\242-117: \320\234.\320\222. \320\242\320\260\321\200\321\217\320\275\320\270\320\272\320\260, \320\220.\320\241. \320\206\320\262\321\207\320\265\320\275\320\272\320\260,\n"
"\320\242.\320\222. \320\232\321\203\320\267\320\275\321\224\321\206\320\276\320\262\320\260, \320\206.\320\234. \320\235\320\265\321\201\320\272\320\276\321\200\320\276\320\274\320\275\320\276\320\263\320\276.", nullptr));
        label_3->setText(QApplication::translate("AboutWindow", "\320\227\320\260\320\277\320\276\321\200\321\226\320\266\320\266\321\217, 2018", nullptr));
        label_4->setText(QString());
        label_5->setText(QApplication::translate("AboutWindow", "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\260 \"TimeTask - \320\240\320\276\320\267\320\277\320\276\321\200\321\217\320\264\320\276\320\272 \320\267\320\260\321\205\320\276\320\264\321\226\320\262\"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutWindow: public Ui_AboutWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWINDOW_H
