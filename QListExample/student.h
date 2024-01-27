#ifndef STUDENT_H
#define STUDENT_H

#include <QString>


class Student
{
private:
    QString fname;
    QString lname;
public:
    Student();
    QString getFname() const;
    QString getLname() const;
    void setLname(const QString &newLname);
    void setFname(const QString &newFname);
};

#endif // STUDENT_H
