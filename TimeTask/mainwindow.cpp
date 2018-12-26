#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "showwindow.h"
#include "addwindow.h"
#include "deletewindow.h"
#include "aboutwindow.h"
#include "addplans.h"
#include "changeplans.h"
#include "deleteplan.h"
#include "changewindow.h"
#include "usertime.h"
#include "connectiondb.h"
#include "messages.h"
#include "jsondb.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QDateTime dt = QDateTime::currentDateTime();
    connectionDB DB;
    DB.connect();
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timeManager()));
    timer->start(1000);
    jsondb json;
    json.insert(dt.toString());
}

MainWindow::~MainWindow()
{
    QDateTime dt = QDateTime::currentDateTime();
    jsondb json;
    QMessageBox::about(0,"Час користування","Вхід в програму: " + json.parse() + "\n\nВихід з програми: " + dt.toString());
    delete ui;
}

void MainWindow::timeManager()
{
    usertime a;
    a.timeEvent();
    QString returnText = a.timeEvent();
    ui->label_2->setText(returnText);
}

void MainWindow::on_pushButton_clicked()
{
    ShowWindow window;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    AddWindow window1;
    window1.setModal(true);
    window1.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    DeleteWindow window2;
    window2.setModal(true);
    window2.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
     ChangePlans window3;
     window3.setModal(true);
     window3.exec();

}

void MainWindow::on_action_7_triggered()
{
    AboutWindow window4;
    window4.setModal(true);
    window4.exec();
}

void MainWindow::on_pushButton_5_clicked()
{
    AddPlans window5;
    window5.setModal(true);
    window5.exec();
}

void MainWindow::on_pushButton_6_clicked()
{
    deletePlan window6;
    window6.setModal(true);
    window6.exec();
}

void MainWindow::on_pushButton_7_clicked()
{
    changeWindow window7;
    window7.setModal(true);
    window7.exec();
}
