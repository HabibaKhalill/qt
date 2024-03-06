#include "login.h"
#include "ui_login.h"
#include "users.h"
#include "welcomewindow.h"
#include "registerwindow.h"
Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->label_3->setVisible(0);
}

Login::~Login()
{
    delete ui;

}

void Login::on_pushButton_clicked()
{
    for(int i=0;i<usersCount;i++)
    {
        if(ui->lineEdit->text() == usernames[i] && ui->lineEdit_2->text() == passwords[i])
        {
            WelcomeWindow * w=new WelcomeWindow(this,usernames[i],Ages[i]);
            hide();
            w->show();
        }
        else
        {
            ui->label_3->setVisible(1);
        }
    }


}


void Login::on_pushButton_2_clicked()
{
    ResgisterWindow * t=new ResgisterWindow;
    hide();
    t->show();
}

