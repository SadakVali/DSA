#include<bits/stdc++.h>
using namespace std;

vector<double> find_collision_times(vector<vector<int>> &cars) {
    // collition time of ith car with (i+1)th car
    vector<double> collition_times(cars.size(), -1);
    stack<int> st;
    for (int i=cars.size()-1; i>=0; --i) {
        // check if the car ahead of current car is faster?
        while (!st.empty() && (cars[st.top()][1] >= cars[i][1]))
            st.pop();
        while (!st.empty()) {
            double collition_time = ((double) (cars[st.top()][0] - cars[i][0])) / (cars[i][1] - cars[st.top()][1]);
            if ((collition_times[st.top()] == -1) || (collition_time <= collition_times[st.top()])) {
                collition_times[i] = collition_time;
                break;
            }
            st.pop();
        }
        st.push(i);
    }
    return collition_times;
};

void print_vec(vector<double> &collition_times) {
    for (float time : collition_times) 
        cout << time << " ";
    cout << endl;
};


// https://leetcode.com/problems/car-fleet-ii/description/
int main() {

    vector<vector<int>> cars = {{1,2},{2,1},{4,3},{7,2}};

    vector<double> collition_times = find_collision_times(cars);
    print_vec(collition_times);

    cout << endl << endl << endl;
    return 0;
}
