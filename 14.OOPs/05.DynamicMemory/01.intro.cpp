#include<iostream>
#include<vector>
using namespace std;

int main() {

    int* a = new int;
    char* b = new char;
    float* c = new float;
    int* arr1 = new int[100];

    // dynamic 2d array creation
    int row=5, col=3;
    int** arr2 = new int*[row];
    for (int i=0; i<row; i++) 
        arr2[i] = new int[col];
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) 
            cout << arr2[i][j] << " ";
        cout << endl;
    }
    cout << endl;

    cout << sizeof(a) << " " << sizeof(b) << " " << sizeof(c) << " " << sizeof(arr1) << " " << sizeof(arr2) << endl << endl;

    // de-allocate ::: delete dynamic memory variables
    for(int i=0; i<row; i++) 
        delete []arr2[i];
    delete a, b, c;
    delete []arr1; 
    delete []arr2;

    // simple way to create 2d array in c++
    vector<vector<int>> arr2d(row, vector<int>(col, 0));
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) 
            cout << arr2d[i][j] << " ";
        cout << endl;
    }
    cout << endl;

    cout << endl << endl << endl;
    return 0;
}
