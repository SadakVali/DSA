#include <iostream>
using namespace std;

// printing solid square
int main() {
  // declaration of variables
  int size;
  //  Take rows
  cout << "Size of the Square : ";
  cin >> size;
  cout << endl;

  // outer loop - row observe
  for (int row = 0; row < size; row += 1) {
    // inner loop - col observe
    for (int col = 0; col < size; col += 1) {
      cout << "* ";
    }
    cout << endl;
  }

  cout << endl;
  cout << endl;
  cout << endl;
  return 0;
}
