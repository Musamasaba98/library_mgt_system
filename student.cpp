#include "student.h"
#include <iostream>
#include "book.h"
#include "user.h"

Student::Student(int id,string_view name, int age) : User(id,name, age) {}

void Student::borrowBook(Book &book) {
    if (book.isAvailable()) {
        book.borrowBook();
        std::cout << user_name << " borrowed the book: " << book.getTitle() << std::endl;
    } else {
        std::cout << "The book is not available." << std::endl;
    }
}