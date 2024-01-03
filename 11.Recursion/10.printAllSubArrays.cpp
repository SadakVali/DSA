#include<iostream>
#include<vector>
#include<chrono>
using namespace std;

void print_a_chunk_of_sub_arrays(vector<int> &nums, int i, int j) {
    if (j>=nums.size()) return;
    for (int k=i; k<=j; k++) 
        cout << nums[k] << " ";
    cout << endl;
    print_a_chunk_of_sub_arrays(nums, i, ++j);
}

void print_all_sub_arrays(vector<int> &nums) {
    for (int i=0; i<nums.size(); i++) {
        print_a_chunk_of_sub_arrays(nums, i, i);
    }
}


// TC O(n^2) & SC O(n)
int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    vector<int> nums {1,2,3,4,5};
    // PROCESSING
    print_all_sub_arrays(nums);
    // OUTPUT
    // ################## Your code ends below ####################
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time-start_time);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
