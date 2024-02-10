#include<bits/stdc++.h>
using namespace std;

static bool cmp(pair<int, int> &a, pair<int, int> &b) {
    return a.first < b.first;
};

vector<int> solve(vector<int> &nums, int target) {
    vector<pair<int, int>> data;
    vector<int> ans;
    for (int i=0; i<nums.size(); ++i)
        data.push_back({nums[i], i});
    sort(data.begin(), data.end(), cmp);
    int left=0, right=nums.size()-1;
    while (left <= right) {
        int sum = data[left].first + data[right].first;
        if (sum == target) {
            ans.push_back(data[left].second);
            ans.push_back(data[right].second);
            break;
        } else if (sum > target)
            --right;
        else
            ++left;
    }
    return ans;
};

void print_vec(vector<int> &nums, vector<int> &indices) {
    for (int id : indices) 
        cout << id << " ===> " << nums[id] << endl;
    cout << endl;
};


// https://leetcode.com/problems/two-sum/description/
int main() {

    vector<int> nums {1,3,-1,-3,5,3,6,7}; 
    int target = 5;

    vector<int> indices = solve(nums, target);
    print_vec(nums, indices);

    cout << endl << endl << endl;
    return 0;
}
