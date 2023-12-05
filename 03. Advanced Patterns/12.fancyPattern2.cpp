#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Size of the Pattern : ";
    cin >> size;
    cout << endl;

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < row + 1; col += 1) {
            cout << row + 1;
            if (col != row) {
                cout << "*";
            }
        }
        cout << endl;
    }
    for (int row = size - 1; row >= 0; row--) {
        for (int col = 0; col < row + 1; col += 1) {
            cout << row + 1;
            if (col != row) {
                cout << "*";
            }
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
