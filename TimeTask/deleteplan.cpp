#include "deleteplan.h"
#include "ui_deleteplan.h"

deletePlan::deletePlan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deletePlan)
{
    ui->setupUi(this);
    model = new QSqlTableModel(this,db);
    plans = new QSqlTableModel(this,db);
    model->setTable("eventManager");
    model->select();
    ui->comboBox->setModel(model);
    ui->comboBox->setModelColumn(1);

}

deletePlan::~deletePlan()
{
    delete ui;
}

void deletePlan::on_pushButton_2_clicked()
{
    close();
}

void deletePlan::updateEvent()
{
    plans->setTable("eventTask");
    plans->setFilter(QString("name ='%1'")
                     .arg(ui->comboBox->currentText()));
    plans->select();
    ui->tableView->setModel(plans);
    int i =0;
    while (i < ui->tableView->verticalHeader()->count())
    ui->tableView->verticalHeader()->setSectionResizeMode(i,QHeaderView::ResizeToContents),i++;
    ui->lineEdit->setText("");
    ui->tableView->setColumnHidden(1, true);
    ui->tableView->horizontalHeader()->setStretchLastSection( true );
}

void deletePlan::on_pushButton_clicked()
{

    QSqlQuery query = QSqlQuery(db);
    messages print;
    query.prepare(QString("DELETE FROM eventTask WHERE id ='%1'")
                         .arg(ui->lineEdit->text()));
    try
    {
        if(!query.exec())
        {
            qDebug() << query.lastError().text();
            print.messageArguments(1,query.lastError().text());
        }
        else
        {
            print.messageArguments(3,ui->lineEdit->text());
        }
    } catch(const std::exception& e) {  qDebug()<<e.what(); }

    updateEvent();
}

void deletePlan::on_comboBox_currentTextChanged(const QString &arg1)
{
    updateEvent();
}
