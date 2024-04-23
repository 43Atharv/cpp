#include <iostream>

// Base class
class Animal {
protected:
    std::string name;

public:
    Animal(const std::string& name) : name(name) {}

    // Method to print the name
    void printName() {
        std::cout << "Name: " << name << std::endl;
    }

    // Virtual method for making sound
    virtual void makeSound() {
        std::cout << "Animal makes a sound" << std::endl;
    }
};

// Derived class Dog inheriting from Animal
class Dog : public Animal {
public:
    // Constructor for Dog
    Dog(const std::string& name) : Animal(name) {}

    // Overriding the makeSound method
    void makeSound() override {
        std::cout << "Dog barks" << std::endl;
    }
};

// Derived class Cat inheriting from Animal
class Cat : public Animal {
public:
    // Constructor for Cat
    Cat(const std::string& name) : Animal(name) {}

    // Overriding the makeSound method
    void makeSound() override {
        std::cout << "Cat meows" << std::endl;
    }
};

int main() {
    // Creating objects of derived classes
    Dog myDog("Buddy");
    Cat myCat("Whiskers");

    // Calling methods of base class
    myDog.printName();
    myDog.makeSound();

    myCat.printName();
    myCat.makeSound();

    return 0;
}
 
