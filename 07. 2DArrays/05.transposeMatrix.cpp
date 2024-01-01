#include <iostream>
using namespace std;

void print_matrix (int arr[4][3], int rows, int columns) {
    for (int i=0; i<rows; i++) {
        for (int j=0; j<columns; j++) {
            cout << arr[i][j] << "   ";
        }
        cout << endl;
    }
}

void transpose_matrix(int arr[3][4], int transpose[4][3], int rows, int columns) {
    for (int i=0; i<rows; i++) {
        for (int j=0; j<columns; j++) {
            transpose[j][i] = arr[i][j];
        }
    }
}

int main() {

    int arr[][4] = {
        {1,2,3,4}, 
        {2,4,6,8}, 
        {3,5,7,9}
    };

    int transpose[4][3];
    transpose_matrix(arr, transpose, 3, 4);
    print_matrix(transpose, 4, 3);

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
