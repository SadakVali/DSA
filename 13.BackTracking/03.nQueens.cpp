#include<iostream>
#include<vector>
#include<chrono>
#include<unordered_map>
using namespace std;

unordered_map<int, bool> row_check;
unordered_map<int, bool> upper_left_diagnol_check;
unordered_map<int, bool> bottom_left_diagnol_check;

void store_solution(vector<vector<char>> &board, vector<vector<string>> &ans) {
    // for (int i=0; i<board.size(); i++) {
    //     for (int j=0; j<board[i].size(); j++) {
    //         cout << board[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    vector<string> temp_rows;
    for (int i=0; i<board.size(); i++) {
        string temp_row = "";
        for (int j=0; j<board[i].size(); j++)
            temp_row.push_back(board[i][j]);
        temp_rows.push_back(temp_row);
    }
    ans.push_back(temp_rows);
}

bool is_it_safe(vector<vector<char>> &board, int row, int col) {
    // // check for presence of Queen in the same row
    // for (int i=col; i>=0; i--)
    //     if (board[row][i] == 'Q') return false;
    // // upper left diagnol
    // for (int i=row, j=col; ((i>=0) && (j>=0)); i--, j--)
    //     if (board[i][j] == 'Q') return false;
    // // bottom left diagnol
    // for (int i=row, j=col; ((i<board.size()) && (j>=0)); i++, j--)
    //     if (board[i][j] == 'Q') return false;
    // return true;
    if (
        row_check[row] || 
        upper_left_diagnol_check[col-row] || 
        bottom_left_diagnol_check[col+row]
    ) return false;
    return true;
}

void mark_maps(int col, int row, bool flag) {
    row_check[row] = flag;
    upper_left_diagnol_check[col-row] = flag;
    bottom_left_diagnol_check[col+row] = flag;
}

void solve(vector<vector<char>> &board, vector<vector<string>> &ans, int col) {
    if (col == board.size()) {
        store_solution(board, ans);
        return;
    }
    for (int row=0; row<board.size(); row++) {
        if (is_it_safe(board, row, col)) {
            board[row][col] = 'Q';
            mark_maps(col, row, true);
            solve(board, ans, col+1);
            board[row][col] = '-';
            mark_maps(col, row, false);
        }
    }
}


// https://leetcode.com/problems/n-queens/description/
int main() {
    auto start_time = chrono::high_resolution_clock::now();
    // ################## Your code starts below ##################
    // INPUT
    int n = 4;
    // PROCESSING
    vector<vector<char>> board(n, vector<char>(n, '-')); 
    vector<vector<string>> ans;
    solve(board, ans, 0);
    // OUTPUT
    for (auto each_ans : ans) {
        for (auto each_row : each_ans)
            cout << each_row << endl;
        cout << endl;
    }
    cout << endl;
    // ################## Your code ends below ####################
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time-start_time);
    cout << "Time Taken : " << duration.count() << " microseconds." << endl;
    cout << endl << endl << endl;
    return 0;
}
