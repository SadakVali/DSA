#include <iostream>
using namespace std;

int max(int a, int b) {
    if(a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {

    int a;
    cout << "Please Enter a value : ";
    cin >> a;
    cout << endl;

    int b;
    cout << "Please Enter a value : ";
    cin >> b;
    cout << endl;

    int res = max(a, b);
    cout << res << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
