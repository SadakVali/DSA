#include <iostream>
#include <vector>
using namespace std;

void print_in_wave_form (vector<vector <int>> & arr) {
    for (int col=0; col<arr[0].size(); col++) {
        for (int row=0; row < arr.size(); row++) {
            (col & 1) ? cout << arr[arr.size()-1-row][col] : cout << arr[row][col];
            cout << "   ";
        }
    }
    cout << endl;
}

int main() {

    vector<vector <int>> arr = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    print_in_wave_form(arr);

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
