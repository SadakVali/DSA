#include<iostream>
#include<chrono>
#include<vector>
using namespace std;

void merge(int* arr, int start, int mid, int end) {
    int len1 = mid-start+1, len2 = end-mid;
    int* left = new int[len1];
    int* right = new int[len2];
    int iter = 0;
    for (int i=start; i<=mid; i++) left[iter++] = arr[i];
    iter = 0;
    for (int i=mid+1; i<=end; i++) right[iter++] = arr[i];
    int l=0, r=0;
    while ((l < len1) && (r < len2)) {
        if (left[l] <= right[r]) arr[start++] = left[l++];
        else arr[start++] = right[r++];
    }
    while (l < len1) arr[start++] = left[l++];
    while (r < len2) arr[start++] = right[r++];
}

void merge_sort(int *arr, int start, int end) {
    if (start >= end) return;
    int mid = start+((end-start) >> 1);
    merge_sort(arr, start, mid);
    merge_sort(arr, mid+1, end);
    merge(arr, start, mid, end);
}


int main() {
    auto start = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    int arr[] = {100, 4, 5, 13, 2, 12, 0};
    int n = sizeof(arr)/sizeof(int);
    // PROCESSING
    merge_sort(arr, 0, n-1);
    // OUTPUT
    for(auto value : arr) cout << value << " ";
    cout << endl;
    // ################## Your code ends below ####################
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end-start);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}

// void merge(vector<int> &arr, int start, int mid, int end) {
//     vector<int> left, right;
//     for (int i=start; i<=mid; i++) left.push_back(arr[i]);
//     for (int i=mid+1; i<=end; i++) right.push_back(arr[i]);
//     int l=0, r=0;
//     while ((l < left.size()) && (r < right.size())) {
//         if (left[l] <= right[r]) arr[start++] = left[l++];
//         else arr[start++] = right[r++];
//     }
//     while (l < left.size()) arr[start++] = left[l++];
//     while (r < right.size()) arr[start++] = right[r++];
// }
