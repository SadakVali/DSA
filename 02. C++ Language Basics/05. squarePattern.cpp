#include <iostream>
using namespace std;
int main()
{
  // printing solid square
  // initialization of variables
  int length;
  //  Take rows
  cout << "Size of the Square : ";
  cin >> length;
  cout << endl;
  // outer loop - row observe
  for (int row = 0; row < length; row++)
  {
    // inner loop - col observe
    for (int col = 0; col < length; col++)
    {
      cout << "*";
    }
    cout << endl;
  }
  cout << endl;
}