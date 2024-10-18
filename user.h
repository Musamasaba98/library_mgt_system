#ifndef USER_H
#define USER_H
#include <string>
using namespace std;

class User{
    public:
        User();
        User(int user_id,string_view name,int age);
       
    protected:
        int user_id{0};
        string user_name{""};
        int user_age;    
};
#endif //USER_H