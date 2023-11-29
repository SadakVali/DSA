#include <iostream>
using namespace std;

int main() {
  int size;
  cout << "Enter the size of the Half Pyramid : ";
  cin >> size;
  cout << endl;

  // observing each row
  for (int row = 0; row < size; row += 1) {
    // observing each col
    for (int col = 0; col < row + 1; col += 1) {
      cout << col + 1 << " ";
    }
    cout << endl;
  }
  
  cout << endl;
  cout << endl;
  cout << endl;
  return 0;
}
