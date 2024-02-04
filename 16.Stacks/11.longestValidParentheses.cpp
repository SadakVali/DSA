#include<bits/stdc++.h>
using namespace std;

int find_size_of_longest_valid_parentheses(string &str) {
    stack<int> st;
    st.push(-1);
    int max_size = 0;
    for (int i=0; i<str.size(); ++i) {
        char ch = str[i];
        if (ch == '(') {
            st.push(i);
        } else {
            st.pop();
            if (st.empty()) {
                st.push(i);
            }
            else {
                int len = i - st.top();
                max_size = max(max_size, len);
            }
        }
    }
    return max_size;
};


// https://leetcode.com/problems/longest-valid-parentheses/
int main() {

    string str = ")(()(()(()";
    int ans = find_size_of_longest_valid_parentheses(str);
    cout << "The Longest Valid Parentheses Size : " << ans << endl;

    cout << endl << endl << endl;
    return 0;
}
