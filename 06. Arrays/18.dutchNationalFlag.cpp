#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_arr (vector<int> & arr) {
    for (auto value: arr) {
        cout << value << "   ";
    }
    cout << endl;
}

void dutch_national_flag_algorithm(vector<int> & arr) {
    int l = 0, h = arr.size()-1;
    while (l <= h) {
        if (arr[l] < 0) {
            l++;
        } else if (arr[h] > 0) {
            h--;
        } else {
            swap(arr[l], arr[h]);
            l++;
            h--;
        }
    }
}

int main() {

    vector<int> arr = {1,2,-3,4,-5,6};
    
    // 1. sorting method
    // sort(arr.begin(), arr.end());
    // print_arr(arr);

    // dutch national flag algorithm or 2-pointer approach
    dutch_national_flag_algorithm(arr);
    print_arr(arr);

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
