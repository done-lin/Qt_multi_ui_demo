#include "form2.h"
#include "ui_form2.h"
#include "QMessageBox"

Form2::Form2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form2)
{
    ui->setupUi(this);
}

Form2::~Form2()
{
    delete ui;
}

void Form2::on_pushButton_clicked()
{
    QMessageBox::information(this, "OK2", "button 2 is click, at form2!", QMessageBox::Yes);

}
