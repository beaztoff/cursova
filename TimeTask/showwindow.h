#ifndef SHOWWINDOW_H
#define SHOWWINDOW_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class ShowWindow;
}

class ShowWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ShowWindow(QWidget *parent = 0);
    ~ShowWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::ShowWindow *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
    QSqlTableModel *arrays;
    QSqlTableModel *plans;
    QSqlTableModel *all;
};

#endif // SHOWWINDOW_H
