#include "resgisterwindow.h"
#include "ui_resgisterwindow.h"

ResgisterWindow::ResgisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ResgisterWindow)
{
    ui->setupUi(this);
}

ResgisterWindow::~ResgisterWindow()
{
    delete ui;
}
