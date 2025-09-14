#include "Animal.h"
#include <iostream>
#include <string> //for string

//using namespace std;

int Animal::objectCountAnimal =0;

Animal::Animal(const std::string& type, const std::string &name, int age, int weight, const std::string &breed, const std::string &color, const std::string &health, const std::string &sound)
    : AnimalName(name), AnimalAge(age), AnimalWeight(weight), AnimalBreed(breed), AnimalColor(color), AnimalSound(sound)
{
    objectCountAnimal++;
}

int Animal::getObjectCountAnimal(){
    return objectCountAnimal;
}

void Animal::Introduction(){
    std::cout << "I am an Animal. My name is " << AnimalName << ". I am "
    << AnimalAge << " years old and I weight "
    << AnimalWeight << " pounds. My breed is "
    << AnimalBreed << ", my fur color is "
    << AnimalColor << ", and my sound is "
    << AnimalSound << ". It was good meeting you !" << std::endl;
}

