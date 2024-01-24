#include<iostream>
using namespace std;

class Animal {
    public:
        /*
        int age;
        1. No input parameter and no return type.
        2. destructor will be automatically called if you create static 
        object. If you created dynamic object then you have to manually 
        call the destructor.
        */
        ~Animal() {
            cout << "Destructor called..." << endl; 
        };
};


int main() {
    Animal a;
    a.age = 5;

    Animal *b = new Animal();
    b->age = 12;

    // manually call destructor
    delete b;
    return 0;
}
