#include<iostream>
#include<chrono>
#include<vector>
using namespace std;

// long merge(vector<int> &arr, vector<int> &temp, int start, int mid, int end) {
//     int i=start, j=mid+1, k=start;
//     long ctr = 0;
//     while ((i <= mid) & (j <= end)) {
//         if (arr[i] <= arr[j]) temp[k++] = arr[i++];
//         else {
//             temp[k++] = arr[j++];
//             ctr += mid-i+1;
//         }
//     }
//     while (i <= mid) temp[k++] = arr[i++];
//     while (j <= end) temp[k++] = arr[j++];
//     while (start <= end) {
//         arr[start] = temp[start];
//         ++start;
//     }
//     return ctr;
// }

// long merge_sort(vector<int> &arr, vector<int> &temp, int start, int end) {
//     if (start >= end) return 0;
//     int mid = start + ((end - start) >> 1);
//     long ctr = 0;
//     ctr += merge_sort(arr, temp, start, mid);
//     ctr += merge_sort(arr, temp, mid+1, end);
//     ctr += merge(arr, temp, start, mid, end);
//     return ctr;
// }

void merge(vector<int> &arr, vector<int> &temp, int start, int mid, int end, long &ctr) {
    int i=start, j=mid+1, k=start;
    while ((i <= mid) & (j <= end)) {
        if (arr[i] <= arr[j]) temp[k++] = arr[i++];
        else {
            temp[k++] = arr[j++];
            ctr += mid-i+1;
        }
    }
    while (i <= mid) temp[k++] = arr[i++];
    while (j <= end) temp[k++] = arr[j++];
    while (start <= end) {
        arr[start] = temp[start];
        ++start;
    }
}

void merge_sort(vector<int> &arr, vector<int> &temp, int start, int end, long &ctr) {
    if (start >= end) return;
    int mid = start + ((end - start) >> 1);
    merge_sort(arr, temp, start, mid, ctr);
    merge_sort(arr, temp, mid+1, end, ctr);
    merge(arr, temp, start, mid, end, ctr);
}


// https://www.hackerrank.com/challenges/ctci-merge-sort/problem
int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    // vector<int> arr = {2, 1, 3, 1, 2};
    vector<int> arr = {8, 4, 2, 1};
    // PROCESSING
    // // TC => O(n^2) & SC => O(1)
    // for (int i=0; i<arr.size()-1; i++)
    //     for (int j=i+1; j<arr.size(); j++) 
    //         if (arr[i] > arr[j]) ctr++;
    // TC => O(n^) & SC = O()
    vector<int> temp(arr.size(), 0);
    long ctr = 0;
    merge_sort(arr, temp, 0, arr.size()-1, ctr);
    // OUTPUT
    for (auto ele: arr) cout << ele << " ";
    cout << endl;
    cout << "Num of inversions : " << ctr << endl;
    // ################## Your code ends below ####################
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time-start_time);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
