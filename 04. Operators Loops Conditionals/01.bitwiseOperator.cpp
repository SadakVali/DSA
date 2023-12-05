#include <iostream>
using namespace std;

int main() {
    // bitwise operators AND(&), OR(|), NOT(~), and XOR(^)
    bool a = true;
    bool b = false;
    bool c = true;

    cout << "(a & b) ===> " << (a & b) << endl; 
    cout << "(a & c) ===> " << (a & c) << endl;
    cout << endl;

    cout << "(a | b) ===> " << (a | b) << endl;
    cout << "(a | c) ===> " << (a | c) << endl;
    cout << endl;

    cout << "(a ^ b) ===> " << (a ^ b) << endl;
    cout << "(a ^ c) ===> " << (a ^ c) << endl;
    cout << endl;

    cout << "!a ===> " << !a << endl;
    cout << "!b ===> " << !b << endl;
    cout << "~a ===> " << ~a << endl;
    cout << "~b ===> " << ~b << endl;
    cout << endl;

    cout << "(2 & 3) ===> " << (2 & 3) << endl;
    cout << "(5 & 10) ===> " << (5 & 10) << endl;
    cout << "(2 | 3) ===> " << (2 | 3) << endl;
    cout << "(5 | 10) ===> " << (5 | 10) << endl;
    cout << "(2 ^ 3) ===> " << (2 ^ 3) << endl;
    cout << "(5 ^ 10) ===> " << (5 ^ 10) << endl;
    cout << endl;

    // to identify the non repeating number
    int result = (1 ^ 2 ^ 3 ^ 42 ^ 1 ^ 42 ^ 2);
    cout << result;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
