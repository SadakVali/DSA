#include <iostream>
#include <vector>
using namespace std;

vector<int> spiral_print(vector<vector<int>> & arr) {
    int starting_row = 0;
    int ending_row = arr.size()-1;
    int starting_col = 0;
    int ending_col = arr[0].size()-1;

    int count = 0;
    int total_elements = arr.size()*arr[0].size();
    vector<int> ans;
    while (count < total_elements) {
        // print starting row
        for (int i=starting_col; (i<=ending_col) && (count < total_elements); i++) {
            ans.push_back(arr[starting_row][i]);
            count++;
        }
        starting_row++;
        // print ending column
        for (int i=starting_row; (i<=ending_row) && (count < total_elements); i++) {
            ans.push_back(arr[i][ending_col]);
            count++;
        }
        ending_col--;
        // print ending row
        for (int i=ending_col; (i>=starting_col) && (count < total_elements); i--) {
            ans.push_back(arr[ending_row][i]);
            count++;
        }
        ending_row--;
        // print starting column
        for (int i=ending_row; (i>=starting_row) && (count < total_elements); i--) {
            ans.push_back(arr[i][starting_col]);
            count++;
        }
        starting_col++;
    }
    return ans;
}

void print_arr(vector<int> & arr) {
    for (auto value: arr) {
        cout << value << "   ";
    }
    cout << endl;
}



int main() {

    vector<vector<int>> arr = {
        {1,2,3}, 
        {4,5,6}, 
        {7,8,9}
    };
    vector<int> ans = spiral_print(arr);
    print_arr(ans);

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
