#include <iostream>
using namespace std;

int arrange_digits_in_reverse_order (int num) {
    int ans = 0;
    int INT_MAX = INT32_MAX / 10;
    bool is_negative = false;
    if (num <= INT32_MIN) {
        return 0;
    }
    if (num < 0) {
        num = -num;
        is_negative = true;
    }
    while (num) {
        if (ans > INT_MAX) {
            return 0;
        }
        int least_sig_digit = num % 10;
        num /= 10;
        ans = (ans * 10) + least_sig_digit;
    }
    return is_negative ? -ans : ans;
}

int main() {

    int num = -2147483646;

    int reverse_num = arrange_digits_in_reverse_order(num);
    cout << "Given Number " << num << " after arranging the Digits in reverse order " << reverse_num << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
