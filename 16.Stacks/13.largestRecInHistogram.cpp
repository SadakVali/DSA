#include<bits/stdc++.h>
using namespace std;

void print_vec(vector<int> &vec) {
    for (int ele : vec) 
        cout << ele << " ";
    cout << endl;
};

vector<int> prev_imme_smmaller_ele(vector<int> &inp) {
    stack<int> st;
    st.push(-1);
    vector<int> ans(inp.size());
    for (int index=0; index < inp.size(); ++index) {
        int ele = inp[index];
        while (inp[st.top()] >= ele) 
            st.pop();
        ans[index] = st.top();
        st.push(index);
    }
    return ans;
};

vector<int> next_imme_smmaller_ele(vector<int> &inp) {
    stack<int> st;
    st.push(-1);
    vector<int> ans(inp.size());
    for (int index=inp.size()-1; index>=0; --index) {
        int ele = inp[index];
        while (inp[st.top()] >= ele)
            st.pop();
        ans[index] = st.top();
        st.push(index);
    }
    return ans;
};

int find_max_area_possible_from_histograms(vector<int> &heights) {
    vector<int> prev = prev_imme_smmaller_ele(heights);
    vector<int> next = next_imme_smmaller_ele(heights);
    int max_area = INT32_MIN;
    for (int index=0; index < heights.size(); ++index) {
        int height = heights[index];
        int width;
        if (next[index]==-1) 
            width = heights.size() - prev[index] - 1;
        else 
            width = next[index] - prev[index] - 1;
        max_area = max(max_area, width*height);
    }
    return max_area;
};


// https://leetcode.com/problems/largest-rectangle-in-histogram/description/
int main() {

    vector<int> heights = {2,1,3,4,3,2};

    int max_area = find_max_area_possible_from_histograms(heights);
    cout << "Max Area Possible : " << max_area << endl;

    cout << endl << endl << endl;
    return 0;
}
