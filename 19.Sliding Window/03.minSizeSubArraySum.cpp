#include<bits/stdc++.h>
using namespace std;

int find_min_sub_array_len_that_sums_to_target (vector<int> &nums, int &target) {
    int left=0, right=0;
    int sum=0, length=INT32_MAX;
    while (right < nums.size()) {
        // include current number
        sum += nums[right];
        while (sum >= target) {
            // minimise window
            length = min(length, right-left+1);
            sum -= nums[left];
            ++left;
        }
        ++right;
    }
    return (length == INT32_MAX) ? 0 : length;
};


// https://leetcode.com/problems/minimum-size-subarray-sum/description/
int main() {

    vector<int> nums {2,3,1,2,4,3};
    int target = 40;
    int length = find_min_sub_array_len_that_sums_to_target(nums, target);
    cout << length << endl;

    cout << endl << endl << endl;
    return 0;
}
