#include <iostream>
using namespace std;

int main() {
  // implicit type conversions
  char ch = 97;
  cout << ch << endl;

  int b = 'b';
  cout << b << endl;

  float d = 5.7;
  char cha = 'g';
  // float x = d + cha;
  char x = d + cha;
  cout << "Value of x is : " << x << endl;

  // explicit type conversion
  double e = 5.7;
  int x2 = (int)e + 2;
  cout << "Value of x2 is : " << x2 << endl << endl;

  cout << endl;
  cout << endl;
  cout << endl;
  return 0;
}