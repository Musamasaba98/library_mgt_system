#include "book.h"

Book::Book()=default;
Book::Book(int id,const string_view& title,int pages,int copies,const string_view& isbn,const Category& category):book_id(id),
            book_title(title),pages(pages),copies(copies),ISBN(isbn),book_category(category){
                status=copies>0?BookStatus::in_stock:BookStatus::out_of_stock;
            }
Book::~Book(){}

void Book::addBook(){}
bool Book::deleteBook(){}