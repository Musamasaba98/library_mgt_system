#include "admin.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Admin::Admin()=default;
Admin::Admin(int id,const std::string& name, int age,int emp_id):User(id,name,age),employee_id(emp_id){}

void Admin::addBook(std::vector<Book>& library,const Book &newBook){
    library.push_back(newBook);
    cout << "Book titled '" << newBook.getTitle() << "' has been added to the library.\n";
}
bool Admin::deleteBook(std::vector<Book>& library,int book_id){
    for(auto it=library.begin(); it!=library.end();++it){
        if(it->getBookID()==book_id){
            cout << "Book titled '" << it->getTitle() << "' has been deleted from the library.\n";
            library.erase(it);
            return true;
        }
    }
    cout << "Book with ID " << book_id << " not found in the library.\n";
    return false;
}