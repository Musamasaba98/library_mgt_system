#ifndef BOOK_H
#define BOOK_H
#include <string>
#include "category.h"
using namespace std;

enum class BookStatus{out_of_stock,in_stock};
class Book{
    public:
        Book();
        Book(int id,const string_view& title,int pages,int copies,const string_view& isbn,const Category& category );
        ~Book();
        //Methods
        void displayBookDetails()const;//New method to show details of the book
        bool isAvailable()const;
        void borrowBook();
        void returnBook();
        //getters
        string getTitle()const;
        string getISBN()const;
        int getPages()const;
        BookStatus getStatus()const;
        int getBookID()const;
    private:
        string book_title;
        string ISBN;
        int pages{1};
        int copies{1};
        Category book_category;
        BookStatus status{BookStatus::in_stock};
        int book_id;   
};
#endif //BOOK_H