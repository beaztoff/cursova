#ifndef PLANADDWINDOW_H
#define PLANADDWINDOW_H

#include <QDialog>

namespace Ui {
class PlanAddWindow;
}

class PlanAddWindow : public QDialog
{
    Q_OBJECT

public:
    explicit PlanAddWindow(QWidget *parent = 0);
    ~PlanAddWindow();

private:
    Ui::PlanAddWindow *ui;
};

#endif // PLANADDWINDOW_H
