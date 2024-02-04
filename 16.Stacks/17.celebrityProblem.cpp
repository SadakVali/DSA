#include<bits/stdc++.h>
using namespace std;

int find_celebrity(vector<vector<int>> &matrix, int n) {
    stack<int> st;
    // step 1 ===> push all persons into the stack
    for (int i=0; i<n; ++i) st.push(i);
    // stet 2 ===> run discard method, to get a might be celebrity
    while (st.size() != 1) {
        int a = st.top(); st.pop();
        int b = st.top(); st.pop();
        // if a don't know b? ===> a might be a celeb
        if (!matrix[a][b]) st.push(a);
        // if b don't know a? ===> b might be a celeb
        if (!matrix[b][a]) st.push(b);
    }
    // step 3 ===> check that single person is celebrity or not
    // celebrity should not know anybody
    int might_be_celebrity = st.top(); st.pop();
    for (int i=0; i<n; ++i) {
        if (matrix[might_be_celebrity][i])
            return -1;
    }
    // everyone should know celebrity
    for (int i=0; i<n; ++i) {
        if (i == might_be_celebrity) continue;
        if (matrix[i][might_be_celebrity] == 0)
            return -1;
    }
    // might_be_celebrity is celeb
    return might_be_celebrity;
};

// https://www.geeksforgeeks.org/the-celebrity-problem/?source=google&medium=cpc&device=c&keyword=&matchtype=&campaignid=20992253746&adgroup=&gad_source=1&gclid=Cj0KCQiA5fetBhC9ARIsAP1UMgG6s_sDNPnKusUYSpm6LxhUcFFpKeX2rmB1l-6YmOQSysfW8SpTNuIaAmrSEALw_wcB
int main() {

    vector<vector<int>> matrix = { 
        { 0, 0, 1, 0 },
        { 0, 0, 1, 0 },
        { 0, 0, 0, 0 },
        { 0, 0, 1, 0 } 
    };
    int n = 4;
    int ans = find_celebrity(matrix, n);
    cout << "The celebrity is : " << ans << endl;
    cout << endl << endl << endl;
    return 0;
}
