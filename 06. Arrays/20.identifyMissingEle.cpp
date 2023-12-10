#include <iostream>
#include <vector>
using namespace std;

void get_missing_values_by_visiting(vector<int> & arr) {
    for (int i=0; i<arr.size(); i++) {
        int new_idx = abs(arr[i]);
        if (arr[new_idx-1] > 0) {
            arr[new_idx-1] *= -1;
        }
    }
    cout << "Missing Values are : ";
    for (int i=0; i<arr.size(); i++) {
        if (arr[i] > 0) {
            cout << i+1 << "   ";
        }
    }
    cout << endl;
}

void get_missing_values_by_positioning (vector<int> & arr) {
    int i=0;
    while (i < arr.size()) {
        int new_index = arr[i] - 1;
        if (arr[i] != arr[new_index]) {
            swap(arr[i], arr[new_index]);
        } else {
            i++;
        }
    }
    cout << "Missing Values are : ";
    for (int i=0; i<arr.size(); i++) {
        if (arr[i] != (i+1)) {
            cout << i+1 << "   ";
        }
    }
    cout << endl;
}

int main() {

    vector<int> arr = {1,3,5,3,3};
    // get_missing_values_by_visiting(arr);
    get_missing_values_by_positioning(arr);

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
