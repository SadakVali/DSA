#include <iostream>
using namespace std;
int main() {
  int a = 97.1;
  cout << "int : " << sizeof(a) << " Bytes for value " << a << endl;

  short b = 97.1;
  cout << "short : " << sizeof(b) << " Bytes for value " << b << endl;

  char c = 97.1;
  cout << "char : " << sizeof(c) << " Bytes for value " << c << endl;

  bool d = 97.1;
  cout << "bool : " << sizeof(d) << " Bytes for value " << d << endl;

  float e = 97.1;
  cout << "float : " << sizeof(e) << " Bytes for value " << e << endl;

  double f = 97.1;
  cout << "double : " << sizeof(f) << " Bytes for value " << f << endl;

  long g = 97.1;
  cout << "long : " << sizeof(g) << " Bytes for value " << g << endl;

  long long h = 97.1;
  cout << "long long : " << sizeof(h) << " Bytes for value " << h << endl;

  cout << endl;
  cout << endl;
  cout << endl;
  return 0;
}
