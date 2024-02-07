#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &gas, vector<int> &cost) {
    int start = 0;   // where to start from?
    int deficit = 0; // how much petrol we need in the last trails?
    int balance = 0; // how much petrol is left at the end?
    // @ each gas station
    for (int iter=0; iter<gas.size(); ++iter) {
        // find the gas left @ the next gas station
        balance += gas[iter] - cost[iter];
        // if we can not reach the next gas station
        if (balance < 0) {
            // hhow much extra gas we needed to reach next gas station?
            deficit += abs(balance);
            // lets start the journey fro the next station.
            balance = 0; // since we are starting balance petrol is zero
            start = iter + 1; // starting station index number
        }
    }
    return (deficit <= balance) ? start : -1;
};


// https://leetcode.com/problems/gas-station/description/
int main() {

    vector<int> gas {1,2,3,4,5}; 
    vector<int> cost {3,4,5,1,2}; 

    int starting_index = solve(gas, cost);
    cout << "Starting Index : " << starting_index << endl;

    cout << endl << endl << endl;
    return 0;
}
