#ifndef PLANWINDOW_H
#define PLANWINDOW_H

#include <QDialog>

namespace Ui {
class PlanWindow;
}

class PlanWindow : public QDialog
{
    Q_OBJECT

public:
    explicit PlanWindow(QWidget *parent = 0);
    ~PlanWindow();

private:
    Ui::PlanWindow *ui;
};

#endif // PLANWINDOW_H
