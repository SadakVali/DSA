#include<iostream>
using namespace std;

class Animal {
    public:
        void speak() {
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

    Animal obj1;
    obj1.speak();

    Dog obj2;
    obj2.speak();

    Animal* a = new Animal();
    a->speak();

    Dog* b = new Dog();
    b->speak();

    cout << endl << endl << endl;
    return 0;
}
