#include "changeplans.h"
#include "ui_changeplans.h"

ChangePlans::ChangePlans(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangePlans)
{
    ui->setupUi(this);

    model = new QSqlTableModel(this,db);
    plans = new QSqlTableModel(this,db);
    updateComboBox();

}

ChangePlans::~ChangePlans()
{
    delete ui;
}

void ChangePlans::on_pushButton_clicked()
{
    messages print;
    if(plans->submitAll())
        print.message(2);
    else
        print.message(3);
    updateComboBox();
}

void ChangePlans::updateComboBox()
{
    model->setTable("eventManager");
    model->select();
    ui->comboBox->setModel(model);
    ui->comboBox->setModelColumn(1);
}

void ChangePlans::on_pushButton_2_clicked()
{
    close();
}

void ChangePlans::on_comboBox_currentTextChanged(const QString &arg1)
{
    plans->setTable("eventTask");
    plans->setEditStrategy(QSqlTableModel::OnManualSubmit);
    plans->setFilter(QString("name ='%1'")
                     .arg(ui->comboBox->currentText()));
    plans->select();
    plans->removeRows(0,0);
    ui->tableView->setModel(plans);
    int i =0;
    while (i < ui->tableView->verticalHeader()->count())
    ui->tableView->verticalHeader()->setSectionResizeMode(i,QHeaderView::ResizeToContents),i++;
    ui->tableView->setColumnHidden(0, true);
    ui->tableView->setColumnHidden(1, true);
    ui->tableView->horizontalHeader()->setStretchLastSection( true );
}
