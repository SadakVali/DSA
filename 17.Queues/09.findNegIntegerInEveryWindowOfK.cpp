#include<bits/stdc++.h>
using namespace std;

void solve (int arr[], int &n, int &k) {
    if ((k <= 0) || (k >= n)) return;
    queue<int> q;
    // process first window of size k
    for (int index=0; index<k; ++index) 
        if (arr[index] < 0) 
            q.push(index);
    // print answer to the first window
    int print = !q.empty() ? arr[q.front()] : 0;
    cout << print << " ";
    // process remaining windows
    for (int index=k; index < n; ++index) {
        // remove out of window ele from the Q
        while (!q.empty() && (q.front() <= (index-k)))
            q.pop();
        // check current ele for insertion
        if (arr[index] < 0) 
            q.push(index);
        // print answer to the current window
        int print = !q.empty() ? arr[q.front()] : 0;
        cout << print << " ";
    }
    cout << endl;
};


int main() {

    int arr[] = {12,-1,-7,8,-15,30,16,28};
    int n = 8;
    int k = 3;
    solve(arr, n, k);

    cout << endl << endl << endl;
    return 0;
}
