#include "showplanwindow.h"
#include "ui_showplanwindow.h"

ShowPlanWindow::ShowPlanWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowPlanWindow)
{
    ui->setupUi(this);
}

ShowPlanWindow::~ShowPlanWindow()
{
    delete ui;
}
