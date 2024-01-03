#include<iostream>
#include<chrono>
using namespace std;

int number_of_possible_target_rolls(int n, int k, int target) {
    if (target < 0) return 0;
    if ((n == 0) && (target == 0)) return 1;
    if ((n != 0) && (target == 0)) return 0;
    if ((n == 0) && (target != 0)) return 0;
    int ans = 0;
    for (int i=1; i<=k; i++)
        ans += number_of_possible_target_rolls(n-1, k, target-i);
    return ans;
}


// https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/description/
// TC => k^n && SC => O(n)
int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    // int n = 30, k = 30, target = 500; // TLE
    // int n = 3, k = 2, target = 6;
    int n = 10, k = 6, target = 10;
    // PROCESSING
    int num_of_poss_ways = number_of_possible_target_rolls(n, k, target);
    // OUTPUT
    cout << "Number of Possible ways : " << num_of_poss_ways << endl;
    // ################## Your code ends below ####################
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time-start_time);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
