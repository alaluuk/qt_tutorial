#include "mylibrary.h"

#include <QDate>


void MyLibrary::setYearOfBirth(int newYearOfBirth)
{
    yearOfBirth = newYearOfBirth;
}

MyLibrary::MyLibrary()
{
}

int MyLibrary::getAge()
{
    QDate currentDate = QDate::currentDate();
    int currentYear = currentDate.year();
    return currentYear - yearOfBirth;
}
