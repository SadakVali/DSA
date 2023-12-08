#include <iostream>
// limits.h
using namespace std;

int find_min (int arr[], int size) {
    int min = INT32_MAX;
    for (int i=0; i<size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {

    int arr[] = {3,5,67,8,0,9,5,4,3,23};
    int min = find_min(arr, 10);
    cout << min << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
