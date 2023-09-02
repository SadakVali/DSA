#include <iostream>
using namespace std;

int main()
{
  int size;
  cout << "Enter the size of the Full Pyramid : ";
  cin >> size;
  // observing each row
  for (int row = size - 1; row >= 0; row -= 1)
  {
    // observing num col
    for (int col = 0; col <= (size - 1 + row); col += 1)
    {
      if (col < (size - 1 - row))
      {
        cout << " ";
      }
      else
      {
        cout << "* ";
        col += 1;
      }
    }
    cout << endl;
  }
  cout << endl;
}