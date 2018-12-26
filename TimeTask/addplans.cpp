#include "addplans.h"
#include "ui_addplans.h"
#include <QDebug>
#include <QDate>
#include <QTextEdit>
#include <mainwindow.h>


AddPlans::AddPlans(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPlans)
{
    ui->setupUi(this);
    model = new QSqlTableModel(this,db);
    model->setTable("eventManager");
    model->select();
    ui->comboBox->setModel(model);
    ui->comboBox->setModelColumn(1);
    QDate date = QDate::currentDate();
    ui->dateTimeEdit->setDate(date);
    ui->dateTimeEdit_2->setDate(date);
}

AddPlans::~AddPlans()
{
    delete ui;
}

void AddPlans::on_pushButton_clicked()
{
    messages print;

   /* QString enter = "";
    QString text = ui->textEdit->toPlainText();
    int count = ui->textEdit->toPlainText().length();
    bool first = false;
    QFile fix(QDir::currentPath() + "\\release\\fix.txt");
    fix.open(QIODevice::ReadOnly);
    enter = fix.readAll(); */

    if(ui->textEdit->toPlainText().length() == 0)
    {
        print.message(0);
        return;
    }

  /*  else
    {
        for(int i = 0; i<count; i++)
        {
            if(text.at(i) == enter)
                text.remove(i,i+1);
            if(i % 40 == 0)
                text.insert(i,enter);
        }
        QMessageBox::information(0,0,text);
    } */

    QSqlQuery query = QSqlQuery(db);
    query.prepare("INSERT INTO eventTask(name,timeStart,timeEnd,schedule)"
                  "VALUES(:name,:timeStart,:timeEnd,:schedule)");
    query.bindValue(":name", ui->comboBox->currentText());
    query.bindValue(":timeStart", ui->dateTimeEdit->text());
    query.bindValue(":timeEnd", ui->dateTimeEdit_2->text());
    query.bindValue(":schedule", ui->textEdit->toPlainText());
    try
    {
        if(!query.exec())
        {
            qDebug() << query.lastError().text();
            print.messageArguments(1,query.lastError().text());
        }
        else
        {
            print.messageArguments(0,ui->comboBox->currentText());
            ui->textEdit->setText("");
        }
    } catch(const std::exception& e) {  qDebug()<<e.what(); }

}

void AddPlans::on_pushButton_2_clicked()
{
    close();

}
