#include<iostream>
#include<chrono>
#include<vector>
using namespace std;

int find_min_num_of_coins_required (vector<int> &coins, int target) {
    if (target == 0) return 0;
    int min_num_of_coins=INT32_MAX-1, ans=INT32_MAX;
    for (int i=0; i<coins.size(); i++) {
        if ((target-coins[i]) >= 0) {
            ans = 1+find_min_num_of_coins_required(coins, target-coins[i]);
            min_num_of_coins = min(ans, min_num_of_coins);
        }
    }
    return min_num_of_coins;
}


int main() {
    auto start = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    vector<int> coins = {1, 2};
    int target = 5;
    // PROCESSING
    int min_num_of_coins = find_min_num_of_coins_required(coins, target);
    // OUTPUT
    if (min_num_of_coins > target) cout << "We can not create target sum." << endl;
    else cout << "We can make the target sum with " << min_num_of_coins << " num of coins." << endl;
    // ################## Your code ends below ####################
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end-start);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
