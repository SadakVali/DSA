#include <iostream>
using namespace std;

bool linear_search (int arr[], int size, int key) {
    for (int i=0; i<size; i++) {
        if (arr[i] == key) {
            return 1;
        }
    }
    return 0;
}

int main() {

    int arr[5] = {4, 6, 7, 98, 2};
    bool search_flag = linear_search(arr, 5, 98);
    // bool search_flag = linear_search(arr, 5, 100);
    search_flag ? cout << "Value found in the array": cout << "Value not found in the array";

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
