#include "addplan.h"
#include "ui_addplan.h"
#include <QDebug>
#include <QtSql/QSqlError>
#include <QtSql/QSqlRecord>
#include <QSqlDriver>
#include <QtSql>
#include <QMessageBox>

addplan::addplan(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addplan)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("37.228.88.134");
    db.setDatabaseName("db_pogoda123451");
    db.setUserName("pogoda123451");
    db.setPassword("240500240500");
    if(!db.open())
    {
        qDebug() << db.lastError().text();
        return;
    }
    else
        qDebug() << "Success!";
}

addplan::~addplan()
{
    delete ui;
}

void addplan::on_pushButton_clicked()
{
        QSqlQuery query = QSqlQuery(db);
        query.prepare("INSERT INTO eventManager(name,timeStart,timeEnd,schedule)"
                      "VALUES(:name,:timeStart,:timeEnd,:schedule)");
        query.bindValue(":name", ui->comboBox->currentText());
        query.bindValue(":timeStart", ui->dateEdit->text());
        query.bindValue(":timeEnd", ui->dateEdit_2->text());
        query.bindValue(":schedule", ui->lineEdit->text());
        query.exec();
}
