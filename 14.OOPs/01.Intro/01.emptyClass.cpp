#include<iostream>
using namespace std;

class EmptyClass {};


int main() {

    int size = sizeof(EmptyClass);
    cout << "Size of the empty class is : " << size << endl;

    cout << endl << endl << endl;
    return 0;
}
