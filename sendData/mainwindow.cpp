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


void MainWindow::on_btnOpenSecondForm_clicked()
{
    SecondForm *sf=new SecondForm("Jussi",this);
    sf->show();
}


void MainWindow::on_btnOpenThirdForm_clicked()
{
    ThirdForm *tf=new ThirdForm(this);
    tf->setNameFromMain("Maija");
    tf->open();
}

