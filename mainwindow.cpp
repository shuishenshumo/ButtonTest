#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <windows.h>
#include <QDebug>
int i=0;
int range=50;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Init()
{
    ui->pushButton->setStyleSheet("background-color: rgb(0, 255, 255);"
                                  "border");

}

void MainWindow::on_pushButton_clicked()
{
   i=i+range;
   Sleep(i);
   if(i%(range*2)!=0)
   {
       ui->pushButton->setStyleSheet("background-color: rgb(0, 0, 255);");
   }
   else
   {
       ui->pushButton->setStyleSheet("background-color: rgb(0, 255, 255);");
   }
   qDebug()<<i;
}

void MainWindow::on_pushButton_2_clicked()
{
    QString str2=QString::number(i);
    ui->label_2->setText(str2);
    i=0;
}

void MainWindow::on_pushButton_3_clicked()
{
    QString str=ui->lineEdit->text();
    range=str.toInt();
}
