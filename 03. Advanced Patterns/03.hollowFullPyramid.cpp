#include <iostream>
using namespace std;

int main() {
  int size;
  cout << "Enter the size of the Pyramid : ";
  cin >> size;
  cout << endl;

  // observing each row
  for (int row = 0; row < size; row += 1) {
    // observing each col
    for (int space = 0; space < (size - 1 - row); space += 1) {
      cout << " ";
    }
    for (int col = 0; col < (row + 1); col += 1) {
      if (row == 0 || row == size - 1 || col == 0 || col == row) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }

  cout << endl;
  cout << endl;
  cout << endl;
  return 0;
}
