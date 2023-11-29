#include <iostream>
using namespace std;

// printing solid rectangle
int main() {
  // initialization of variables
  int rows, cols;
  //  Take rows
  cout << "Number of Rows : ";
  cin >> rows;
  // Take cols
  cout << "Number of Cols : ";
  cin >> cols;

  cout << endl;
  // outer loop - row observe
  for (int row = 0; row < rows; row++) {
    // inner loop - col observe
    for (int col = 0; col < cols; col++) {
      if (row == 0 || col == 0 || row == rows - 1 || col == cols - 1){
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
