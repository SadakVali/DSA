#include<iostream>
#include<vector>
#include<set>
#include<unordered_map>
#include<chrono>
using namespace std;

void find_all_permutations(vector<int> &nums, vector<vector<int>> &ans, int start) {
    if(start == nums.size()-1) {
        ans.push_back(nums);
        return;
    }
    unordered_map<int, bool> visited;
    for(int i=start; i<nums.size(); i++) {
        if(visited.find(nums[i]) != visited.end()) continue;
        visited[nums[i]] = true;
        swap(nums[i], nums[start]);
        find_all_permutations(nums, ans, start+1);
        swap(nums[i], nums[start]);
    }
}


// https://leetcode.com/problems/permutations-ii/description/
int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    vector<int> nums = {1,1,2};
    // PROCESSING
    vector<vector<int>> ans;
    find_all_permutations(nums, ans, 0);
    // TLE solution
    // set<vector<int>> st;
    // for (auto vec : ans) st.insert(vec);
    // ans.clear();
    // for (auto vec : st) ans.push_back(vec);
    // OUTPUT
    for(auto vec : ans) {
        for(auto ele : vec) cout << ele << " ";
        cout << endl;
    }
    // ################## Your code ends below ####################
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time-start_time);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
