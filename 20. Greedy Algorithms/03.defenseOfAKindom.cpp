#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &y, vector<int> &x) {
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    int max_length = INT32_MIN;
    for (int i=0; i<y.size(); ++i) {
        int a = y[i], b = y[i-1];
        max_length = max(max_length, a-b-1);
    }

    int max_width = INT32_MIN;
    for (int i=0; i<x.size(); ++i) {
        int a = x[i], b = x[i-1];
        max_width = max(max_width, a-b-1);
    }
    return max_length * max_width;
};


// https://www.spoj.com/problems/DEFKIN/
int main() {

    int rows = 8;
    int columns = 15;

    vector<int> y = {0, 2, 8, 6, rows+1};
    vector<int> x = {0, 11, 3, 8, columns+1};

    int ans = solve(y, x);
    cout << "Answer is : " << ans << endl;

    cout << endl << endl << endl;
    return 0;
}
