#include<iostream>
#include<vector>
#include<chrono>
using namespace std;

void inplace_merge(vector<int> &arr, int start, int mid, int end) {
    int total_len = end-start+1;
    int gap = (total_len>>1) + (total_len%2); // ceil
    while(gap > 0) {
        int i=start, j=start+gap;
        while(j <= end) {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
            i++, j++;
        }
        gap = (gap <= 1) ? 0 : (gap>>1)+(gap%2);
    }
}

void merge_sort(vector<int> &arr, int start, int end) {
    if (start >= end) return;
    int mid = start+((end-start)>>1);
    merge_sort(arr, start, mid);
    merge_sort(arr, mid+1, end);
    inplace_merge(arr, start, mid, end);
}


// https://leetcode.com/problems/sort-an-array/description/
int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    vector<int> arr = {5, 2, 3, 1};
    // PROCESSING
    merge_sort(arr, 0, arr.size()-1);
    // OUTPUT
    for (auto ele : arr) cout << ele << " ";
    cout << endl;
    // ################## Your code ends below ####################
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time-start_time);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
