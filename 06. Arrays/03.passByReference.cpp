#include <iostream>
using namespace std;

void print_arr (int arr[], int size) {
    for (int i=0; i<size; i++) {
        cout << arr[i] << "   ";
    }
    cout << endl;
}

void inc (int arr[], int size) {
    arr[0] = 15;
    print_arr(arr, 2);
}

int main() {

    int arr[2] = {2, 5};
    print_arr(arr, 2);
    inc(arr, 2);
    print_arr(arr, 2);

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
