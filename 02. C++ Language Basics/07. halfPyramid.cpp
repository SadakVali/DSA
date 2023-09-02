#include <iostream>
using namespace std;

int main()
{
  int size;
  cout << "Enter the size of the Half Pyramid : ";
  cin >> size;
  // observing each row
  for (int row = 0; row < size; row += 1)
  {
    // observing each col
    for (int col = 0; col < row + 1; col += 1)
    {
      cout << "* ";
    }
    cout << endl;
  }
  cout << endl;
}