#include<iostream>
using namespace std;

class Animal {
    public:
        Animal() {
            cout << "Animal Constructor called..." << endl;
        }
};

class Dog: public Animal {
    public:
        Dog() {
            cout << "Dog Constructor called..." << endl;
        }
};


int main() {

    Animal* a = new Animal();
    cout << endl;

    Dog* b = new Dog();
    cout << endl;
    
    // up casting
    Animal* c = new Dog();
    cout << endl;
    
    // down casting
    Dog* d = (Dog* ) new Animal();

    cout << endl << endl << endl;
    return 0;
}
