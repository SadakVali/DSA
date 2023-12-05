#include <iostream>
#include <cmath>
using namespace std;

int binary_to_decimal1 (int in_binary_num) {
    int equivalent_deci_num = 0;
    short position = 0;
    while (in_binary_num) {
        int bit = in_binary_num % 10;
        in_binary_num /= 10;
        equivalent_deci_num += bit * pow(2, position++);
    }
    return equivalent_deci_num;
}

int binary_to_decimal2 (int in_binary_num) {
    int equivalent_deci_num = 0;
    short position = 0;
    while (in_binary_num) {
        int bit = in_binary_num & 1;
        in_binary_num /= 10;
        equivalent_deci_num += bit * pow(2, position++);
    }
    return equivalent_deci_num;
}

int main() {

    int in_binary_num;
    cout << "Please enter the binary number : ";
    cin >> in_binary_num;
    cout << endl;

    // int equivalent_deci_num = binary_to_decimal1(in_binary_num);
    int equivalent_deci_num = binary_to_decimal2(in_binary_num);
    cout << "Equivalent Decimal Number : " << equivalent_deci_num << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
