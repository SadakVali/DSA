#include<bits/stdc++.h>
using namespace std;

int find_min_num_of_brackets_need_to_be_reversed(string &str) {
    if (str.size() & 1) return -1;
    stack<char> st;
    int ans = 0;
    for (char ch : str) {
        if (ch == '{') {
            st.push(ch);
        } else if ((ch == '}') && !st.empty()) {
            st.pop();
        } else {
            st.push(ch);
        }
    }
    // if stack is not empty, let's count reversals
    while (!st.empty()) {
        char a = st.top(); st.pop();
        char b = st.top(); st.pop();
        if (a == b) ++ans; // {{ ===> 1 reversal
        else ans += 2; // }{ ===> 2 reversals
    }
    return ans;
};


int main() {
    string str = "}{{}}{{{";
    int ans = find_min_num_of_brackets_need_to_be_reversed(str);
    cout << "minimum number of bracket reversals needed : " << ans << endl;
    cout << endl << endl << endl;
    return 0;
}
