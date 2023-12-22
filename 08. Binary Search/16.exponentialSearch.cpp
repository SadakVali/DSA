#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binary_search (vector<int> &arr, int start, int end, int target) {
    int mid;
    while (start <= end) {
        mid = start + ((end-start)/2);
        if (arr[mid] == target)
            return mid;
        else if (target > arr[mid])
            start = mid+1;
        else
            end = mid-1;
    }
    return -1;
}

int min (int first, int second) {
    if (first < second) return first;
    return second;
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int i=0, j=1;
    int target = 1;

    while ((j < arr.size()) && (arr[j] < target)) {
        i = j;
        j *= 2; // j = j << 1;
    }
    int target_idx = binary_search(arr, i, min(j, arr.size()-1), target);
    cout << target_idx << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
