#include<iostream>
#include<vector>
#include<chrono>
using namespace std;

int find_max_amount_one_can_rob(vector<int> &money_in_houses, int index) {
    if (index >= money_in_houses.size()) return 0;
    int case1 = money_in_houses[index]+find_max_amount_one_can_rob(money_in_houses, index+2);
    int case2 = find_max_amount_one_can_rob(money_in_houses, ++index);
    return max(case1, case2);
}


// https://leetcode.com/problems/house-robber/description/
// TC => O(2^n) & SC => O(n)
int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    // vector<int> money_in_houses {1,2,3,1};
    vector<int> money_in_houses {2,1,1,2};
    // PROCESSING
    int max_robbery_amount = find_max_amount_one_can_rob(money_in_houses, 0);
    // OUTPUT
    cout << "Maximum robbery amount : " << max_robbery_amount << endl;
    // ################## Your code ends below ####################
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time-start_time);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
