#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "users.h"
#include "welcomewindow.h"
ResgisterWindow::ResgisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ResgisterWindow)
{
    ui->setupUi(this);

    ui->label_9->setVisible(0);
    ui->label_4->setVisible(0);
    ui->label_5->setVisible(0);
    ui->label_10->setVisible(0);

}

ResgisterWindow::~ResgisterWindow()
{
    delete ui;
}
