#include <iostream>
using namespace std;

void someFunction(int a) {
    cout << "The Addrees of the input variable a is : " << &a << endl;
}

int main() {

    int a = 786;
    cout << "The Addrees of the created variable a is : " << &a << endl;

    someFunction(a);

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
