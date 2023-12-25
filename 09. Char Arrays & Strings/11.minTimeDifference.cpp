// https://leetcode.com/problems/minimum-time-difference/description/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find_min_time_in_minutes (vector<string> &railway_time_arr) {
    string curr_time;
    int hours, minutes, min_time=INT32_MAX, time_diff, n=railway_time_arr.size();
    vector<int> times_in_minutes;
    // create  a new vector
    for (int i=0; i<n; i++) {
        curr_time = railway_time_arr[i];
        hours = stoi(curr_time.substr(0, 2));
        minutes = stoi(curr_time.substr(3, 2));
        times_in_minutes.push_back((hours*60)+minutes);
    }
    // sort numerical vector
    sort(times_in_minutes.begin(), times_in_minutes.end());
    // extract min differance
    for (int i=1; i<n; i++) {
        time_diff = times_in_minutes[i] - times_in_minutes[i-1];
        min_time = min(min_time, time_diff); 
    }
    time_diff = times_in_minutes[0] + (24*60) - times_in_minutes[n-1];
    return min(min_time, time_diff);
}


int main() {

    vector<string> railway_time_arr = {"00:00", "23:59", "00:00"};
    cout << find_min_time_in_minutes(railway_time_arr) << endl;

    return 0;
}
