#ifndef TEACHER_H
#define TEACHER_H
#include "book.h"
#include "user.h"

class Teacher : public User {
public:
    Teacher(int id,string name,int age );
    void borrowBook(Book &book);
};
#endif //TEACHER_H