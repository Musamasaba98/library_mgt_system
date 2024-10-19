#include "user.h"
#include <string>
using namespace std;

User::User()=default;
User::User(int id, string name, int age):user_id(id),user_name(name),user_age(age){}
