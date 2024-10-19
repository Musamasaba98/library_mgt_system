#ifndef ADMIN_H
#define ADMIN_H
#include "user.h"
#include "book.h"
#include <string>
#include <vector>

class Admin:public User{
    public:
        Admin();
        Admin(int id,const std::string& name, int age,int emp_id);
        
        void addBook(std::vector<Book>& library, const Book& newBook);
        bool deleteBook(std::vector<Book>& library,int book_id);
    private:
        int employee_id;
};
#endif //ADMIN_H