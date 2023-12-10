#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int get_duplicate(vector<int> & arr) {
    for (int i=1; i<(arr.size()); i++) {
        if (arr[i] == arr[i-1]) {
            return arr[i];
        }
    }
    return -1;
}

int get_duplicate_by_revisiting (vector<int> & arr) {
    for (int i=0; i<arr.size(); i++) {
        int new_index = abs(arr[i]);
        if (arr[new_index] < 0) {
            return new_index;
        } else {
            arr[new_index] *= -1;
        }
    }
    return -1;
}

int get_duplicate_by_positioning (vector<int> & arr) {
    while (arr[0] != arr[arr[0]]) {
        swap(arr[0], arr[arr[0]]);
    }
    return arr[0];
}

int main() {

    vector<int> arr = {1,3,4,2,2};
    // sort(arr.begin(), arr.end());
    // int duplicate = get_duplicate(arr);
    // (duplicate != -1) ? cout << "The duplicate Number is : " << duplicate : cout << "There is no duplicate in the array.";

    // visited marking solution
    // int duplicate = get_duplicate_by_revisiting(arr);
    // (duplicate != -1) ? cout << "The duplicate Number is : " << duplicate : cout << "There is no duplicate in the array.";

    // positioning method
    int duplicate = get_duplicate_by_positioning(arr);
    (duplicate != -1) ? cout << "The duplicate Number is : " << duplicate : cout << "There is no duplicate in the array.";

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
