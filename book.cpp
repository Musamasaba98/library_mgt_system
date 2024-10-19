#include "book.h"
#include <iostream>
#include <string_view>
using namespace std;

Book::Book()=default;
Book::Book(int id,const string_view& title,int pages,int copies,const string_view& isbn,const Category& category):book_id(id),
            book_title(title),pages(pages),copies(copies),ISBN(isbn),book_category(category){
                status=copies>0?BookStatus::in_stock:BookStatus::out_of_stock;
            }

void Book::displayBookDetails()const{
      cout << "Title: " << book_title << "\n"
              << "ISBN: " << ISBN << "\n"
              << "Pages: " << pages << "\n"
              << "Copies: " << copies << "\n"
              << "Status: " << (status == BookStatus::in_stock ? "In Stock" : "Out of Stock") << "\n"
              << "Category: " << book_category.getCategoryName() << "\n"; 
};
bool Book::isAvailable()const{
    return status == BookStatus::in_stock;
};
void Book::borrowBook(){
     if (copies > 0) {
        copies--;
        if (copies == 0) {
            status = BookStatus::out_of_stock;
        }
    } else {
        std::cout << "This book is out of stock!\n";
    }
};
void Book::returnBook(){
    copies++;
    if (status == BookStatus::out_of_stock) {
        status = BookStatus::in_stock;
    }
};
//getters
string Book::getTitle()const{
    return book_title;
};
string Book::getISBN()const{
    return ISBN;
};
int Book::getPages()const{
    return pages;
};
int Book::getBookID()const{
    return book_id;
};
BookStatus Book::getStatus()const{
    return status;
};