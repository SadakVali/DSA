#include <iostream>
using namespace std;

// printing solid rectangle
int main() {
  // declaration of variables
  int size;
  //  Take rows
  cout << "Size of the Square : ";
  cin >> size;
  cout << endl;

  cout << endl;
  // outer loop - row observe
  for (int row = 0; row < size; row++) {
    // inner loop - col observe
    for (int col = 0; col < size; col++) {
      if (row == 0 || col == 0 || row == size - 1 || col == size - 1){
        cout << "* ";
      }
      else {
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
