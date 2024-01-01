#include <iostream>
using namespace std;

bool serach_ele_in_arr (int arr[][4], int key, int rows, int columns) {
    for (int i=0; i<rows; i++) {
        for (int j=0; j<columns; j++) {
            if (arr[i][j] == key) {
                return true;
            }
        }
    }
    return false;
}

int main() {

    int arr[][4] = {
        {1,2,3,4}, 
        {2,3,4,5}, 
        {3,4,5,6}
        };

    bool search_flag = serach_ele_in_arr(arr, 50, 3, 4);
    search_flag ? cout << "found the element" : cout << "item doesn't exists in the input array";

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
