#include <iostream>
#include <fstream> // for file
#include <vector>
#include <string>

#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

using namespace std;

bool showFlowDebugging = true;

void showFlow(string msg)
{
    if (showFlowDebugging)
    {
        cout << endl;
        cout << msg << endl;
    }
}

bool OpenFile(ifstream &inputFile)
{
    string filename;
    cout << "Please enter a filename you would like to open: ";
    cin >> filename;

    inputFile.open(filename);

    while (!inputFile)
    {
        cout << "Couldn't find the file '" << filename << "'\nPlease enter a different file name (or type quit to exit) : ";
        cin >> filename;
        if (filename == "QUIT" || filename == "quit")
        {
            return false;
        }
        inputFile.open(filename);
        inputFile.clear();
    }

    cout << "File --- '" << filename << "' found and opened.\n" << endl;
    cout << "------------------------------------------------------" << endl;
    return true;
}

int main()
{

    ifstream inputFile;
    string textLine; // used to read from file
    string line;

    vector<Animal*> animals;
    vector<Cat*> cats;
    vector<Dog*> dogs;

    if (OpenFile(inputFile))
    {
        showFlow("Yay! the file has opened");

        getline(inputFile, line); // Read and discard the header line

        while (getline(inputFile, line))
        {
            string type, name, breed, color, health, sound;
            int weight, age; 

            getline(inputFile, type, ',');
            getline(inputFile, name, ',');
            inputFile >> age; inputFile.ignore(); // ignore comma
            inputFile >> weight; inputFile.ignore();
            getline(inputFile, breed, ',');
            getline(inputFile, color, ',');
            getline(inputFile, health, ',');
            getline(inputFile, sound, ',');

            if (line == "dog") {
                Dog* dog = new Dog(name, age, weight, breed,color,health,sound);
                dogs.push_back(dog);
            }
            else if (line == "cat"){
                Cat* cat = new Cat(name, age, weight, breed,color,health,sound);
                cats.push_back(cat);
            }
            else {
                Animal* animal = new Animal(type, name, age, weight, breed,color,health,sound);
                animals.push_back(animal);
            }
        }
    }

    std::cout << "Total number of animals created: " << Animal::getObjectCountAnimal() << std::endl;
    std::cout << "Number of cats created: " << Cat::getObjectCountCat() << std::endl;
    std::cout << "Number of dogs created: " << Dog::getObjectCountDog() << std::endl;

    // Report 2
    std::cout << "Animal report:" << std::endl;
    for (const auto& animal : animals) {
        animal->Introduction();
    }

    // Report 3
    std::cout << "Cat report:" << std::endl;
    for (const auto& cat : cats) {
        cat->Introduction();
    }

    // Report 4
    std::cout << "Dog report:" << std::endl;
    for (const auto& dog : dogs) {
        dog->Introduction();
    }

    // Clean up
    for (const auto& animal : animals) {
        delete animal;
    }
    cats.clear();
    dogs.clear();
    animals.clear();

    return 0;

}