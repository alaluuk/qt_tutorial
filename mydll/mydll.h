#ifndef MYDLL_H
#define MYDLL_H

#include "mydll_global.h"
#include "dialog.h"
#include <QString>
#include <QObject>
#include <QDebug>

class MYDLL_EXPORT Mydll
{
public:
    Mydll();
    void openDllDialog();
    QString getDllValue() const;

private:
    Dialog *objectDialog;
    QString dllValue;
};

#endif // MYDLL_H
