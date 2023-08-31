#include <iostream>
using namespace std;
int main()
{
  int a = 5;
  cout << "int : " << sizeof(a) << endl;

  short b = 5;
  cout << "short : " << sizeof(b) << endl;

  char c = 5;
  cout << "char : " << sizeof(c) << endl;

  bool d = 5;
  cout << "bool : " << sizeof(d) << endl;

  float e = 5;
  cout << "float : " << sizeof(e) << endl;

  double f = 5;
  cout << "double : " << sizeof(f) << endl;

  long g = 5;
  cout << "long : " << sizeof(g) << endl;

  long long h = 5;
  cout << "long long : " << sizeof(h) << endl
       << endl;
}