#include <iostream>
using namespace std;

int main() {
  int size;
  cout << "Enter the size of the Half Pyramid : ";
  cin >> size;
  // observing each row
  for (int row = 0; row < size; row += 1) {
    // observing each col
    for (int space = 0; space < (size - 1 - row); space += 1) {
      cout << " ";
    }
    for (int col = 0; col < (row + 1); col += 1) {
      cout << "* ";
    }
    cout << endl;
  }
  cout << endl;
}

// int main() {
//   int size;
//   cout << "Enter the size of the Full Pyramid : ";
//   cin >> size;
//   // observing each row
//   for (int row = 0; row < size; row += 1) {
//     // observing num col
//     for (int col = 0; col <= (size - 1 + row); col += 1) {
//       if (col < (size - 1 - row)) {
//         cout << " ";
//       }
//       else {
//         cout << "* ";
//         col += 1;
//       }
//     }
//     cout << endl;
//   }
//   cout << endl;
// }
