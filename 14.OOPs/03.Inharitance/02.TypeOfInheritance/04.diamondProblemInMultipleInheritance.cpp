#include<iostream>
using namespace std;

/*
// known as inheritance ambiguty or diamond problem.
:: ===> is a scope resolution operator
*/

class A {
    public:
        int physics;
        int chemistry;
    A() {
        this->chemistry = 10;
    }
};

class B {
    public:
        int chemistry;
    B() {
        this->chemistry = 20;
    }
};

class C: public A, public B {
    public:
        int maths;
    //     int chemistry;
    // C() {
    //     this->chemistry = 30;
    // }
};

int main() {

    C obj;
    cout << obj.physics << " " << obj.chemistry << " " << obj.maths;
    // cout << obj.physics << " " << obj.A::chemistry << " " << obj.maths;
    // cout << obj.physics << " " << obj.B::chemistry << " " << obj.maths;
    // cout << obj.physics << " " << obj.C::chemistry << " " << obj.maths;

    cout << endl << endl << endl;
    return 0;
}
