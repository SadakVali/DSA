#include<iostream>
using namespace std;

// here we have encapsulated properties age, weight and function eat 
// within a class, brackets.
class Animal {
    public:
        int age;
        int weight;
        void eat() {
            cout << "Eating started..." << endl;
        }
};


int main() {
    cou t<< "Hello Encapsulation..." << endl;
    cout << endl << endl << endl;
    return 0;
}
