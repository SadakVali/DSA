#include <iostream>
using namespace std;

int get_max (int arr[][4], int rows, int columns) {
    int max = INT32_MIN;
    for (int i=0; i<rows; i++) {
        for (int j=0; j<columns; j++) {
            if (max < arr[i][j]) {
                max = arr[i][j];
            } 
        }
    }
    return max;
}

int get_min (int arr[][4], int rows, int columns) {
    int min = INT32_MAX;
    for (int i=0; i<rows; i++) {
        for (int j=0; j<columns; j++) {
            if (min > arr[i][j]) {
                min = arr[i][j];
            } 
        }
    }
    return min;
}

int main() {

    int arr[][4] = {
        {1,2,3,4}, 
        {2,3,4,5}, 
        {3,4,5,6}
    };

    int max = get_max(arr, 3, 4);
    int min = get_min(arr, 3, 4);
    cout << "Min and Max values respectively are : " << min << "   " << max << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
