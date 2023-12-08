#include <iostream>
#include <vector>
using namespace std;

// Generic printing function for any vector type
template <typename T>
void print_arr(const vector<T>& arr) {
    cout << "Printing the array elements: ";
    for (const auto& value : arr) {
        cout << value << "   ";
    }
    cout << endl;
}

void sort_zeros_and_ones(vector<int>& arr) {
    int start = 0, iter = 0, end = arr.size()-1;
    while (iter <= end) {
        if (arr[iter] == 0) {
            swap(arr[start], arr[iter]);
            iter++;
            start++;
        } else if(arr[iter] == 1) {
            swap(arr[end], arr[iter]);
            end--;
        }
    }
}

int main() {

    vector<int> arr{1,0,1,1,1,0,1,0,0};
    print_arr(arr);
    sort_zeros_and_ones(arr);
    print_arr(arr);

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
