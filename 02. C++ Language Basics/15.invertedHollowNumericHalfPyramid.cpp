#include <iostream>
using namespace std;

int main() {
  int size;
  cout << "Enter the size of the Pyramid : ";
  cin >> size;
  cout << endl;

  // oserving each row
  for (int row = size; row > 0; row -= 1) {
    // observing each col
    for (int col = 0; col < row; col += 1) {
      if (row == size || col == 0 || row == 1 || col == row - 1 ) {
        cout << col + 1 << " ";
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
