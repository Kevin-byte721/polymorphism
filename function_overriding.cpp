#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    virtual void makeSound() const {
        cout << "Generic animal sound." << endl;
    }
    virtual string getDescription() const {
        return "This is a generic animal.";
    }
    void move() const {
        cout << "Animal moves." << endl;
    }
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "Woof!" << endl;
    }
    string getDescription() const override {
        return "This is a dog, a domesticated canine.";
    }
    void wagTail() const {
        cout << "Dog wags its tail." << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "Meow!" << endl;
    }
    string getDescription() const override {
        return "This is a cat, a graceful feline.";
    }
    void purr() const {
        cout << "Cat purrs." << endl;
    }
};

void animalSpeak(const Animal& animal) {
    cout << "The animal says: ";
    animal.makeSound();
    cout << "Description: " << animal.getDescription() << endl;
}

int main() {
    Animal* animalPtr;

    Animal genericAnimal;
    Dog myDog;
    Cat myCat;

    cout << "--- Using base class object ---" << endl;
    genericAnimal.makeSound();
    cout << "Description: " << genericAnimal.getDescription() << endl;
    genericAnimal.move();

    cout << "\n--- Using Dog object through a base class pointer ---" << endl;
    animalPtr = &myDog;
    animalPtr->makeSound();
    cout << "Description: " << animalPtr->getDescription() << endl;
    animalPtr->move();

    cout << "\n--- Using Cat object through a base class pointer ---" << endl;
    animalPtr = &myCat;
    animalPtr->makeSound();
    cout << "Description: " << animalPtr->getDescription() << endl;
    animalPtr->move();

    cout << "\n--- Using the animalSpeak function (polymorphism) ---" << endl;
    animalSpeak(genericAnimal);
    animalSpeak(myDog);
    animalSpeak(myCat);

    return 0;
}