#include<bits/stdc++.h>
using namespace std;

string deceode_string(string &str) {
    stack<string> st;
    for (char ch : str) {
        if (ch == ']') {
            string string_to_repeate = "";
            while (!st.empty() && (st.top() != "[")) {
                string_to_repeate += st.top();
                st.pop();
            }
            if (!st.empty()) st.pop();
            string num_of_times = "";
            while (!st.empty() && isdigit(st.top()[0])) {
                num_of_times += st.top();
                st.pop();
            }
            reverse(num_of_times.begin(), num_of_times.end());
            int n = stoi(num_of_times);
            // decoding
            string current_decode = string_to_repeate;
            while (--n) 
                current_decode += string_to_repeate;
            st.push(current_decode);
        }
        else {
            string temp(1, ch);
            st.push(temp);
        }
    }
    string ans;
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
};


// https://leetcode.com/problems/decode-string/description/
int main() {

    string str = "3[a]2[bc]";
    cout << deceode_string(str) << endl;

    cout << endl << endl << endl;
    return 0;
}
