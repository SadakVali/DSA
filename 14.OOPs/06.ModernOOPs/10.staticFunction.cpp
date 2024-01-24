/*
static member function :::
    There is no instance of that class being passed into that method.
*/

#include<iostream>
using namespace std;

class abc {
    public:
        int x, y;
        abc() : x(0), y(0) {};
        static void print() {
            // "this" cann't be used here
            printf("I am in Static %s.\n", __FUNCTION__); 
        }
};


int main() {

    abc obj1;
    obj1.print(); // abc::print();

    abc obj2;
    obj2.print(); // abc::print();

    cout << endl << endl << endl;
    return 0;
};
