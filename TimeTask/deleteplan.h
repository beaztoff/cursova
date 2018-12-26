#ifndef DELETEPLAN_H
#define DELETEPLAN_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class deletePlan;
}

class deletePlan : public QDialog
{
    Q_OBJECT

public:
    explicit deletePlan(QWidget *parent = 0);
    ~deletePlan();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void updateEvent();

    void on_comboBox_currentTextChanged(const QString &arg1);

private:
    Ui::deletePlan *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
    QSqlTableModel *plans;
};

#endif // DELETEPLAN_H
