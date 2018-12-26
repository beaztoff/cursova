#include "planaddwindow.h"
#include "ui_planaddwindow.h"

PlanAddWindow::PlanAddWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlanAddWindow)
{
    ui->setupUi(this);
}

PlanAddWindow::~PlanAddWindow()
{
    delete ui;
}
