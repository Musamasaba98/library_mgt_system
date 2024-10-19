#include "teacher.h"
#include "book.h"
#include "user.h"
#include <iostream>

Teacher::Teacher( int id,string name,int age) : User(id,name,age ) {}

void Teacher::borrowBook(Book &book) {
    if (book.isAvailable()) {
        book.borrowBook();
        std::cout << user_name << " borrowed the book: " << book.getTitle() << std::endl;
    } else {
        std::cout << "The book is not available." << std::endl;
    }
}