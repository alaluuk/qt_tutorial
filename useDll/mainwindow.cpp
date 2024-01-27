#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    objectMyDll=new Mydll;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete objectMyDll;
    objectMyDll=nullptr;
}


void MainWindow::on_btnGetValue_clicked()
{
    objectMyDll->openDllDialog();
    QString valueFromDll=objectMyDll->getDllValue();
    ui->textValue->setText(valueFromDll);
}

