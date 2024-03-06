#ifndef REGISTERWINDOW_H
#define REGISTERWINDOW_H

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

private slots:
    void on_pushButton_clicked();

private:
    Ui::ResgisterWindow *ui;
};

#endif // REGISTERWINDOW_H
