#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter an integer : ";
    cin >> n;
    cout << endl;

    // while (n != 0) {
    // while (n > 0) {
    while (n) {
        int remainder = n % 10;
        cout << remainder << "  ";
        n /= 10;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
