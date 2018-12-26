#include "showwindow.h"
#include "ui_showwindow.h"
ShowWindow::ShowWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowWindow)
{
    ui->setupUi(this);
    model = new QSqlTableModel(this,db);
    arrays = new QSqlTableModel(this,db);
    plans = new QSqlTableModel(this,db);
    all = new QSqlTableModel(this,db);
    all->setTable("eventManager");
    all->select();
    ui->comboBox->setModel(all);
    ui->comboBox->setModelColumn(1);

    QDate date = QDate::currentDate();
    ui->dateEdit->setDate(date);
}

ShowWindow::~ShowWindow()
{
    delete ui;
}

void ShowWindow::on_pushButton_clicked()
{
    close();
}

void ShowWindow::on_pushButton_2_clicked()
{
    arrays->setTable("eventManager");
    arrays->setFilter(QString("name ='%1'")
                     .arg(ui->comboBox->currentText()));
    arrays->select();
    ui->tableView->setModel(arrays);

    int i=0;
    while (i < ui->tableView->verticalHeader()->count())
    ui->tableView->verticalHeader()->setSectionResizeMode(i,QHeaderView::ResizeToContents),i++;

    plans->setTable("eventTask");
    plans->setFilter(QString("name ='%1'")
                     .arg(ui->comboBox->currentText()));
    plans->select();
    ui->tableView_2->setModel(plans);       
    i=0;
    while (i < ui->tableView_2->verticalHeader()->count())
    ui->tableView_2->verticalHeader()->setSectionResizeMode(i,QHeaderView::ResizeToContents),i++;

    ui->tableView->setColumnHidden(0, true);
    ui->tableView->setColumnHidden(1, true);

    ui->tableView_2->setColumnHidden(0, true);
    ui->tableView_2->setColumnHidden(1, true);
    ui->tableView_2->horizontalHeader()->setStretchLastSection( true );

}

void ShowWindow::on_pushButton_4_clicked()
{
     model->setTable("eventManager");
     model->setFilter(QString("dateStart LIKE '%%1%'")
                      .arg(ui->dateEdit->text()));
     model->select();
     ui->comboBox->setModel(model);
     ui->comboBox->setModelColumn(1);
}
