#include<iostream>
#include<chrono>
using namespace std;

bool is_it_a_match(string &source, int s_idx, string &pattern, int p_idx) {
    if ((s_idx == source.size()) && (p_idx == pattern.size())) return true;
    if ((s_idx == source.size()) && (p_idx < pattern.size())) {
        while (p_idx < pattern.size())
            if (pattern[p_idx++] != '*') return false;
        return true;
    }
    if ((source[s_idx] == pattern[p_idx]) || '?' == pattern[p_idx])
        return is_it_a_match(source, ++s_idx, pattern, ++p_idx);
    if (pattern[p_idx] == '*') {
        bool case1 = is_it_a_match(source, s_idx, pattern, p_idx+1);
        bool case2 = is_it_a_match(source, s_idx+1, pattern, p_idx);
        return case1 || case2;
    }
    return false;
}


// https://leetcode.com/problems/wildcard-matching/description/
// TC => O(2^N) & SC => O(N)
int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    string source = "bb";
    string pattern = "*c";
    // PROCESSING
    int s_idx = 0, p_idx = 0;
    bool ans = is_it_a_match(source, s_idx, pattern, p_idx);
    // OUTPUT
    cout << "Is this a perfect match : " << ans << endl;
    // ################## Your code ends below ####################
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time-start_time);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
