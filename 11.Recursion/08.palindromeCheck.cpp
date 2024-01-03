#include<iostream>
#include<chrono>
using namespace std;

bool is_this_palindrome(string &str, int start, int end) {
    if (start >= end) return true;
    if (str[start] != str[end]) return false;
    return is_this_palindrome(str, ++start, --end);
}


int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    string str = "racecar";
    // PROCESSING
    bool ans = is_this_palindrome(str, 0, str.size()-1);
    // OUTPUT
    cout << "Is it_palindrome : " << ans << endl;
    // ################## Your code ends below ####################
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time-start_time);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
