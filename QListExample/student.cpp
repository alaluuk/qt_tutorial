#include "student.h"

void Student::setFname(const QString &newFname)
{
    fname = newFname;
}

Student::Student()
{

}

QString Student::getFname() const
{
    return fname;
}

QString Student::getLname() const
{
    return lname;
}

void Student::setLname(const QString &newLname)
{
    lname = newLname;
}
