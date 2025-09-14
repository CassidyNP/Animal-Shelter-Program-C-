#ifndef ANIMAL_H
#define ANIMAL_H


#include <string>
using namespace std;

class Animal{
private:
    static int objectCountAnimal;
    string AnimalType;
    string AnimalName;
    int AnimalAge;
    int AnimalWeight;
    string AnimalBreed;
    string AnimalColor;
    string AnimalSound;

public:
    Animal(const string& type, const string& name, int& age, int& weight, const string& breed, const string& color, const string& health, const string& sound);
    Animal();

    static int getObjectCountAnimal();

    void Introduction();
};
#endif
