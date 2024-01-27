#include "mydll.h"

Mydll::Mydll()
{
}

void Mydll::openDllDialog()
{
    objectDialog=new Dialog;
    objectDialog->exec();
    dllValue=objectDialog->getDialogValue();
    qDebug()<<"opendialog dllValue="+dllValue;
    delete objectDialog;
}

QString Mydll::getDllValue() const
{
    qDebug()<<"getDialogvalue dllValue="+dllValue;
    return dllValue;
}
