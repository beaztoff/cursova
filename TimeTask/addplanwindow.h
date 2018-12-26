#ifndef ADDPLANWINDOW_H
#define ADDPLANWINDOW_H

#include <QDialog>

namespace Ui {
class AddPlanWindow;
}

class AddPlanWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddPlanWindow(QWidget *parent = 0);
    ~AddPlanWindow();

private:
    Ui::AddPlanWindow *ui;
};

#endif // ADDPLANWINDOW_H
