#include<iostream>
#include<chrono>
#include<vector>
using namespace std;

void find_all_possi_combina_sums(vector<int> &nums, int target, vector<vector<int>> &ans, vector<int> &vec, int index) {
    if (target == 0) {
        ans.push_back(vec);
        return;
    }
    for (int i=index; i<nums.size(); i++) {
        if ((target - nums[i]) < 0) continue;
        vec.push_back(nums[i]);
        find_all_possi_combina_sums(nums, target-nums[i], ans, vec, i);
        vec.pop_back();
    }
}


// https://leetcode.com/problems/combination-sum/description/
int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    vector<int> nums = {1,2,3,6,7};
    int target = 7;
    // PROCESSING
    vector<vector<int>> ans;
    vector<int> vec;
    find_all_possi_combina_sums(nums, target, ans, vec, 0);
    // OUTPUT
    for (auto an : ans) {
        for (auto ele : an) cout << ele << " ";
        cout << endl;
    }
    // ################## Your code ends below ####################
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time-start_time);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
