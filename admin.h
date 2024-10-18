#ifndef ADMIN_H
#define ADMIN_H
#include "user.h"
#include "book.h"
#include <vector>

class Admin:public User{
    public:
        Admin();
        Admin(int id,const string_view& name, int age,int emp_id);
        
        void addBook(vector<Book>& library, const Book& newBook);
        bool deleteBook(vector<Book>& library,int book_id);
    private:
        int employee_id;
};
#endif //ADMIN_H