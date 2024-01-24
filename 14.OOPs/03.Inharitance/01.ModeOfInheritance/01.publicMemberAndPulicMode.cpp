#include<iostream>
using namespace std;

class Animal {
    public:
        int age;
};

class Dog: public Animal {};


int main() {
    Dog d1;
    cout << d1.age << endl;
    cout << endl << endl << endl;
    return 0;
}
