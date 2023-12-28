#include <iostream>
using namespace std;

int main() {
    char ch = 'k';
    char *cptr = &ch;
    cout << cptr << endl;
    cout << ch << endl;

    char *str = "sadiq Vali"; // Very bad practice
    cout << str <<  endl;

    cout << endl << endl << endl;
    return 0;
}
