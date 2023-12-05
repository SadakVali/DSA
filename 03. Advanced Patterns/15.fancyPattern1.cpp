#include <iostream>
using namespace std;

int main() {

    int size;
    cout << "Number of Rows in the Fancy Pattern : ";
    cin >> size;
    cout << endl;

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < (size - row + 3); col++) {
            cout << '*';
        }
        for (int col = 0; col < (row + 1); col++) {
            cout << row + 1;
            if (col != row) {
                cout << '*';
            }
        }
        for (int col = 0; col < (size - row + 3); col++) {
            cout << '*';
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
