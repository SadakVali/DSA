#include<iostream>
using namespace std;

// "this" is a keyword and is a pointer to the current object.
// we use getters and setter to access the private data members
// new keyword creates a variable in heap and return a pointer to it.
class Animal {
    private: 
        // state or properties
        int age;
        int weight;
        string name;
    public:
        // behaviour or functions or methods
        int get_weight() {
            return this->weight;
        };
        void set_weight(int weight) {
            this->weight = weight;
        };
};


int main() {
    // static
    Animal obj1;
    obj1.set_weight(225);
    cout << obj1.get_weight() << endl;
    // dynamic
    Animal* obj2 = new Animal;
    (*obj2).set_weight(226);
    cout << (*obj2).get_weight() << endl;
    obj2->set_weight(227);
    cout << obj2->get_weight() << endl;

    cout << endl << endl << endl;
    return 0;
}
