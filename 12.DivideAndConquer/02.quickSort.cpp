#include<iostream>
#include<chrono>
using namespace std;

int partition(int* arr, int start, int end) {
    // 1. choose pivot
    int pivot_idx = start, pivot_ele = arr[start];
    // 2. count the num of ele <= pivote_ele
    int count=0;
    for (int i=start+1; i<=end; i++) {
        if (arr[i] <= pivot_ele) 
            count++;
    }
    // 3. place the pivot at it's sorted place
    swap(arr[start+count], arr[pivot_idx]);
    pivot_idx = start+count;
    // 4. make all the ele, left side to pivot <= pivot_ele && make all the ele, right side to pivot >= pivot_ele
    int i=start, j=end;
    while ((i < pivot_idx) && (j > pivot_idx)) {
        while (arr[i] <= pivot_ele) i++;
        while (arr[j] > pivot_ele) j--;
        if ((i < pivot_idx) && (j > pivot_idx)) swap(arr[i], arr[j]);
    }
    // 5. send the current pivot_ele index
    return pivot_idx;
}

void quick_sort(int* arr, int start, int end) {
    if (start >= end) return;
    int pivot = partition(arr, start, end);
    quick_sort(arr, start, pivot-1);
    quick_sort(arr, pivot+1, end);
}


// TC => average case O(n*lg(n)) worst case O(n^2) reverse sorted & SC => O(lg(n))
int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    int arr[] = {8,1,3,4,20,50,50,50,50,50,5,1,1,1,1,2,2,2,50,30};
    int n = 20;
    // PROCESSING
    quick_sort(arr, 0, n-1);
    // OUTPUT
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
    // ################## Your code ends below ####################
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time-start_time);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
