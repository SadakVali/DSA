#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

static bool my_comp (string &a, string &b) {
    string t1 = a+b;
    string t2 = b+a;
    return t1 > t2;
    // return a > b;
}

string create_largest_num (vector<int> &nums) {
    vector<string> snums;
    for (auto num : nums) snums.push_back(to_string(num));
    sort(snums.begin(), snums.end(), my_comp);
    if (snums[0] == "0") return "0"; // You will miss this
    string ans = "";
    for (auto str : snums) ans += str;
    return ans;
}


int main () {
    vector<int> nums = {1,0,2,3,4,5,6,7,8,9,30};
    cout << create_largest_num(nums) << endl;
    cout << endl;
    return 0;
}
