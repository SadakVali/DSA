#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cal_num_of_para_this_cook_can_make (int rank, int minutes) {
    int time_taken = 0, paratas_made = 0;
    while ((time_taken + (++paratas_made*rank)) <= minutes)
        time_taken += paratas_made*rank;
    return --paratas_made;
}

bool is_this_a_poss_sol (vector<int> &ranks_of_cooks, int number_of_paratas, int mid) {
    int paratas_made_collec = 0, rank;
    for (int i=0; i<ranks_of_cooks.size(); i++) {
        rank = ranks_of_cooks[i];
        paratas_made_collec += cal_num_of_para_this_cook_can_make(rank, mid);
        if (paratas_made_collec >= number_of_paratas) 
            return true;
    }
    return false;
}

int find_min_time_need_to_com_order (vector<int> &ranks_of_cooks, int num_of_paratas) {
    int start = 0;
    int max_rank = *max_element(ranks_of_cooks.begin(), ranks_of_cooks.end());
    int end = max_rank * ((num_of_paratas*(num_of_paratas+1)) >> 1);
    int mid, minimum_poss_time=-1;
    while (start <= end) {
        mid = start + ((end - start) >> 1);
        if (is_this_a_poss_sol(ranks_of_cooks, num_of_paratas, mid)) {
            cout << endl;
            minimum_poss_time = mid;
            end = mid - 1;
        } else 
            start = mid + 1;
    }
    return minimum_poss_time;
}

int main() {
    int num_of_test_cases; 
    cin >> num_of_test_cases;
    while (num_of_test_cases--) {
        int num_of_paratas, num_of_cooks;
        cin >> num_of_paratas >> num_of_cooks;
        vector<int> ranks_of_cooks;
        int rank;
        while (num_of_cooks--) {
            cin >> rank;
            ranks_of_cooks.push_back(rank);
        }

        int minimum_poss_time = find_min_time_need_to_com_order(
            ranks_of_cooks, 
            num_of_paratas
        );
        cout << "Minimum Time need to complete the order : " << minimum_poss_time << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
