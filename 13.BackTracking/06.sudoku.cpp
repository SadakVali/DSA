#include<iostream>
#include<vector>
#include<chrono>
using namespace std;

bool is_it_safe(vector<vector<int>> &board, int val, int row, int col) {
    for (int i=0; i<board.size(); i++) {
        if (board[row][i] == val) return false; // check row
        if (board[i][col] == val) return false; // check col
        if (board[3*(row/3)+(i/3)][3*(col/3)+(i%3)] == val) return false; // check box
    }
    return true;
}

bool solve(vector<vector<int>> &board) {
    for (int row=0; row<board.size(); row++) {
        for (int col=0; col<board[row].size(); col++) {
            if (board[row][col] == 0) {
                for (int val=1; val<=9; val++) {
                    if (is_it_safe(board, val, row, col)) {
                        board[row][col] = val;
                        if (solve(board)) return true;
                        board[row][col] = 0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}


int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    vector<vector<int>> board(9, vector<int>(9, 0)); 
    board = {
        {4,5,0,0,0,0,0,0,0},
        {0,0,2,0,7,0,6,3,0},
        {0,0,0,0,0,0,0,2,8},
        {0,0,0,9,5,0,0,0,0},
        {0,8,6,0,0,0,2,0,0},
        {0,2,0,6,0,0,7,5,0},
        {0,0,0,0,0,0,4,7,6},
        {0,7,0,0,4,5,0,0,0},
        {0,0,8,0,0,9,0,0,0},
    };
    // PROCESSING
    solve(board);
    // OUTPUT
    for (auto vec : board) {
        for (auto ele : vec) cout << ele << " ";
        cout << endl;
    }
    // ################## Your code ends below ####################
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time-start_time);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
