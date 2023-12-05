#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Number of Rows of Alphabet Palindrome : ";
    cin >> size;
    cout << endl;

    char result;

    // for (int row = 0; row < size; row++) {
    //     int col1 = 0;
    //     for (; col1 < row + 1; col1++) {
    //         result = 'A' + col1;
    //         cout << result << " ";
    //     }
    //     col1 -= 2;
    //     for (int col2 = col1; col2 >= 0; col2--) {
    //         result = 'A' + col2;
    //         cout << result << " ";
    //     }
    //     cout << endl;
    // }

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < row + 1; col++) {
            result = 'A' + col;
            cout << result << " ";
        }
        for (int col = row - 1; col >= 0; col--) {
            result = 'A' + col;
            cout << result << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
