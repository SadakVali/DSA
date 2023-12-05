#include <iostream>
using namespace std;

int main() {
  int size;
  cout << "Enter the size of the Pyramid : ";
  cin >> size;
  cout << endl;

  // observing each row
  for (int row = size - 1; row >= 0; row -= 1) {
    // observing each col
    for (int space = 0; space < (size - row - 1); space += 1) {
      cout << " ";
    }
    for (int col = 0; col < (row + 1); col += 1) {
      cout << "* ";
    }
    cout << endl;
  }

  cout << endl;
  cout << endl;
  cout << endl;
  return 0;
}

