#include "book.h"
#include <iostream>
using namespace std;

Book::Book()=default;
Book::Book(int id,const string_view& title,int pages,int copies,const string_view& isbn,const Category& category):book_id(id),
            book_title(title),pages(pages),copies(copies),ISBN(isbn),book_category(category){
                status=copies>0?BookStatus::in_stock:BookStatus::out_of_stock;
            }
Book::~Book(){}

void Book::displayBookDetails()const{
      cout << "Title: " << book_title << "\n"
              << "ISBN: " << ISBN << "\n"
              << "Pages: " << pages << "\n"
              << "Copies: " << copies << "\n"
              << "Status: " << (status == BookStatus::in_stock ? "In Stock" : "Out of Stock") << "\n"
              << "Category: " << book_category.getCategoryName() << "\n"; 
};
bool Book::isAvailable()const{

};
void Book::borrowBook(){

};
void Book::returnBook(){

};
//getters
string Book::getTitle()const{

};
string Book::getISBN()const{

};
int Book::getPages()const{

};
BookStatus Book::getStatus()const{

};