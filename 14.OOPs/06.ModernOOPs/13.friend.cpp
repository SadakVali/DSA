#include<iostream>
using namespace std;

/*
1. Friend is a keyword in C++ that is used to share the information of 
a class that was previously hidden.
2. For example, the private members of a class are fidden from every 
other class and can not be accessed/modified except through getters or 
setters. Similarly, the protected members are hidden from all the 
classes other than it's children classes.
*/

class A {
    private:
        int x;
    public:
        A(int _val) : x(_val){};
        int get_x() const {
            return this->x;
        };
        void set_x(int _val) {
            this->x = _val;
        };
    friend class B;
    friend void print(const A &);
};

class B {
    public:
        void print(const A &a) {
            // cout << a.get_x() << endl;
            cout << a.x << endl;
        };
};

void print(const A &a) {
    cout << a.x << endl;
}

int main() {

    A a(5);
    B b;
    b.print(a);
    print(a);

    cout << endl << endl << endl;
    return 0;
}
