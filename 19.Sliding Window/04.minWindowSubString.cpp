#include<bits/stdc++.h>
using namespace std;

string find_min_window_sub_string (string &str, string &pattern) {
    if (str.size() < pattern.size()) return "";
    int ans_index = -1, ans_len = INT32_MAX;
    // to keep track of frequency of characters present in the pattern
    unordered_map<char, int> pat_mp;
    for (char &ch : pattern)
        ++pat_mp[ch];
    // to keep track of frequency of characters present in current window
    unordered_map<char, int> str_mp;
    int count = 0; // to keep track of, how many characters of pattern present in the current window
    int window_start = 0;
    for (int window_end = 0; window_end < str.size(); ++window_end) {
        char curr_char = str[window_end];
        ++str_mp[curr_char];
        if (str_mp[curr_char] <= pat_mp[curr_char])
            ++count;
        if (count == pattern.size()) {
            while (!pat_mp[str[window_start]] || (str_mp[str[window_start]] > pat_mp[str[window_start]])) {
                --str_mp[str[window_start]];
                ++window_start;
            }
            // update ans
            int length_of_window = window_end - window_start + 1;
            if (length_of_window < ans_len) {
                ans_len = length_of_window;
                ans_index = window_start;
            }
        }
    }
    return (ans_index == -1) ? "" : str.substr(ans_index, ans_len);
};


// https://leetcode.com/problems/minimum-window-substring/description/
int main() {

    string str = "ADOBECODEBANC";
    string pattern = "ABC";

    string ans = find_min_window_sub_string(str, pattern);
    cout << ans << endl;

    cout << endl << endl << endl;
    return 0;
}
