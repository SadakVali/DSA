#include <iostream>
using namespace std;
int main()
{
  // printing solid rectangle
  // initialization of variables
  int rows, cols;
  //  Take rows
  cout << "Number of Rows : ";
  cin >> rows;
  cout << endl;
  // Take cols
  cout << "Number of Cols : ";
  cin >> cols;
  cout << endl;
  // outer loop - row observe
  for (int row = 0; row < rows; row++)
  {
    // inner loop - col observe
    for (int col = 0; col < cols; col++)
    {
      cout << "*";
    }
    cout << endl;
  }
}