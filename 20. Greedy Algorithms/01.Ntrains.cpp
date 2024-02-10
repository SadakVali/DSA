#include<bits/stdc++.h>
using namespace std;

static bool cmp(pair<int, int> &a, pair<int, int> &b) {
    return a.second < b.second;
};

// TC ===> O(n*lg(n)) & SC ===> O(n)
int solve(int arrivals[], int departures[], int &n) {
    vector<pair<int, int>> data;
    for (int i=0; i<n; ++i) 
        data.push_back({arrivals[i], departures[i]});
    sort(data.begin(), data.end(), cmp);
    int count = 1;
    // including the first train
    int last_departure = data[0].second;
    cout << data[0].first << ", " << data[0].second << endl;
    for (int i=1; i<n; ++i) {
        // current train can be included
        if (data[i].first >= last_departure) {
            ++count;
            last_departure = data[i].second;
            cout << data[i].first << ", " << data[i].second << endl;
        }
    }
    return count;
};


// N trains, Activity Selection, N meetings in 1 Room Problems are same
int main() {

    int n = 4;
    int arrivals[] = {5,8,2,4};
    int departures[] = {7,11,6,5};

    int ans = solve(arrivals, departures, n);
    cout << "Number of Trains, Platform can Accommodate : " << ans << endl;

    cout << endl << endl << endl;
    return 0;
}
