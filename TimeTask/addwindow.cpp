#include "addwindow.h"
#include "ui_addwindow.h"

AddWindow::AddWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddWindow)
{
    ui->setupUi(this);
    QDate date = QDate::currentDate();
    ui->dateTimeEdit->setDate(date);
    ui->dateTimeEdit_2->setDate(date);
}

AddWindow::~AddWindow()
{
    delete ui;
}

void AddWindow::on_pushButton_2_clicked()
{
    close();
}

void AddWindow::on_pushButton_clicked()
{
    messages print;
    if(ui->lineEdit->text().length() == 0 || ui->lineEdit_2->text().length() == 0 ||
       ui->lineEdit_3->text().length() == 0 || ui->lineEdit_4->text().length() == 0)
    {
        print.message(1);
        return;
    }

    QSqlQuery query = QSqlQuery(db);
    query.prepare("INSERT INTO eventManager(name,placement,address,countPeople,dateStart,dateEnd)"
                  "VALUES(:name,:placement,:address,:countPeople,:dateStart,:dateEnd)");
     query.bindValue(":name", ui->lineEdit->text());
     query.bindValue(":placement", ui->lineEdit_2 ->text());
     query.bindValue(":address", ui->lineEdit_3->text());
     query.bindValue(":countPeople", ui->lineEdit_4->text());
     query.bindValue(":dateStart", ui->dateTimeEdit->text());
     query.bindValue(":dateEnd", ui->dateTimeEdit_2->text());
     try
     {
         if(!query.exec())
         {
             qDebug() << query.lastError().text();
             print.messageArguments(1,query.lastError().text());
         }
         else
         {
             print.messageArguments(2,ui->lineEdit->text());
             ui->lineEdit->setText("");
             ui->lineEdit_2->setText("");
             ui->lineEdit_3->setText("");
             ui->lineEdit_4->setText("");
         }
     } catch(const std::exception& e) {  qDebug()<<e.what(); }
}
