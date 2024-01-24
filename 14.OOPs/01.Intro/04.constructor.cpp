#include<iostream>
using namespace std;

/*
object constructor
    1. No return type
    2. Name is same as class
    3. it is used to initialize the newly created object
*/
// we use getters and setter to access the private data members
class Animal {
    private: 
        // state or properties
        int age;
        int weight;
        string name;
    public:
        // default constructor
        Animal() {
            cout << "Constructor called..." << endl;
            this->age = 0;
            this->weight = 0;
            this->name = "";
        }
        // parameterized constructor
        Animal(int age) {
            cout << "Single Parameter constructor called..." << endl;
            this->age = age;
        }
        Animal(int age, int weight, string name) {
            cout << "All Parameters constructor called..." << endl;
            this->age = age;
            this->weight = weight;
            this->name = name;
        }
        // copy constructor
        Animal(Animal &obj) {
            cout << "Copy Constructor called..." << endl;
            this->age = obj.age;
            this->name = obj.name;
            this->weight = obj.weight;
        }
};


int main() {
    // default constructor
    Animal obj1;
    Animal* obj2 = new Animal;
    // parameterized constructor
    Animal obj3(24);
    Animal obj4(24, 75, "Sadiq");
    Animal* obj5 = new Animal(24, 75, "Sadiq");
    // copy constructor
    Animal obj6 = obj4;
    Animal obj7(obj6);

    cout << endl << endl << endl;
    return 0;
}
