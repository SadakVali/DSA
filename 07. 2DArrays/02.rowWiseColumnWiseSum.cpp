#include <iostream>
using namespace std;

void row_wise_sum(int arr[][4], int rows, int columns) {
    cout << "row wise sum : " << endl;
    for (int i=0; i<rows; i++) {
        int sum = 0;
        for (int j=0; j<columns; j++) {
            sum += arr[i][j];
        }
        cout << sum << "   ";
    }
    cout << endl;
}

void column_wise_sum(int arr[][4], int rows, int columns) {
    cout << "column wise sum : " << endl;
    for (int i=0; i<columns; i++) {
        int sum = 0;
        for (int j=0; j<rows; j++) {
            sum += arr[j][i];
        }
        cout << sum << "   ";
    }
    cout << endl;
}

int main() {

    int arr[][4] = {
        {1,2,3,4}, 
        {2,3,4,5}, 
        {3,4,5,6}
        };

    row_wise_sum(arr, 3, 4);
    cout << endl;
    column_wise_sum(arr, 3, 4);

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
