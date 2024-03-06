#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "login.h"
WelcomeWindow::WelcomeWindow(QWidget *parent,QString n,int age)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
    QString x=QString :: number (age);
    ui->label->setText("Hello , " + n + x);
}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}

void WelcomeWindow::on_pushButton_clicked()
{
    Login * log=new Login;
    hide();
    log->show();
}

