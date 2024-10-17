#ifndef ADMIN_H
#define ADMIN_H
class Admin:public User{
    public:
        Admin();
        Admin(int id,string_view name, int age);
        ~Admin();
    protected:
        int employee_id;
};
#endif //ADMIN_H