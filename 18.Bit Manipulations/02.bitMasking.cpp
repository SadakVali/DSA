#include<bits/stdc++.h>
using namespace std;

bool get_ith_bit1(int n, int i) {
    int mask = 1 << i;  // 0001 (1 deci) << 3 ===> 1000 (8 deci)
    cout << 1 << " << " << i << " ===> " << mask << endl;
    int ans = n & mask; // 1010 (10 deci) & 1000 (8 deci) ===> 1000 (8 deci)
    cout << n << " & " << mask << " ===> " << ans << endl;
    // return ans > 0;     // (n & (1 << i)) == (1 << i);
    return (n & (1 << i)) == (1 << i);
};

bool get_ith_bit2(int n, int i) {
    int mask = 1 << i;
    return (n & mask) == mask;
};

int set_ith_bit(int n, int i) {
    int mask = 1 << i;
    cout << "mask ===> " << mask << endl;
    return (n | mask);
};

int clear_ith_bit(int n, int i) {
    int mask = ~(1 << i);
    return (n & mask);
};

int update_ith_bit(int n, int i, bool target) {
    int ans = clear_ith_bit(n, i);
    return target ? ans | (target << i) : ans;
};

int find_unique_num(vector<int> &nums) {
    int ans = 0;
    for (auto &ele : nums)
        ans = ans ^ ele;
    return ans;
};

int clear_last_i_bits(int n, int i) {
    int mask = (-1 << i);
    return n & mask;
};

bool check_power_of_2(int n) {
    return !(n & (n-1)); // removes last set bit
};

// TC ===> O(lg(n)) since we need log(n) bits to represent integer n.
int count_num_of_set_bits(int n) {
    int count = 0;
    while (n) {
        bool last_bit = n & 1;
        if (last_bit) 
            ++count;
        n = n >> 1;
    }
    return count;
};

int fast_count_num_of_set_bits(int n) {
    int count = 0;
    while (n) {
        n = n & (n-1);
        ++count;
    }
    return count;
};

// TODO: Number of jumps to take to reach on a stair case(number of set bit ===> 1 bit = 1 jump since you are allowed to jump in the order of power of 2's and each power of 2's will have 1 set bit only)

int clear_bits_in_a_range(int n, int i, int j) {
    int left = -1 << (i+1);
    int right = (1 << j) - 1;
    int mask = left | right;
    return n & mask;
};

vector<string> find_all_possible_sub_sequences(string str) {
    vector<string> ans;
    // for each possible sub sequence
    for (int num=0; num < (1 << str.size()); ++num) {
        string temp = "";
        // for each character in the input string
        for (int i=0; i<str.size(); ++i)
            if (num & (1 << i))
                temp.push_back(str[i]);
        ans.push_back(temp);
    }
    return ans;
};

int main() {

    // cout << get_ith_bit1(10, 3) << endl;
    // cout << get_ith_bit2(10, 3) << endl;

    // cout << set_ith_bit(10, 2) << endl;

    // cout << clear_ith_bit(10, 3) << endl;

    // cout << update_ith_bit(10, 1, false) << endl;

    // vector<int> nums = {4,1,2,1,4,3,2};
    // cout << find_unique_num(nums) << endl;

    // cout << clear_last_i_bits(7, 2) << endl; // 1 indexed

    // cout << check_power_of_2(16) << endl;

    // cout << count_num_of_set_bits(16) << endl;

    // cout << clear_bits_in_a_range(15, 2, 0) << endl;

    vector<string> ans = find_all_possible_sub_sequences("abc");
    for (string &sub_str : ans) 
        cout << sub_str << endl;

    cout << endl << endl << endl;
    return 0;
}
