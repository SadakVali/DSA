#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the Size of the Numeric Pyramid : ";
    cin >> size;
    cout << endl;

    for (int row = 0; row < size; row += 1) {
        for (int space_idx = 0; space_idx < size - row - 1; space_idx += 1) {
            cout << "  ";
        }
        int num1 = row + 1;
        for (; num1 <= 2*row + 1; num1 += 1) {
            cout << num1 << " ";
        }
        for (int num2 = num1 - 2; num2 >= (row + 1); num2 -= 1) {
            cout << num2 << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
