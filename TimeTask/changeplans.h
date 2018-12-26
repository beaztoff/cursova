#ifndef CHANGEPLANS_H
#define CHANGEPLANS_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class ChangePlans;
}

class ChangePlans : public QDialog
{
    Q_OBJECT

public:
    explicit ChangePlans(QWidget *parent = 0);
    ~ChangePlans();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);

    void updateComboBox();

private:
    Ui::ChangePlans *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
    QSqlTableModel *plans;
};

#endif // CHANGEPLANS_H
