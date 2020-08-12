#include "form1.h"
#include "ui_form1.h"
#include "QMessageBox"

Form1::Form1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form1)
{
    ui->setupUi(this);
}

Form1::~Form1()
{
    delete ui;
}

void Form1::on_pushButton_clicked()
{
    QMessageBox::information(this, "OK1", "button 1 is click, at form1!", QMessageBox::Yes);
}
