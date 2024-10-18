#include "category.h"
#include <string>
using namespace std;

Category::Category(const BookCategory& name):category_name(name){}

string Category::getCategoryName()const{
    switch (category_name) {
        case BookCategory::science: return "Science";
        case BookCategory::sst: return "SST";
        case BookCategory::english: return "English";
        case BookCategory::math: return "Math";
        default: return "No Category";
    }
}