#include <iostream>
using namespace std;

int main()
{
  int size;
  cout << "Enter the size of the Half Pyramid : ";
  cin >> size;
  // observing each row
  for (int row = 6; row > 0; row -= 1)
  {
    // observing - each column
    for (int col = 0; col < row; col += 1)
    {
      cout << "* ";
    }
    cout << endl;
  }
  cout << endl;
}