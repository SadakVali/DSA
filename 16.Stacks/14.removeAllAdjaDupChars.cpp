#include<bits/stdc++.h>
using namespace std;

// TC ===> O(n) and SC ===> O(n)
string removeAllAdjascentDupliChrs (string &str) {
    stack<char> st;
    for (char ch : str) {
        // BELOW 8 COMMENTED LINES IS EQUIVALENT TO THE 2 UNCOMMENTED LINES
        // if (st.empty) {
        //     st.push(ch);
        // } else {
        //     if (st.top() == ch)
        //         st.pop();
        //     else
        //         st.push(ch);
        // }
        if (!st.empty() && (st.top() == ch)) st.pop();
        else st.push(ch);
    }
    string ans= "";
    while (!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
};


// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/submissions/1163827261/
int main() {
    string str = "azxxzy";
    string ans = removeAllAdjascentDupliChrs(str);
    cout << "All Duplicate Chras been removed : " << ans << endl;
    cout << endl << endl << endl;
    return 0;
}
