#include <iostream>
using namespace std;

// Abstract class Animal
class Animal {
public:
    // Virtual function for speak(), which will be overridden in derived classes
    virtual void speak() = 0;
};

class Dog : public Animal {
public:
    // Override the speak function for Dog
    void speak() override {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    // Override the speak function for Cat
    void speak() override {
        cout << "Meow!" << endl;
    }
};

int main() {
    // Create objects of Dog and Cat
    Dog dog;
    Cat cat;

    // Call the speak method for both objects
    dog.speak();
    cat.speak();
}
