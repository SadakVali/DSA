#include<iostream>
#include<vector>
#include<chrono>
using namespace std;

// int find_min_cost_of_tickets(vector<int> &days, vector<int> &costs, vector<int> &pass_val, int days_idx) {
//     if (days_idx >= days.size()) return 0;
//     int min_cost = INT32_MAX;
//     for (int i=0; i<costs.size(); i++) {
//         int pass_end_day = days[days_idx]+pass_val[i]-1, iter = days_idx;
//         while ((iter < days.size()) && (days[iter] <= pass_end_day)) iter++;
//         int temp = costs[i] + find_min_cost_of_tickets(days, costs, pass_val, iter);
//         min_cost = min(min_cost, temp);
//     }
//     return min_cost;
// }

// TC => 3^n & SC => O(n)
int find_min_cost_of_tickets(vector<int> &days, vector<int> &costs, int days_idx) {
    if (days_idx >= days.size()) return 0;
    // 1 Day pass
    int cost1 = costs[0] + find_min_cost_of_tickets(days, costs, days_idx+1);
    // 7 days pass
    int pass_end_day = days[days_idx]+7-1, iter = days_idx;
    while ((iter < days.size()) && (days[iter] <= pass_end_day)) iter++;
    int cost7 = costs[1] + find_min_cost_of_tickets(days, costs, iter);
    // 30 Days pass
    pass_end_day = days[iter]+30+1, iter = days_idx;
    while ((iter < days.size()) && (days[iter] <= pass_end_day)) iter++;
    int cost30 = costs[2] + find_min_cost_of_tickets(days, costs, iter);
    return min(cost1, min(cost7, cost30));
}


// https://leetcode.com/problems/minimum-cost-for-tickets/description/
int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    vector<int> days {1,4,6,7,8,20};
    vector<int> costs {2,7,15};
    // PROCESSING
    // vector<int> pass_val {1, 7, 30};
    // int min_cost = find_min_cost_of_tickets(days, costs, pass_val, 0);
    int min_cost = find_min_cost_of_tickets(days, costs, 0);
    // OUTPUT
    cout << "The min cost for travelling : " << min_cost << endl;
    // ################## Your code ends below ####################
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time-start_time);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
