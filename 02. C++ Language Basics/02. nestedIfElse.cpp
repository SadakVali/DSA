#include <iostream>
using namespace std;

int main()
{
  int marks;
  cout << "Enter the marks you got : " << endl;
  cin >> marks;
  // if (marks >= 90)
  // {
  //   cout << "A Grade";
  // }
  // else if (marks >= 75)
  // {
  //   cout << "B Grade";
  // }
  // else if (marks >= 45)
  // {
  //   cout << "C Grade";
  // }
  // else
  // {
  //   cout << "F Grade";
  // }
  // cout << "\n\n";

  if (marks >= 90)
  {
    cout << "A Grade";
  }
  else
  {
    if (marks >= 75)
    {
      cout << "B Grade";
    }
    else
    {
      if (marks >= 45)
      {
        cout << "C Grade";
      }
      else
      {
        cout << "F Grade";
      }
      cout << "\n\n";
    }
  }
}