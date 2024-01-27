#ifndef MYLIBRARY_H
#define MYLIBRARY_H

#include "myLibrary_global.h"

class MYLIBRARY_EXPORT MyLibrary
{
private:
    int yearOfBirth;
public:
    MyLibrary();
    int getAge();
    void setYearOfBirth(int newYearOfBirth);
};

#endif // MYLIBRARY_H
