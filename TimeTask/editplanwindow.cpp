#include "editplanwindow.h"
#include "ui_editplanwindow.h"

EditPlanWindow::EditPlanWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditPlanWindow)
{
    ui->setupUi(this);
}

EditPlanWindow::~EditPlanWindow()
{
    delete ui;
}
