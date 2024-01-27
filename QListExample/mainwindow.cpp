#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QStandardItemModel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    addStudents();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addStudents()
{
    Student obj;
    obj.setFname("Matti"); obj.setLname("Mainio"); studentList.append(obj);
    obj.setFname("Teppo"); obj.setLname("Testi"); studentList.append(obj);
    obj.setFname("Jussi"); obj.setLname("Juonio"); studentList.append(obj);
}


void MainWindow::on_btnShow_clicked()
{
    QStandardItemModel *table_model = new QStandardItemModel(studentList.size(),2);
    table_model->setHeaderData(0, Qt::Horizontal, QObject::tr("Etunimi"));
    table_model->setHeaderData(1, Qt::Horizontal, QObject::tr("Sukunimi"));

    for (int row = 0; row < studentList.size(); ++row) {
        QStandardItem *fName = new QStandardItem((studentList[row].getFname()));
        table_model->setItem(row, 0, fName);
        QStandardItem *lName = new QStandardItem((studentList[row].getLname()));
        table_model->setItem(row, 1, lName);
    }

    ui->tableStudents->setModel(table_model);
}


void MainWindow::on_tableStudents_clicked(const QModelIndex &index)
{
    QVariant value=index.sibling(index.row(),index.column()).data();
    QString selected_value=QVariant(value).toString();

    ui->labelResult->setText("Valittu "+selected_value);
}

