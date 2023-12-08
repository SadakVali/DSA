#include <iostream>
// limits.h
using namespace std;

int main() {

    int arr[] = {3, 5, 67, 8, 0, 9, 5, 4, 3, 23, 21};
    int size = 11;

    int i = 0, j = size-1;
    while (i < j) { 
        cout << arr[i] << "   ";
        cout << arr[j] << "   ";
        i++;
        j--;
    }
    if (i == j) {
        cout << arr[i];
    }

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
