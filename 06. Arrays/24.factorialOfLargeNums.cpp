#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> factorial (int num) {
    vector<int> fact;
    fact.push_back(1);
    int carry = 0;
    for (int i=2; i<=num; i++) {
        for (int j=0; j<fact.size(); j++) {
            int digit_mult = (i * fact[j]) + carry;
            fact[j] = digit_mult % 10;
            carry = digit_mult / 10;
        }
        while (carry) {
            fact.push_back(carry % 10);
            carry /= 10;
        }
        carry = 0;
    }
    reverse(fact.begin(), fact.end());
    return fact;
}

void print_arr (vector<int> & arr) {
    for (int i=0; i<arr.size(); i++) {
        cout << arr[i];
    }
    cout << endl;
}

int main() {

    int num = 1000;
    vector<int> fact = factorial(num);
    print_arr(fact);

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
