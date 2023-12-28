#include <iostream>
using namespace std;

int main () {
    char ch[20] = "Sadiq Vali";
    char *ptr = ch;

    cout << ch << endl;
    cout << &ch << endl;
    cout << ch[0] << endl;
    cout << &(ch[0]) << endl;
    cout << *ch << endl;
    cout << *(ch+3) << endl;

    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
    cout << *(ptr+3) << endl;
    cout << ptr+2 << endl;
    // cout << (*ptr)[0] << endl; // won't work

    cout << endl << endl << endl;
    return 0;
}
