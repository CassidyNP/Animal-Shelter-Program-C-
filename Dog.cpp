#include "Dog.h"
#include <iostream>
#include <string>

int Dog::objectCountDog = 0;

Dog::Dog(const std::string &name, int age, int weight, const std::string &breed, const std::string &color, const std::string &health, const std::string &sound)
    : DogName(name), DogAge(age), DogWeight(weight), DogBreed(breed), DogColor(color), DogSound(sound)
{
    objectCountDog++;
}

int Dog::getObjectCountDog()
{
    return objectCountDog;
}

void Dog::Introduction()
{
    std::cout << "Woof! I am a dog. My name is " << DogName << ". I am "
        << DogAge << " years old and I weigh "
        << DogWeight << " pounds. My breed is "
        << DogBreed << ", my fur color is "
        << DogColor << ", and my sound is "
        << DogSound << ". It was good meeting you!" << std::endl;
}
