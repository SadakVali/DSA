#include<iostream>
#include<vector>
#include<chrono>
using namespace std;

int find_max_sum_of_non_adjascent_ele(vector<int> &arr, int index) {
    if (index >= arr.size()) return 0;
    int sum1 = arr[index]+find_max_sum_of_non_adjascent_ele(arr, index+2);
    int sum2 = find_max_sum_of_non_adjascent_ele(arr, index+1);
    return max(sum1, sum2);
}

int main() {
    auto start = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    vector<int> arr {8, 1, 9, 100, 11, 0, 2};
    // PROCESSING
    int max_sum = find_max_sum_of_non_adjascent_ele(arr, 0);
    // OUTPUT
    cout << "Max Sum of non adjascent elements : " << max_sum << endl;
    // ################## Your code ends below ####################
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end-start);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
