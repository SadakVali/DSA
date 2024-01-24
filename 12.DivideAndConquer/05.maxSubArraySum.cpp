#include<iostream>
#include<vector>
#include<chrono>
using namespace std;

int max_sub_array_sum(vector<int> &arr, int start, int end) {
    if (start == end) return arr[start];
    int mid = start+((end-start)>>1);
    int max_left_sub_arr_sum = max_sub_array_sum(arr, start, mid);
    int max_right_sub_arr_sum = max_sub_array_sum(arr, mid+1, end);
    // max cross border sum
    int left_arr_sum=0, max_left_cross_sum=INT32_MIN;
    for (int i=mid; i>=start; i--) {
        left_arr_sum += arr[i];
        if (max_left_cross_sum < left_arr_sum)
            max_left_cross_sum = left_arr_sum;
    }
    int right_arr_sum=0, max_right_cross_sum=INT32_MIN;
    for (int i=mid+1; i<=end; i++) {
        right_arr_sum += arr[i];
        if (max_right_cross_sum < right_arr_sum)
            max_right_cross_sum = right_arr_sum;
    }
    int max_cross_sum = max_left_cross_sum+max_right_cross_sum;
    return max(max_cross_sum, max(max_left_cross_sum, max_right_sub_arr_sum));
}


// https://leetcode.com/problems/maximum-subarray/description/
int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    // PROCESSING
    int max_sum = max_sub_array_sum(arr, 0, arr.size()-1);
    // OUTPUT
    cout << "Max sub array sum : " << max_sum << endl;
    // ################## Your code ends below ####################
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time-start_time);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
