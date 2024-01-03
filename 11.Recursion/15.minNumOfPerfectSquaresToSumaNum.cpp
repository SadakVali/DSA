#include<iostream>
#include<chrono>
#include<cmath>
using namespace std;

int find_min_num_of_perfect_squares_to_a_sum(int num) {
    if (num <= 0) return 0;
    int ans=INT32_MAX, iter=1, end=sqrt(num);
    while (iter <= end) {
        int temp = 1 + find_min_num_of_perfect_squares_to_a_sum(num - (iter*iter));
        ans = min(temp, ans);
        iter++;
    }
    return ans;
}


// https://leetcode.com/problems/perfect-squares/description/
// TC => O(sqrt(n)^n) = O(n^n) & SC => O(n)
int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    int num = 13;
    // PROCESSING
    int ans = find_min_num_of_perfect_squares_to_a_sum(num);
    // OUTPUT
    cout << "Min Num of squares : " << ans << endl;
    // ################## Your code ends below ####################
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time-start_time);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
