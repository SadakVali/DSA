#include <iostream>
// limits.h
using namespace std;

int find_max (int arr[], int size) {
    int max = INT32_MIN;
    for (int i=0; i<size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {

    int arr[] = {3,5,67,8,0,9,5,4,3,23};
    int max = find_max(arr, 10);
    cout << max << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
