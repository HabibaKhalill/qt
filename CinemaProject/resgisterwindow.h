#ifndef RESGISTERWINDOW_H
#define RESGISTERWINDOW_H

#include <QDialog>

namespace Ui {
class ResgisterWindow;
}

class ResgisterWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ResgisterWindow(QWidget *parent = nullptr);
    ~ResgisterWindow();

private:
    Ui::ResgisterWindow *ui;
};

#endif // RESGISTERWINDOW_H
