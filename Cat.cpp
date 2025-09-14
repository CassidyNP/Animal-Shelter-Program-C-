#include "Cat.h"
#include <iostream>
#include <string> //for string

//using namespace std;

int Cat::objectCountCat =0;

Cat::Cat(const std::string& name, int age, int weight, const std::string& breed, const std::string& color, const std::string& health, const std::string& sound)
    : CatName(name), CatAge(age), CatWeight(weight), CatBreed(breed), CatColor(color), CatHealth(health), CatSound(sound) {
    objectCountCat++;
}

int Cat::getObjectCountCat(){
    return objectCountCat;
}

void Cat::Introduction(){
    cout << "Meow ! I am a cat. My name is " << CatName << ". I am "
    << CatAge << " years old and I weight "
    << CatWeight << " pounds. My breed is "
    << CatBreed << ", my furr color is "
    << CatColor << ", and my sound is "
    << CatSound << ". It was good meeting you !" << endl;
}
