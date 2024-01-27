#include "thirdform.h"
#include "ui_thirdform.h"

ThirdForm::ThirdForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ThirdForm)
{
    ui->setupUi(this);
}

ThirdForm::~ThirdForm()
{
    qDebug()<<"Thirdformin destructor";
    delete ui;
}


void ThirdForm::setNameFromMain(const QString &newNameFromMain)
{
    nameFromMain = newNameFromMain;
    ui->labelInfo->setText(nameFromMain);
}
