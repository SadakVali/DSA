#include <iostream>
using namespace std;

int find_max(int a, int b, int c) {
    if(a > b && b > c) {
        return a;
    } else if(b > a && b > c) {
        return b;
    } else {
        return c;
    }
}

int main() {

    int a, b, c;
    cout << "Please enter 3 integer numbers : ";
    cin >> a >> b >> c;
    cout << endl;

    int res = find_max(a, b, c);
    cout << res << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
