#include <iostream>
#include "user.h"
#include "book.h"
#include "admin.h"
#include "category.h"
#include "student.h"
#include "teacher.h"
using namespace std;


int main(){
    Admin admin(1, "John Doe", 35, 12345);
    
    // Create a library as a vector of books
    std::vector<Book> library;

    // Add books to the library
    Book book1(101, "C++ Programming", 450, 10, "123-456-7890", Category(BookCategory::science));
    Book book2(102, "Data Structures", 350, 5, "987-654-3210", Category(BookCategory::sst));

    admin.addBook(library, book1);
    admin.addBook(library, book2);

    // Delete a book
    admin.deleteBook(library, 101);

    return 0;
}