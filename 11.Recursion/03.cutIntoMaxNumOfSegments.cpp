#include<iostream>
#include<chrono>
#include<vector>
using namespace std;

int max_num_of_possible_cuts (vector<int> &possi_cut_sizes, int rod_size) {
    if (rod_size == 0) return 0;
    int max_num_of_pieces=INT32_MIN, ans=INT32_MIN;
    for (int i=0; i<possi_cut_sizes.size(); i++) {
        if ((rod_size - possi_cut_sizes[i]) == 0)
            max_num_of_pieces = max(max_num_of_pieces, 0);
        else if ((rod_size-possi_cut_sizes[i]) > 0) {
            ans = 1+max_num_of_possible_cuts(possi_cut_sizes, rod_size-possi_cut_sizes[i]);
            max_num_of_pieces = max(max_num_of_pieces, ans);
        }
    }
    return max_num_of_pieces;
}


int main() {
    auto start = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    vector<int> possi_cut_sizes = {7, 7, 7};
    int rod_size = 7;
    // PROCESSING
    int max_num_of_pieces = max_num_of_possible_cuts(possi_cut_sizes, rod_size);
    // OUTPUT
    if (max_num_of_pieces < 0) cout << "Cuts not possible." << endl;
    else cout << "We can make max " << max_num_of_pieces << " cuts." << endl;
    // ################## Your code ends below ####################
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end-start);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
