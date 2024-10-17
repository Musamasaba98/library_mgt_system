#ifndef BOOK_H
#define BOOK_H
#include <string>
#include "category.h"
using namespace std;

enum bookStatus{out_of_stock,in_stock};
class Book{
    public:
        Book();
        Book(int id,string_view title,int pages,int copies,string_view isbn);
        ~Book();
        void addBook();
        bool deleteBook();
    protected:
        string book_title;
        string ISBN;
        int pages{1};
        int copies{1};
        Category book_category;
        bookStatus status{in_stock};
        int book_id;   
};
#endif //BOOK_H