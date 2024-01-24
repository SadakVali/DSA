#include<iostream>
using namespace std;

class Animal {
    private:
        int age;
};

class Dog: public Animal {
    // private data members can not be inherited in child class
    public:
        int get_age() {
            return this->age;
        }
};


int main() {
    Dog d1;
    // cout << d1.age << endl;
    cout << d1.get_age() << endl;
    cout << endl << endl << endl;
    return 0;
}
