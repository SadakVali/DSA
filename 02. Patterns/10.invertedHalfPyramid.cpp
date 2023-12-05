#include <iostream>
using namespace std;

int main() {
  int size;
  cout << "Enter the size of the Half Pyramid : ";
  cin >> size;
  cout << endl;

  // observing each row
  for (int row = size; row > 0; row -= 1) {
    // observing - each column
    for (int col = 0; col < row; col += 1) {
      cout << "* ";
    }
    cout << endl;
  }
  
  cout << endl;
  cout << endl;
  cout << endl;
  return 0;
}
