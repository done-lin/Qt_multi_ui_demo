#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form1.h"
#include "form2.h"


//此程序演示如何使用ui，一个程序中调用多个ui的问题。

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //声明你的ui类，这里demo演示两个ui
    m_pWidget1 = new Form1();//里面的参数parent不能填this，填入this会在此窗口里面上显示
    m_pWidget2 = new Form2();//里面的参数parent不能填this，填入this会在此窗口里面上显示
    m_pWidget1->hide();
    m_pWidget2->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    m_pWidget1->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    m_pWidget2->show();
}
