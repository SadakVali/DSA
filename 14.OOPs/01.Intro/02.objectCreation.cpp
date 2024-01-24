#include<iostream>
using namespace std;

/*
1. Objects can be created in 2 ways 
    1. statically and 
    2. dynamically.
2. If Any property marked as public we can access it within the class 
    and also outside the class.
3. If Any property marked as private we can access it within the class 
    but not outside the class directly, but with getters and setters.
4. by default all the members that means properties and the functions 
    will be private.
5. There are 3 access modifiers
    1. public
    2. private and 
    3. protected
*/

class Animal {
    public: 
        // state or properties
        int age;
        int weight;
        string name;
        // behaviour or functions or methods
        void eat() {
            cout << "Eating started..." << endl;
        };
        void sleep() {
            cout << "Sleeeping Started..." << endl;
        };
};


int main() {
    // static
    Animal obj1;
    cout << obj1.age << endl;
    obj1.sleep();
    // dynamic
    cout << endl << endl << endl;
    return 0;
}
