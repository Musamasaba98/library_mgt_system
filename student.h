#ifndef STUDENT_H
#define STUDENT_H
#include "book.h"
#include "user.h"

class Student : public User {
public:
    Student(int id,string_view name, int age);
    void borrowBook(Book &book);
};

#endif //STUDENT_H