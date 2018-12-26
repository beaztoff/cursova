#ifndef EDITPLANWINDOW_H
#define EDITPLANWINDOW_H

#include <QDialog>

namespace Ui {
class EditPlanWindow;
}

class EditPlanWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EditPlanWindow(QWidget *parent = 0);
    ~EditPlanWindow();

private:
    Ui::EditPlanWindow *ui;
};

#endif // EDITPLANWINDOW_H
