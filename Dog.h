#ifndef DOG_H
#define DOG_H

#include <string>

class Dog {
private:
    static int objectCountDog;
    std::string DogName;
    int DogAge;
    int DogWeight;
    std::string DogBreed;
    std::string DogColor;
    std::string DogSound;

public:
    Dog(const std::string& name, int age, int weight, const std::string& breed, const std::string& color, const std::string& health, const std::string& sound);

    Dog();

    static int getObjectCountDog();

    void Introduction();
};
#endif
