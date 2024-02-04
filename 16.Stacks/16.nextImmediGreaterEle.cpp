#include<bits/stdc++.h>
using namespace std;

void next_immedi_great_ele(vector<int> &inp, vector<int> &ans) {
    stack<int> st;
    for (int id=0; id<inp.size(); ++id) {
        while (!st.empty() && (inp[id] > inp[st.top()])) {
            ans[st.top()] = inp[id];
            st.pop();
        }
        st.push(id);
    }
    while (!st.empty()) {
        ans[st.top()] = 0;
        st.pop();
    }
    ans[ans.size()-1] = 0;
};

void next_immedi_smaller_ele(vector<int> &inp, vector<int> &ans) {
    stack<int> st;
    for (int id=0; id<inp.size(); ++id) {
        while (!st.empty() && (inp[id] < inp[st.top()])) {
            ans[st.top()] = inp[id];
            st.pop();
        }
        st.push(id);
    }
    while (!st.empty()) {
        ans[st.top()] = 0;
        st.pop();
    }
    ans[ans.size()-1] = 0;
};

void print_vec(vector<int> &ans) {
    for (int ele : ans) 
        cout << ele << " ";
    cout << endl;
};


int main() {
    vector<int> inp = {2, 1, 5};
    vector<int> ans(inp.size());
    next_immedi_great_ele(inp, ans);
    print_vec(ans);
    next_immedi_smaller_ele(inp, ans);
    print_vec(ans);
    cout << endl << endl << endl;
    return 0;
}
