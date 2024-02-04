#include<bits/stdc++.h>
using namespace std;

// TC ===> O(n^2) & SC ===> O(n)
bool is_it_valid_1(string &str) {
    if (str.size() == 0) return true;
    int found_sub_str_id = str.find("abc");
    if (found_sub_str_id != string::npos) {
        string left = str.substr(0, found_sub_str_id);
        string right = str.substr(found_sub_str_id+3, str.size());
        str = left+right;
        return is_it_valid_1(str);
    }
    return false;
}

// TC ===> O(n) & SC ===> O(n)
bool is_it_valid_2(string &str) {
    if ((str[0] != 'a') || (str[str.size()-1] != 'c')) return false;
    stack<char> st;
    for (char ch : str) {
        if (ch == 'a') {
            st.push('a');
        } else if (ch == 'b') {
            if (!st.empty() && (st.top() == 'a')) {
                st.push('b');
            } else 
                return false;
        } else {
            if (!st.empty() && (st.top() == 'b')) {
                st.pop();
                if (!st.empty() && (st.top() == 'a')) {
                    st.pop();
                } else 
                    return false;
            } else 
                return false;
        }
    }
    return st.empty();
};


// https://leetcode.com/problems/check-if-word-is-valid-after-substitutions/description/
int main() {

    string str = "aabcbc";
    
    // bool is_it_valid__1 = is_it_valid_1(str);
    // cout << "Is it valid? : " << is_it_valid__1 << endl;

    bool is_it_valid__2 = is_it_valid_2(str);
    cout << "Is it valid? : " << is_it_valid__2 << endl;

    cout << endl << endl << endl;
    return 0;
}
