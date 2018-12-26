#ifndef ADDPLAN_H
#define ADDPLAN_H

#include <QWidget>
#include <QDialog>
#include <QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlTableModel>

namespace Ui {
class addplan;
}

class addplan : public QWidget
{
    Q_OBJECT

public:
    explicit addplan(QWidget *parent = 0);
    ~addplan();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addplan *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
};

#endif // ADDPLAN_H
