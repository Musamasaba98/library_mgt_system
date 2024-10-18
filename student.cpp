#include "user.h"
#include "student.h"
#include "book.h"
#include <iostream>
#include <string_view>
using namespace std;

Student::Student(int id,string_view name, int age) : User(id,name, age) {}

void Student::borrowBook(Book &book) {
    if (book.isAvailable()) {
        book.borrowBook();
        cout << user_name << " borrowed the book: " << book.getTitle() << endl;
    } else {
        cout << "The book is not available." << endl;
    }
}