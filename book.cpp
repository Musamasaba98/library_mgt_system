#include "book.h"

Book::Book()=default;
Book::Book(int id,string_view title,int pages,int copies,string_view isbn):book_id(id),
            book_title(title),pages(pages),copies(copies),ISBN(isbn){}
Book::~Book(){}

void Book::addBook(){}
bool Book::deleteBook(){}