#include "addplanwindow.h"
#include "ui_addplanwindow.h"

AddPlanWindow::AddPlanWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPlanWindow)
{
    ui->setupUi(this);
}

AddPlanWindow::~AddPlanWindow()
{
    delete ui;
}
