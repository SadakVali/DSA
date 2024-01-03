#include<iostream>
#include<chrono>
using namespace std;

void find_max_profit(vector<int> &prices, int index, int &max_profit, int &min_price) {
    if (index == prices.size()) return;
    if (min_price > prices[index]) min_price = prices[index];
    int todays_profit = prices[index]-min_price;
    if (max_profit < todays_profit) max_profit = todays_profit;
    find_max_profit(prices, ++index, max_profit, min_price);
}


// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// TC => O(n) & SC => O(n)
int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    vector<int> prices {7,1,5,3,6,4};
    // PROCESSING
    int max_profit = INT32_MIN, min_price = INT32_MAX;
    find_max_profit(prices, 0, max_profit, min_price);
    // OUTPUT
    // ################## Your code ends below ####################
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time-start_time);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
