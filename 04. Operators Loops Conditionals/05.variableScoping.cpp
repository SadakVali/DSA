#include <iostream>
using namespace std;

// why using global variables is bad practice?
int global_variable = 1000;

int main() {

    int a = 10;
    cout << a << endl; // 10
    cout << global_variable << endl; // 1000

    {
        int a = 3;
        cout << a << endl; // 3
        
        int global_variable = 1;
        cout << global_variable << endl; // 1
    }

    cout << a << endl; // 10
    cout << global_variable << endl; // 1000

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
