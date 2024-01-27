#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnShow_clicked()
{
    myObject = new MyLibrary();
    bool ageNumberTest;
    int year=ui->lineEditYear->text().toInt(&ageNumberTest);
    if(!ageNumberTest){
        ui->labelResult->setText("Anna kokonaisluku!");
        ui->lineEditYear->setFocus();
    }
    else {
        myObject->setYearOfBirth(year);
        int age=myObject->getAge();

        QString ageToPrint=QVariant(age).toString();
        ui->labelResult->setText("Täytät tänä vuonna  "+ageToPrint);
    }
}

