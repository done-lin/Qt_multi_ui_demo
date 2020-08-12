#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form1.h"
#include "form2.h"


//�˳�����ʾ���ʹ��ui��һ�������е��ö��ui�����⡣

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //�������ui�࣬����demo��ʾ����ui
    m_pWidget1 = new Form1();//����Ĳ���parent������this������this���ڴ˴�����������ʾ
    m_pWidget2 = new Form2();//����Ĳ���parent������this������this���ڴ˴�����������ʾ
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
