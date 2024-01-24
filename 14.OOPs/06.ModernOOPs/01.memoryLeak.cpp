#include<iostream>
using namespace std;

int main() {

    // handling memory leak(not related to const)
    int *a = new int(0);
    cout << *a << endl;
    *a = 2;
    cout << *a << endl;
    delete a; // deleting the heap variable, but not the stack variable
    int b = 5;
    a = &b;
    cout << *a << endl;

    cout << endl << endl << endl;
    return 0;
}
