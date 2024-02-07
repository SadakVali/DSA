#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &nums, int &k) {
    vector<int> ans;
    if ((nums.size() < k) || (k <= 0)) return ans;
    // find max number from the k window
    deque<int> deq;
    for (int iter=0; iter<k; ++iter) {
        // removing all the small elements on the back side, to make the 
        // deq a stream of decreasing sequence
        while (!deq.empty() && (nums[deq.back()] <= nums[iter]))
            deq.pop_back();
        // inserting the index so that we can remove them if they don't 
        // lie within the window, in the next steps
        deq.push_back(iter);
    }
    // push the first max number to the ans array
    ans.push_back(nums[deq.front()]);
    // lets process the remaining windows
    for (int iter = k; iter<nums.size(); ++iter) {
        // remove out of window elements from the deq
        if (!deq.empty() && (deq.front() <= (iter - k)))
            deq.pop_front();
        // removing all the small elements on the back side, to make the 
        // deq a stream of decreasing sequence
        while (!deq.empty() && (nums[deq.back()] <= nums[iter]))
            deq.pop_back();
        // inserting the index so that we can remove them if they don't 
        // lie within the window, in the next steps
        deq.push_back(iter);
        // push the current max number wrt the current window
        ans.push_back(nums[deq.front()]);
    }
    return ans;
};

void print_vec(vector<int> &vec) {
    for (int ele : vec) 
        cout << ele << " ";
    cout << endl;
};


// https://leetcode.com/problems/sliding-window-maximum/description/
int main() {

    vector<int> nums {1,3,-1,-3,5,3,6,7}; 
    int window_size = 3;

    vector<int> max_nums = solve(nums, window_size);
    print_vec(max_nums);

    cout << endl << endl << endl;
    return 0;
}
