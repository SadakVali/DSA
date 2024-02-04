#include<bits/stdc++.h>
using namespace std;

vector<int> prev_imme_smmaller_ele(vector<int> inp) {
    stack<int> st;
    st.push(-1);
    vector<int> ans(inp.size());
    for (int index=0; index < inp.size(); ++index) {
        int ele = inp[index];
        while ((st.top() != -1) && (inp[st.top()] >= ele)) 
            st.pop();
        ans[index] = st.top();
        st.push(index);
    }
    return ans;
};

vector<int> next_imme_smmaller_ele(vector<int> inp) {
    stack<int> st;
    st.push(-1);
    vector<int> ans(inp.size());
    for (int index=inp.size()-1; index>=0; --index) {
        int ele = inp[index];
        while ((st.top() != -1) && (inp[st.top()] >= ele))
            st.pop();
        ans[index] = st.top();
        st.push(index);
    }
    return ans;
};

int find_max_area_possible_from_histograms(vector<int> heights) {
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

int maximal_rectangle(vector<vector<char>> &matrix) {
    vector<vector<int>> mat;
    int n = matrix.size();
    int m = matrix[0].size();
    for (int i=0; i<n; ++i) {
        vector<int> row;
        for (int j=0; j<m; ++j) 
            row.push_back(matrix[i][j]-'0');
        mat.push_back(row);
    }
    int area = find_max_area_possible_from_histograms(mat[0]);
    for (int i=1; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            if (mat[i][j]) 
                mat[i][j] += mat[i-1][j];
            else 
                mat[i][j] = 0;
        }
        area = max(area, find_max_area_possible_from_histograms(mat[i]));
    }
    return area;
};


// https://leetcode.com/problems/largest-rectangle-in-histogram/description/
int main() {

    vector<vector<char>> binary_matrix = {
        {'1', '0', '1', '0', '0'},
        {'1', '0', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '0', '0', '1', '0'},
    };

    int max_area = maximal_rectangle(binary_matrix);
    cout << "Max Possible Rectangle Area : " << max_area << endl;

    cout << endl << endl << endl;
    return 0;
}
