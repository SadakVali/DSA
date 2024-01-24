#include<iostream>
#include<vector>
#include<chrono>
using namespace std;

void count_beatiful_arrangements(vector<int> &vec, int &n, int &ans, int curr_num) {
    if(curr_num == n+1) {
        ans++;
        for(int i=1; i<=n; i++) cout << vec[i] << " ";
        cout << endl;
        return;
    }
    for(int i=1; i<=n; i++) {
        if((vec[i] == 0) && ((curr_num%i==0) || (i%curr_num==0))) {
            vec[i] = curr_num;
            count_beatiful_arrangements(vec, n, ans, curr_num+1);
            vec[i] = 0; // back tracking
        }
    }
}


// https://leetcode.com/problems/beautiful-arrangement/
int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    int n = 3;
    // PROCESSING
    vector<int> vec(n+1); // initialized with all zeros
    int ans = 0;
    count_beatiful_arrangements(vec, n, ans, 1);
    // OUTPUT
    cout << "Number of beatiful arrangements possible : " << ans << endl;
    // ################## Your code ends below ####################
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time-start_time);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
