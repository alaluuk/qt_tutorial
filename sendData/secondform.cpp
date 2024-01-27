#include "secondform.h"
#include "ui_secondform.h"

SecondForm::SecondForm(QString name, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondForm)
{
    ui->setupUi(this);
    ui->labelInfo->setText(name);
}

SecondForm::~SecondForm()
{
    qDebug()<<"Secondformin destructor";
    delete ui;
}
