#ifndef ADDPLANS_H
#define ADDPLANS_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class AddPlans;
}

class AddPlans : public QDialog
{
    Q_OBJECT

public:
    explicit AddPlans(QWidget *parent = 0);
    ~AddPlans();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::AddPlans *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
};

#endif // ADDPLANS_H
