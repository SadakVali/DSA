#include<iostream>
using namespace std;

int main() {
    // // 1. we can not re-assign a constant variable
    // const int x = 5; // ERROR ::: x is a constant
    // x = 15;

    // // 2. CONST data, NON-CONST pointer
    // // using const before * makes the data constant
    // int const *a =  new int(2); // const int *a = new int(2);
    // cout << *a << endl;
    // *a = 20; // ERROR ::: content is CONST
    // int b = 20;
    // a = &b; // pointer can be reassigned
    // cout << *a << endl;

    // 3. CONST pointer, but NON-CONST data
    int *const a = new int(32);
    cout << *a << endl;
    *a = 20; // content can be changed
    int b = 50;
    // a = &b; // ERROR ::: pointer is CONST
    cout << *a << endl;

    // // 4. CONST pointer & CONST data
    // int const *const a = new int(60);
    // cout << *a << endl;
    // *a = 100; // ERROR ::: content CONST
    // int b = 200;
    // a = &b; // ERROR ::: pointer CONST

    cout << endl << endl << endl;
    return 0;
}
