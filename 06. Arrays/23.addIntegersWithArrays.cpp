#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string addition (vector<int> & arr1, vector<int> & arr2) {
    string sum;
    int carry = 0;
    int i = arr1.size()-1, j = arr2.size()-1;

    while (i>=0 && j >=0) {
        int digit_sum = arr1[i] + arr2[j] + carry;
        int digit = digit_sum % 10;
        sum.push_back(digit + '0');
        carry = digit_sum / 10;
        i--, j--;
    }
    while (i>=0) {
        int digit_sum = arr1[i] + carry;
        int digit = digit_sum % 10;
        sum.push_back(digit + '0');
        carry = digit_sum / 10;
        i--;
    }
    while (j>=0) {
        int digit_sum = arr2[j] + carry;
        int digit = digit_sum % 10;
        sum.push_back(digit + '0');
        carry = digit_sum / 10;
        j--;
    }
    if (carry) {
        sum.push_back(carry + '0');
    }

    while (sum[sum.size()-1] == '0') {
        sum.pop_back();
    }
    reverse(sum.begin(), sum.end());
    return sum;
}

void print_arr (vector<int> & arr) {
    for (int i=0; i<arr.size(); i++) {
        cout << arr[i];
    }
    cout << endl;
}

int main() {

    vector<int> arr1 = {1,2,3};
    vector<int> arr2 = {1,1,1};
    string sum = addition(arr1, arr2);
    cout << sum << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
