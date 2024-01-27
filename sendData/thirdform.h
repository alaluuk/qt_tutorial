#ifndef THIRDFORM_H
#define THIRDFORM_H

#include <QDialog>

namespace Ui {
class ThirdForm;
}

class ThirdForm : public QDialog
{
    Q_OBJECT

public:
    explicit ThirdForm(QWidget *parent = nullptr);
    ~ThirdForm();
    void setNameFromMain(const QString &newNameFromMain);

private:
    Ui::ThirdForm *ui;
    QString nameFromMain;
};

#endif // THIRDFORM_H
