#include <iostream>
#include <vector>
using namespace std;

bool is_it_a_possible_sol (vector<int> &board_sizes, int num_of_painters, long long mid) {
    long long time_taken_by_curr_painter = 0;
    int curr_painter_idx = 1;
    for (int i=0; i<board_sizes.size(); i++) {
        if (board_sizes[i] > mid) 
            return false;
        if ((board_sizes[i] + time_taken_by_curr_painter) > mid) {
            if (++curr_painter_idx > num_of_painters) 
                return false;
            time_taken_by_curr_painter = board_sizes[i];
        }
        else 
            time_taken_by_curr_painter += board_sizes[i];
    }
    return true;
}

long long find_min_time_to_paint (vector<int> &board_sizes, int num_of_painters) {
    long long start = 0;
    long long end = 0;
    for (int i=0; i<board_sizes.size(); i++)
        end += board_sizes[i];
    long long min_time;
    while (start <= end) {
        long long mid = start + ((end - start) >> 1);
        if (is_it_a_possible_sol(board_sizes, num_of_painters, mid)) {
            min_time = mid;
            end = mid-1;
        } else
            start = mid+1;
    }
    return min_time;
}

int main() {

    // int num_of_painters, num_of_boards;
    // cout << "Enter total Number of painters, Number of boards with space in between: ";
    // cin >> num_of_painters >> num_of_boards;

    // int board_sizes[num_of_boards];
    // cout << "Enter " << num_of_boards << " number of board sizes : " << endl;
    // for (int i=0; i<num_of_boards; i++) 
    //     cin >> board_sizes[i];

    vector<int> board_sizes{5, 10, 30, 20, 15};
    int num_of_painters = 3; // , num_of_boards = board_sizes.size();

    long long min_time_to_paint = find_min_time_to_paint(board_sizes, num_of_painters);

    cout << min_time_to_paint << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
