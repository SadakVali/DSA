#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_arr (vector<int> arr) {
    for (auto value: arr) {
        cout << value << "   ";
    }
    cout << endl;
}

int main() {

    vector<int> arr = {1,2,1,1,0,0,1,0,2,2,0,2};

    // // 1. default STL sorting method
    // sort(arr.begin(), arr.end());
    // print_arr(arr);

    // // 2. cout sort
    // vector<int> count(3, 0);
    // for (int i=0; i<arr.size(); i++) {
    //     if (arr[i] == 0) {
    //         count[0]++;
    //     } else if (arr[i] == 1) {
    //         count[1]++;
    //     } else {
    //         count[2]++;
    //     }
    // }
    // int iter = 0;
    // for (int i=0; i<count.size(); i++) {
    //     cout << count[i] << "   ";
    //     for (int j=0; j<count[i]; j++) {
    //         arr[iter] = i;
    //         iter++;
    //     }
    // }
    // cout << endl;
    // print_arr(arr);

    // 3. 3 pointer method
    int l = -1, m = 0, h = arr.size();
    while (m < h) {
        print_arr(arr);
        if (arr[m] == 2) {
            h--;
            swap(arr[m], arr[h]);
        } else if (arr[m] == 1) {
            m++;
        } else {
            l++;
            swap(arr[l], arr[m]);
            m++;
        }
    }
    for (auto value: arr) {
        cout << value << "   ";
    }
    cout << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
