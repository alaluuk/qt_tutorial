#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QThread>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void myAsyncFunction();
    QString valueFromAsync;

private slots:
    void on_btnGetValue_clicked();
    void mySlot();

private:
    Ui::MainWindow *ui;
signals:
    void mySignal();
};
#endif // MAINWINDOW_H
