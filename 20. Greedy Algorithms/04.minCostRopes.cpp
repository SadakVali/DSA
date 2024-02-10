#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int n) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i=0; i<n; ++i)
        pq.push(arr[i]);
    int cost = 0;
    while (pq.size() != 1) {
        int first = pq.top(); pq.pop(); // access the sallest rope size
        int second = pq.top(); pq.pop(); // access second smallest rope
        cost += first + second; //  cost to combine both ropes
        pq.push(first+second); // push new length
    }
    return cost;
};


int main() {

    int arr[] = {4,3,2,6};
    int n = 4;

    int ans = solve(arr, n);
    cout << "Answer is : " << ans << endl;

    cout << endl << endl << endl;
    return 0;
}
