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


void MainWindow::on_btnGetValue_clicked()
{
    connect(this, SIGNAL(mySignal()), this, SLOT(mySlot()));
    myAsyncFunction();
}
void MainWindow::myAsyncFunction()
{
    QThread::msleep(3000);
    valueFromAsync="Data from AsyncFunction";
    emit mySignal();
    qDebug()<< "Async function finish";
}

void MainWindow::mySlot()
{
    ui->labelInfo->setText(valueFromAsync);
}
