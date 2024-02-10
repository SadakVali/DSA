#include<bits/stdc++.h>
using namespace std;

static bool cmp(pair<int, int> &a, pair<int, int> &b) {
    double value_per_weight1 = ((1.0)*a.first) / a.second;
    double value_per_weight2 = ((1.0)*b.first) / b.second;
    return value_per_weight1 > value_per_weight2;
};

int solve(int val[], int wt[],  int n, int capacity) {
    vector<pair<int, int>> data;
    for (int i=0; i<n; ++i) 
        data.push_back({val[i], wt[i]});
    sort(data.begin(), data.end(), cmp);
    int total_value = 0;
    for (int i=0; i<n; ++i) {
        pair<int, int> item = data[i];
        if (item.second <= capacity) {
            total_value += item.first;
            capacity -= item.second;
        } else {
            double value_per_unit_weight = (((1.0)*item.first) / item.second);
            total_value += value_per_unit_weight*capacity;
            capacity = 0;
        }
    }
    return total_value;
};


int main() {

    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int n = 3, capacity = 50;

    int ans = solve(val, wt, n, capacity);
    cout << "Answer is : " << ans << endl;

    cout << endl << endl << endl;
    return 0;
}
