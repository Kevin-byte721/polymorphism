#include <iostream>
using namespace std;

class Animal {
    public:
        virtual void sound() {
            cout << "Animal sound" << endl;
        }
        virtual ~Animal() {}
};

class Dog:public Animal {
    void sound() override {
        cout << "arf arf arf" << endl; 
    }   
};

class Cat:public Animal {
    void sound() override {
        cout << "meow meow meow" << endl;
    }
};

int main() {
    Animal* animal = new Dog();
    animal->sound();
    delete animal;

    Animal* animal2 = new Cat();
    animal->sound();
    delete animal;
}