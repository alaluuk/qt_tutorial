#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "student.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnShow_clicked();

    void on_tableStudents_clicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    QList<Student> studentList;
    void addStudents();
};
#endif // MAINWINDOW_H
