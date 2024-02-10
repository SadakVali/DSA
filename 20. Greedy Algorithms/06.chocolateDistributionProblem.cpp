#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int n, int m) {
    sort(arr, arr+n); // sort
    // check differences in m-size window
    int i = 0;
    int j = m-1;
    int diff = INT32_MAX;
    while (j < n) {
        int new_diff = arr[j++] - arr[i++];
        diff = min(diff, new_diff);
    }
    return diff;
};


int main() {

    int n = 7; // different chocolates
    int m = 3; // window size
    int arr[] = {7,3,2,4,9,12,56};

    int ans = solve(arr, n, m);
    cout << "Answer is : " << ans << endl;

    cout << endl << endl << endl;
    return 0;
}
