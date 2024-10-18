#include "admin.h"
#include <iostream>
using namespace std;

Admin::Admin()=default;
Admin::Admin(int id,const string_view& name, int age,int emp_id):User(id,name,age),employee_id(emp_id){}
Admin::~Admin(){}

void Admin::addBook(vector<Book>& library,const Book &newBook){
    library.push_back(newBook);
    cout << "Book titled '" << newBook.getTitle() << "' has been added to the library.\n";
}
bool Admin::deleteBook(vector<Book>& library,int book_id){
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