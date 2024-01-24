#include<iostream>
using namespace std;

int x = 2; // GLOBAL VARIABLE

void fun() {
    int x = 60;
    cout << x << endl;
    ::x = 44;
    cout << ::x << endl;
}

int main() {
    ::x = 4; // global x
    cout << x << endl;
    int x = 20; // locale to main function
    cout << x << endl;
    cout << ::x << endl; // accessing global with :: operator
    {
        int x = 50;
        {
            int x = 50;
            cout << x << endl;
        }
        cout << x << endl;
        cout << ::x << endl;
    }
    fun();
    cout << endl << endl << endl;
    return 0;
}
