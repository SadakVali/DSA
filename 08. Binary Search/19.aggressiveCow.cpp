#include <iostream>
#include <vector>
using namespace std;

bool is_this_a_poss_solu (vector<int> &stall_positions, int num_of_cows, int mid) {
    int curr_cow = 1;
    int last_cow_stall_posi = stall_positions[0];
    for (int i=0; i<stall_positions.size(); i++) {
        if (stall_positions[i] - last_cow_stall_posi >= mid) {
            if (++curr_cow == num_of_cows) 
                return true; 
            last_cow_stall_posi = stall_positions[i];
        }
    }
    return false;
}

int find_max_poss_dis_btw_cows (vector<int> &stall_positions, int num_of_cows) {
    sort(stall_positions.begin(), stall_positions.end());
    int start = 0;
    int end = stall_positions[stall_positions.size()-1] - stall_positions[0];
    int ans = -1, mid;
    while (start <= end) {
        mid = start + ((end - start) >> 1);
        if (is_this_a_poss_solu(stall_positions, num_of_cows, mid)) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {

    // int num_of_cows, num_of_stalls;
    // cout << "Enter total Number of cows, Number of stalls with space in between: ";
    // cin >> num_of_cows >> num_of_stalls;

    // int stall_positions[num_of_stalls];
    // cout << "Enter " << num_of_stalls << " number of stall positions : " << endl;
    // for (int i=0; i<num_of_stalls; i++) 
    //     cin >> stall_positions[i];

    vector<int> stall_positions{1, 2, 4, 8, 9};
    int num_of_cows = 3; // , num_of_stalls = stall_positions.size();

    long long max_poss_dis_btw_cows = find_max_poss_dis_btw_cows(
        stall_positions, 
        num_of_cows
    );

    cout << max_poss_dis_btw_cows << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
