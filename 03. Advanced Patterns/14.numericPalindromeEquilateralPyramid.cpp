#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Number of Rows of Numeric Palindrome : ";
    cin >> size;
    cout << endl;

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < (size - row - 1); col++) {
            cout << "  ";
        }
        for (int col = 0; col < row + 1; col++) {
            cout << col + 1 << ' ';
        }
        for (int col = row; col > 0; col--) {
            cout << col << ' ';
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
