#include<iostream>
#include<chrono>
using namespace std;

void remove_all_occurances_of_sub_str(string &str, string &sub_str) {
    int pos = str.find(sub_str);
    if (pos == string::npos) return;
    str.erase(pos, sub_str.size());
    remove_all_occurances_of_sub_str(str, sub_str);
}


// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/
// TC => O(NM)*O(N/M) => O(N^2) & SC => O(N/M) Recursive Calls
int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    string str = "daabcbaabcbc";
    string sub_str = "abc";
    // PROCESSING
    remove_all_occurances_of_sub_str(str, sub_str);
    // OUTPUT
    cout << "After removing all occurances of sub string : " << str << endl;
    // ################## Your code ends below ####################
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time-start_time);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
