#include <iostream>
#include <vector>
using namespace std;

int binary_search_in_matrix(vector<vector<int>> &mat, int target)
{
    int num_of_rows = mat.size();
    int num_of_cols = mat[0].size();
    int start = 0, end = (num_of_rows * num_of_cols) - 1;
    int mid, row, col;

    while (start <= end)
    {
        mid = start + ((end - start) / 2);
        row = mid / num_of_cols;
        col = mid % num_of_cols;
        if (mat[row][col] == target)
            return true;
        else if (target < mat[row][col])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return false;
}

int main()
{
    vector<vector<int>> mat = {{1, 2, 3, 4},
                               {5, 6, 7, 8},
                               {9, 10, 11, 12},
                               {13, 14, 15, 16},
                               {17, 18, 19, 20}};

    int target = 110;
    bool present_flag = binary_search_in_matrix(mat, target);

    present_flag ? cout << "Target present in the matrix" : cout << "Target not available";

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
