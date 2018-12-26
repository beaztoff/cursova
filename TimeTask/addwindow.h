#ifndef ADDWINDOW_H
#define ADDWINDOW_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class AddWindow;
}

class AddWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddWindow(QWidget *parent = 0);
    ~AddWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::AddWindow *ui;
    QSqlDatabase db;
};

#endif // ADDWINDOW_H
