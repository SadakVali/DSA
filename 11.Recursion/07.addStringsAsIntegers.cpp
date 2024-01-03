#include<iostream>
#include<chrono>
#include<algorithm>
using namespace std;

void add_integers(string &num1, int &idx1, string &num2, int &idx2, string &sum, int carry=0) {
    if ((idx1 < 0) && (idx2 < 0)) {
        if (carry) sum.push_back(carry+'0');
        return;
    }
    int n1 = idx1>=0 ? num1[idx1]-'0' : 0;
    int n2 = idx2>=0 ? num2[idx2]-'0': 0;
    int curr_sum = n1+n2+carry;
    carry = curr_sum / 10;
    sum.push_back((curr_sum % 10)+'0');
    add_integers(num1, --idx1, num2, --idx2, sum, carry);
}


// https://leetcode.com/problems/add-strings/description/
int main() {
    auto start = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    string num1 = "12234", num2 = "24";
    // PROCESSING
    string sum = "";
    int idx1=num1.size()-1, idx2=num2.size()-1;
    add_integers(num1, idx1, num2, idx2, sum);
    reverse(sum.begin(), sum.end());
    // OUTPUT
    cout << "The Sum of 2 Integers is : " << sum << endl;
    // ################## Your code ends below ####################
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end-start);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
