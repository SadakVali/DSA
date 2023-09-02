#include <iostream>
using namespace std;

int main()
{
  // implicit type conversions
  char ch = 97;
  cout << ch << endl;

  int b = 'b';
  cout << b << endl;

  // explicit type conversion
  float d = 5.7;
  char cha = 'g';
  float x = d + cha;
  // char x = d + cha;
  cout << "Value of x is : " << x << endl;

  // double d = 5.7;
  // int x = d + 2; // (int)d + 2;
  // cout << "Value of x is : " << x << endl
  //      << endl;
}