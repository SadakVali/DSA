#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<chrono>
using namespace std;

bool can_we_supply_this_order(vector<int> &order_quantities, vector<int> &food_counts, int customer_id) {
    if(customer_id == order_quantities.size()) return true;
    for(int i=0; i<order_quantities.size(); i++) {
        if(order_quantities[customer_id] <= food_counts[i]) {
            food_counts[i] -= order_quantities[customer_id];
            if(can_we_supply_this_order(order_quantities, food_counts, customer_id+1)) return true;
            food_counts[i] += order_quantities[customer_id];
        }
    }
    return false;
}


// https://leetcode.com/problems/distribute-repeating-integers/description/
int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    vector<int> food_items = {1,2,3,4}; 
    vector<int> order_quantities = {2};
    // PROCESSING
    unordered_map<int, int> food_count_map;
    for (auto food_item : food_items) food_count_map[food_item]++;
    vector<int> food_counts;
    for (auto it : food_count_map) food_counts.push_back(it.second);
    sort(order_quantities.rbegin(), order_quantities.rend());
    bool response = can_we_supply_this_order(order_quantities, food_counts, 0);
    // OUTPUT
    if (response) cout << "Yes we can make this order..." << endl;
    else cout << "No we can not..." << endl;
    // ################## Your code ends below ####################
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time-start_time);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
