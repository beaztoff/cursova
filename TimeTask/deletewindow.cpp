#include "deletewindow.h"
#include "ui_deletewindow.h"

DeleteWindow::DeleteWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteWindow)
{
    ui->setupUi(this);
    model = new QSqlTableModel(this,db);
    updateComboBox();
}

DeleteWindow::~DeleteWindow()
{
    delete ui;
}

void DeleteWindow::on_pushButton_2_clicked()
{
    close();
}

void DeleteWindow::updateComboBox()
{
    model->setTable("eventManager");
    model->select();
    ui->comboBox->setModel(model);
    ui->comboBox->setModelColumn(1);
}

void DeleteWindow::on_pushButton_clicked()
{
     QSqlQuery query = QSqlQuery(db);
     messages print;
    try
    {
         query.prepare(QString("DELETE FROM eventTask WHERE name ='%1'")
                              .arg(ui->comboBox->currentText()));
         if(!query.exec())
         {
             qDebug() << query.lastError().text();
         }

         query.prepare(QString("DELETE FROM eventManager WHERE name ='%1'")
                              .arg(ui->comboBox->currentText()));
         if(!query.exec())
         {
             qDebug() << query.lastError().text();
             print.messageArguments(1,query.lastError().text());
         }
         else
         {
             print.messageArguments(4,ui->comboBox->currentText());
         }
    } catch(const std::exception& e) {  qDebug()<<e.what(); }

    updateComboBox();
}
