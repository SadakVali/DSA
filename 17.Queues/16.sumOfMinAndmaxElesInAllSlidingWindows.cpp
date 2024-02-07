#include<bits/stdc++.h>
using namespace std;

int sum_of_min_and_max_of_each_window(vector<int> &nums, int &k) {
    if ((nums.size() < k) || (k <= 0)) return -1;
    int ans = 0;
    // find max number from the k window
    deque<int> deq1, deq2;
    for (int iter=0; iter<k; ++iter) {
        // removing all the small elements on the back side, to make the 
        // deq1 a stream of decreasing sequence
        while (!deq1.empty() && (nums[deq1.back()] <= nums[iter]))
            deq1.pop_back();
        // removing all the big elements on the back side, to make the 
        // deq2 a stream of increasing sequence
        while (!deq2.empty() && (nums[deq2.back()] >= nums[iter]))
            deq2.pop_back();
        // inserting the index so that we can remove them if they don't 
        // lie within the window, in the next steps
        deq1.push_back(iter);
        deq2.push_back(iter);
    }
    // sum of the first min and max numbers 
    ans += nums[deq1.front()] + nums[deq2.front()];
    // lets process the remaining windows
    for (int iter = k; iter<nums.size(); ++iter) {
        // remove out of window elements from the deq1 & deq2
        if (!deq1.empty() && (deq1.front() <= (iter - k)))
            deq1.pop_front();
        if (!deq2.empty() && (deq2.front() <= (iter - k)))
            deq2.pop_front();
        // removing all the small elements on the back side, to make the 
        // deq1 a stream of decreasing sequence
        while (!deq1.empty() && (nums[deq1.back()] <= nums[iter]))
            deq1.pop_back();
        // removing all the big elements on the back side, to make the 
        // deq2 a stream of increasing sequence
        while (!deq2.empty() && (nums[deq2.back()] >= nums[iter]))
            deq2.pop_back();
        // inserting the index so that we can remove them if they don't 
        // lie within the window, in the next steps
        deq1.push_back(iter);
        deq2.push_back(iter);
        // sum of the min and max numbers 
        ans += nums[deq1.front()] + nums[deq2.front()];
    }
    return ans;
};


int main() {

    vector<int> nums {2,5,-1,7,-3,-1,-2}; 
    int window_size = 4;
    int ans = sum_of_min_and_max_of_each_window(nums, window_size);
    cout << "ans : " << ans << endl;

    cout << endl << endl << endl;
    return 0;
}
