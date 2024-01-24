#include<iostream>
using namespace std;

class Animal {
    public:
        void speak() {
        // virtual void speak() {
            cout << "Speaking..." << endl;
        }
};

class Dog: public Animal {
    public:
        // Function orver riding at run time
        void speak() {
            cout << "Barking..." << endl;
        }
};


int main() {

    // up casting
    /*
    if we don't use virtual in the parent class then the pointer speak 
    funtion will be called else object speak function will be called.
    */ 
    Animal* c = new Dog();
    c->speak();

    // down casting
    Dog* d = (Dog* ) new Animal();
    d->speak();

    cout << endl << endl << endl;
    return 0;
}
