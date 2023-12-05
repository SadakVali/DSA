#include <iostream>
using namespace std;

int main() {

    int size;
    cout << "Enter the half size of the Diamond : ";
    cin >> size;
    cout << endl;

    // upper portion
    for (int row = size - 1; row >= 0; row -= 1) {
        // to print stars
        for (int star_idx = 0; star_idx < row + 1; star_idx += 1) {
            cout << "*";
        }
        // to print spaces
        for (int space_idx = 0; space_idx < 2*(size - row - 1); space_idx += 1) {
            cout << " ";
        }
        // to print stars
        for (int star_idx = 0; star_idx < row + 1; star_idx += 1) {
            cout << "*";
        }
        cout << endl;
    }
    // botoom portion
    for (int row = 0; row < size; row += 1) {
        // to print stars
        for (int star_idx = 0; star_idx < row + 1; star_idx += 1) {
            cout << "*";
        }
        // to print spaces
        for (int space_idx = 0; space_idx < 2*(size - row - 1); space_idx += 1) {
            cout << " ";
        }
        // to print stars
        for (int star_idx = 0; star_idx < row + 1; star_idx += 1) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
