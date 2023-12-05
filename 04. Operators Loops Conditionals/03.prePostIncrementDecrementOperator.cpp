#include <iostream>
using namespace std;

int main() {
    // ++a ===> first do increment then use the value
    // a++ ===> first use the value then do increment
    // --a ===> first do decrement then use the value
    // a-- ===> first use the value then do decrement

    int a = 5;

    cout << "a ===> " << a << endl; // 5
    cout << "++a ===> " << ++a << endl; // 6
    cout << "a ===> " << a << endl; // 6
    cout << "a++ ===> " << a++ << endl; // 6
    cout << "a ===> " << a << endl; // 7

    cout << endl;

    cout << "a ===> " << a << endl; // 7
    cout << "--a ===> " << --a << endl; // 6
    cout << "a ===> " << a << endl; // 6
    cout << "a-- ===> " << a-- << endl; // 6
    cout << "a ===> " << a << endl; // 5

    cout << endl;

    // interesting questions. input a value is 5
    cout << "a ===> " << a << endl; // 5
    cout << "++a*++a ===> " << (++a)*(++a) << endl; // 49
    cout << "a++*a++ ===> " << (a++)*(a++) << endl; // 56

    cout << endl;

    cout << "a ===> " << a << endl; // 9
    cout << "++a + 1 ===> " << ++a + 1 << endl; // 11
    cout << "a++ + 1 ===> " << a++ + 1 << endl; // 11
    cout << "a ===> " << a << endl; // 11

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
