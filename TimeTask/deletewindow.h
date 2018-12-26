#ifndef DELETEWINDOW_H
#define DELETEWINDOW_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class DeleteWindow;
}

class DeleteWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteWindow(QWidget *parent = 0);
    ~DeleteWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void updateComboBox();

private:
    Ui::DeleteWindow *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
};

#endif // DELETEWINDOW_H
