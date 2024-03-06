#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "login.h"
#include <QPixmap>
WelcomeWindow::WelcomeWindow(QWidget *parent,QString n,int age)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
    QString x=QString :: number (age);
    ui->label->setText("Hello , " + n + x);
    QPixmap pix ("C:\\Users\\habib\\OneDrive\\Desktop\\qt\\CinemaProject\\pics\\OIP (1).jpeg");
    ui->label_2->setPixmap(pix.scaled(200,200,Qt::KeepAspectRatio));
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

