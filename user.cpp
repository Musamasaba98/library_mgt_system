#include "user.h"

User::User()=default;
User::User(int id, string_view name, int age):user_id(id),user_name(name),user_age(age){}
