#include <iostream>
using namespace std;

// function declaration without body of the function
// a function should be atleast declared before using it
int add(int x, int y); // function declation or signature

int main() {

    int a;
    cout << "Enter the value of a : ";
    cin >> a;

    int b;
    cout << "Enter the value of b : ";
    cin >> b;

    int res = add(a, b);
    // to show the pass by value behaviour of return
    cout << res << " ===> " << &res << endl; 

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}

// function signature/declaration + definition
int add(int x, int y) {
    // return ===> pass by value
    // int res = x + y;
    // cout << res << " ===> " << &res << endl;
    // return res;
    return x + y;
}
