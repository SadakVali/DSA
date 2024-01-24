#include<iostream>
#include<vector>
#include<chrono>
using namespace std;

void solve(vector<string> &all_ans, string &sing_ans, int open, int close) {
    if ((open == 0) && (close == 0)) {
        all_ans.push_back(sing_ans);
        return;
    }
    // include open bracket
    if (open > 0) {
        sing_ans.push_back('(');
        solve(all_ans, sing_ans, open-1, close);
        sing_ans.pop_back();
    }
    // include close bracket
    if (close > open) {
        sing_ans.push_back(')');
        solve(all_ans, sing_ans, open, close-1);
        sing_ans.pop_back();
    }
}


// https://leetcode.com/problems/generate-parentheses/description/
int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    int n=2;
    // PROCESSING
    vector<string> all_ans;
    string sing_ans = "";
    solve(all_ans, sing_ans, n, n);
    // OUTPUT
    for (auto str : all_ans) cout << str << endl;
    // ################## Your code ends below ####################
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time-start_time);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
