#include <iostream>
using namespace std;

string integer_to_roman (int &num) {
    string ans="";
    string roman_symbols[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    for (int i=0; i<13; i++) {
        while (num >= values[i]) {
            ans += roman_symbols[i];
            num -= values[i];
        }
    }
    return ans;
}


int main () {
    int num = 10;
    cout << integer_to_roman(num) << endl;
    cout << endl;
    return 0;
}
