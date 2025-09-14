#ifndef CAT_H
#define CAT_H

#include <string>

class Cat{

    private:
    static int objectCountCat;
    string CatName;
    int CatAge;
    int CatWeight;
    string CatBreed;
    string CatColor;
    string CatSound; 

    public:

    Cat(const string & name, int& age, int& weight, const string& breed, const string& color, const string& health, const string& sound);

    Cat(); 

    static int getObjectCountCat();

    void Introduction();
};
#endif