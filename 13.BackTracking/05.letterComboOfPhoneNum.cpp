#include<iostream>
#include<vector>
#include<chrono>
using namespace std;

void solve(string &digits, int index, vector<string> &mapping, 
    string &output, vector<string> &ans
    ) {
        if (index == digits.size()) {
            ans.push_back(output);
            return;
        }
        int digit = digits[index]-'0';
        string chars = mapping[digit];
        for (int i=0; i<chars.size(); i++) {
            output.push_back(chars[i]); // include
            solve(digits, index+1, mapping, output, ans); // recursive
            output.pop_back(); // backtrack
        }
}


// https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    string digits = "2";
    // PROCESSING
    vector<string> ans;
    string output = "";
    vector<string> mapping(10);
    mapping[2] = "abc";
    mapping[3] = "def";
    mapping[4] = "ghi";
    mapping[5] = "jkl";
    mapping[6] = "mno";
    mapping[7] = "pqrs";
    mapping[8] = "tuv";
    mapping[9] = "wxyz";
    if (digits.size() > 0)
        solve(digits, 0, mapping, output, ans);
    // OUTPUT
    for (auto an : ans) cout << an << " ";
    cout << endl;
    // ################## Your code ends below ####################
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time-start_time);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
