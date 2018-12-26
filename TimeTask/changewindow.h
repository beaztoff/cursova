#ifndef CHANGEWINDOW_H
#define CHANGEWINDOW_H

#include <QDialog>
#include "mainwindow.h"


namespace Ui {
class changeWindow;
}

class changeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit changeWindow(QWidget *parent = 0);
    ~changeWindow();

private slots:
    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::changeWindow *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
    QSqlTableModel *plans;
};

#endif // CHANGEWINDOW_H
