#include<bits/stdc++.h>
using namespace std;

void build_ans(stack<string> &st, string &ans) {
    if (st.empty()) 
        return;
    string sub_path = st.top(); st.pop();
    build_ans(st, ans);
    ans += sub_path;
};

string simplify_path(string path) {
    stack<string> st;
    int i=0;
    while (i < path.size()) {
        int start = i;
        int end = i+1;
        while ((end < path.size()) && (path[end] != '/')) 
            ++end;
        i = end;
        string sub_path = path.substr(start, end-start);
        cout << sub_path << endl;
        if ((sub_path == "/") || (sub_path == "/."))
            continue;
        if (sub_path != "/..")
            st.push(sub_path);
        else if (!st.empty())
            st.pop();
    }
    string ans = st.empty() ? "/" : "";
    build_ans(st, ans);
    return ans;
};


// https://leetcode.com/problems/simplify-path/description/
// TC ===> O(n) & Sc ===> O(n)
int main() {

    string ans = simplify_path("/a/./b/../../c/");
    cout << "Simplified Path : " << ans << endl;

    cout << endl << endl << endl;
    return 0;
}
