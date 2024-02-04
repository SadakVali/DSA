#include<bits/stdc++.h>
using namespace std;

vector<int> next_immedi_smaller_ele(vector<int> &vec) {
    vector<int> ans(vec.size());
    stack<int> st;
    st.push(-1);
    for (int index=vec.size()-1; index>=0; --index) {
        int ele = vec[index];
        while (st.top() >= ele)
            st.pop();
        ans[index] = st.top();
        st.push(ele);
    }
    return ans;
};

vector<int> prev_immedi_smaller_ele(vector<int> &vec) {
    vector<int> ans(vec.size());
    stack<int> st;
    st.push(-1);
    for (int index=0; index<vec.size(); ++index) {
        int ele = vec[index];
        while (st.top() >= ele)
            st.pop();
        ans[index] = st.top();
        st.push(ele);
    }
    return ans;
};


void print_vec(vector<int> &vec) {
    for (int ele : vec) 
        cout << ele << " ";
    cout << endl;
};


int main() {

    vector<int> inp = {2,1,3,4,3,2};

    vector<int> ans1 = next_immedi_smaller_ele(inp);
    vector<int> ans2 = prev_immedi_smaller_ele(inp);

    cout << "Next Immediate Smaler Elements..." << endl;
    print_vec(ans1);
    cout << "Prev Immediate Smaler Elements..." << endl;
    print_vec(ans2);

    cout << endl << endl << endl;
    return 0;
}
