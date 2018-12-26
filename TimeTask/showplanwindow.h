#ifndef SHOWPLANWINDOW_H
#define SHOWPLANWINDOW_H

#include <QDialog>

namespace Ui {
class ShowPlanWindow;
}

class ShowPlanWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ShowPlanWindow(QWidget *parent = 0);
    ~ShowPlanWindow();

private:
    Ui::ShowPlanWindow *ui;
};

#endif // SHOWPLANWINDOW_H
