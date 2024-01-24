#include<iostream>
#include<vector>
#include<chrono>
using namespace std;

// int partition(vector<int> &arr, int start, int end) {
//     int i=start-1, j=start-1;
//     while (++j < end)
//         if (arr[j] < arr[end]) 
//             swap(arr[++i], arr[j]);
//     swap(arr[++i], arr[end]);
//     return i;
// }

// void quick_sort(vector<int> &arr, int start, int end) {
//     if (start >= end) return;
//     int pivote = partition(arr, start, end);
//     quick_sort(arr, start, pivote-1);
//     quick_sort(arr, pivote+1, end);
// }

void quick_sort(vector<int> &arr, int start, int end) {
    if (start >= end) return;
    int i=start-1, j=start-1;
    while (++j < end) if (arr[j] < arr[end]) swap(arr[++i], arr[j]);
    swap(arr[++i], arr[end]);
    quick_sort(arr, start, i-1);
    quick_sort(arr, i+1, end);
}


int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    vector<int> arr = {2,0,4,-1,5,632,21};
    // PROCESSING
    quick_sort(arr, 0, arr.size()-1);
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
