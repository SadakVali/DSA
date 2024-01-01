#include <iostream>
using namespace std;

int main() {
    // declaration of 2D array
    int rows = 3, columns = 4, arr1[rows][columns];
    // initialization
    int arr2[rows][columns] = {
        {1,2,3,4}, 
        {5,6,7,8}, 
        {1,3,5,7}
        };
    // indexing/accessing the elements in the 2D array
    int col_idx = 1, row_idx = 2;
    cout << "indexing 2D array : " << arr2[row_idx][col_idx] << endl;
    // printting the 2D array
    for (int i=0; i<rows; i++) {
        for (int j=0; j<columns; j++) {
            cout << arr2[i][j] << "  ";
        }
        cout << endl;
    }
    // populating 2D array with user input
    cout << "Populating the input array with 3 rows and 4 columns : " << endl;
    int arr3[rows][columns];
    for (int i=0; i<rows; i++) {
        for (int j=0; j<columns; j++) {
            cin >> arr3[i][j];
        }
    }
    cout << "printing the given user array : " << endl;
    for (int i=0; i<rows; i++) {
        for (int j=0; j<columns; j++) {
            cout << arr3[i][j] << "  ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
