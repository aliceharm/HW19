#include <iostream>
#include <vector>

using namespace std;


class Animal {
public:
    virtual void Voice() {
        cout << "Animal sound!" << endl;
    }
};


class Dog : public Animal {
public:
    void Voice() override {
        cout << "Woof!" << endl;
    }
};


class Cat : public Animal {
public:
    void Voice() override {
        cout << "Meow!" << endl;
    }
};


class Mouse : public Animal {
public:
    void Voice() override {
        cout << "Pee-pee!" << endl;
    }
};

int main() {
   
    vector<Animal*> animals;

    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Mouse());

    for (Animal* animal : animals) {
        animal->Voice();
    }

    for (Animal* animal : animals) {
        delete animal;
    }

    return 0;
}

