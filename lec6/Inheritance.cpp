//
// Created by Denys Prokhorin on 31.08.2022.
//

// C++ program to demonstrate inheritance

#include <iostream>
#include <list>

using namespace std;

// base class
class Animal {

public:

    virtual string getType() {
        return "Animal";
    }

    void eat() {
        cout << "I can eat!" << endl;
    }

    void sleep() {
        cout << "I can sleep!" << endl;
    }
};

// derived class
class Dog : public Animal {

public:
    void bark() {
        cout << "I can bark! Woof woof!!" << endl;
    }

    string getType() {
        return "Dog";
    }
};

void barkIfDog(Animal *a) {
    string type = a->getType();
    if (type == "Dog") {
        Dog *dog = (Dog *) a;
        dog->bark();
    }
}

int main() {
    list<Animal *> animals;
    // Create object of the Dog class
    Animal animal;
    animal.eat();
    animal.sleep();

    // Create object of the Dog class
    Dog dog1;
    dog1.eat();
    dog1.sleep();
    dog1.bark();

    animals.push_front(&animal);
    animals.push_front(&dog1);

    for (Animal *a: animals) {
        barkIfDog(a);
    }

    return 0;
}



