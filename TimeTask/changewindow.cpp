#include "changewindow.h"
#include "ui_changewindow.h"

changeWindow::changeWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changeWindow)
{
    ui->setupUi(this);

    model = new QSqlTableModel(this,db);
    plans = new QSqlTableModel(this,db);

    model->setTable("eventManager");
    model->select();
    ui->comboBox->setModel(model);
    ui->comboBox->setModelColumn(1);

}

changeWindow::~changeWindow()
{
    delete ui;
}

void changeWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    plans->setTable("eventManager");
    plans->setEditStrategy(QSqlTableModel::OnManualSubmit);
    plans->setFilter(QString("name ='%1'")
                     .arg(ui->comboBox->currentText()));
    plans->select();
    ui->tableView->setModel(plans);
    int i =0;
    while (i < ui->tableView->verticalHeader()->count())
    ui->tableView->verticalHeader()->setSectionResizeMode(i,QHeaderView::ResizeToContents),i++;

    ui->tableView->setColumnHidden(0, true);
    ui->tableView->setColumnHidden(1, true);
}

void changeWindow::on_pushButton_clicked()
{
    messages print;
    if(plans->submitAll())
        print.message(2);
    else
        print.message(3);
}

void changeWindow::on_pushButton_2_clicked()
{
    close();
}
