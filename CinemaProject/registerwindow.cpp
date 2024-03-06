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
    ui->comboBox->addItems({"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31"});
    ui->comboBox_2->addItems({"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"});
    ui->comboBox_3->addItems({"2021","2020","2019","2018","2017","2016","2015","2014","2013","2012","2011","2010","2009","2008","2007","2006","2005","2004","2003","2002","2001","2000"});
}

ResgisterWindow::~ResgisterWindow()
{
    delete ui;
}

void ResgisterWindow::on_pushButton_clicked()
{bool check=0;
    ui->label_9->setVisible(0);
    ui->label_4->setVisible(0);
    ui->label_5->setVisible(0);
    ui->label_10->setVisible(0);
    QString day=ui->comboBox->currentText();
    QString month=ui->comboBox_2->currentText();
    QString year=ui->comboBox_3->currentText();
    int y=year.toInt();
    bool male=ui->radioButton->isChecked();
    bool female=ui->radioButton_2->isChecked();
    bool admin=ui->radioButton_4->isChecked();
    bool user=ui->radioButton_3->isChecked();
    bool action=ui->checkBox->isChecked();
    bool comedy=ui->checkBox_2->isChecked();
    bool drama=ui->checkBox_3->isChecked();
    bool romance=ui->checkBox_4->isChecked();
    bool horror=ui->checkBox_5->isChecked();
    bool other=ui->checkBox_6->isChecked();
    for (int i = 0; i < usersCount; ++i) {
        if(usernames[i]==ui->lineEdit->text())
        {
            check=1;

        }
    }
    if(check)
    {
        ui->label_4->setVisible(1);
    }
    if(ui->lineEdit_2->text() != ui->lineEdit_3->text())

    {
        ui->label_5->setVisible(1);
    }

    if(2024-y<12)
    {
        ui->label_10->setVisible(1);
    }
    if(
        ui->lineEdit_2->text() == ui->lineEdit_3->text()
        && !check
        && !ui->label_10->isVisible()
        && !ui->label_4->isVisible()
        && !ui->label_5->isVisible()
        && ui->lineEdit->text() != ""
        &&(male || female)
        &&(action||drama||horror||other||comedy||romance)
        && (user || admin))
    {
        usernames[usersCount]=ui->lineEdit->text();
        passwords[usersCount]=ui->lineEdit_2->text();
        Ages[usersCount]=2024-y;
        usersCount++;
        WelcomeWindow * w=new WelcomeWindow(this,usernames[usersCount-1],Ages[usersCount-1]);
        hide();
        w->show();

    }
    else
    {ui->label_9->setVisible(1);}
}

