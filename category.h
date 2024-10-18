#ifndef CATEGORY_H
#define CATEGORY_H


enum class BookCategory{no_cat,science, sst, english,math};
class Category{
    public:
        Category() = default;
        Category(const BookCategory& name);
        string getCategoryName()const;
    protected:
        BookCategory category_name{BookCategory::no_cat};    
};

#endif //CATEGORY_H