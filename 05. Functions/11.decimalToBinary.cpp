#include <iostream>
#include <cmath>
using namespace std;

int decimal_to_binary1 (int in_deci_num) {
    // devision method ::: for in_deci_num = 10 ===> binary_equivalent = 1010
    int binary_equivalent = 0;
    short position = 0;
    while (in_deci_num) { 
        short bit = in_deci_num % 2;
        in_deci_num /= 2;
        binary_equivalent += bit * pow(10, position++);
    }
    return binary_equivalent;
}

int decimal_to_binary2 (int in_deci_num) {
    // bitwise method
    int binary_equivalent = 0;
    short position = 0;
    while (in_deci_num) {
        short bit = in_deci_num & 1;
        in_deci_num = in_deci_num >> 1;
        binary_equivalent += bit * pow(10, position++);
    }
    return binary_equivalent;
}

int main() {

    int in_deci_num;
    cout << "Enter the Decimal Number : ";
    cin >> in_deci_num;
    cout << endl;

    int binary_equivalent = decimal_to_binary1(in_deci_num);
    // int binary_equivalent = decimal_to_binary2(in_deci_num);
    cout << binary_equivalent << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
