#ifndef CATEGORY_H
#define CATEGORY_H

enum bookCategory{no_cat,science, sst, english,math};
class Category{
    public:
        Category(bookCategory name);
    protected:
        bookCategory category_name{no_cat};    
};

#endif //CATEGORY_H