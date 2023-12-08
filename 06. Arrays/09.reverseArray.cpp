#include <iostream>
using namespace std;

int main() {

    int arr[] = {3, 5, 67, 8, 0, 9, 5, 4, 3, 23, 21};
    int size = 11;

    int i = 0, j = size-1;

    while (i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for (i=0; i<size; i++) {
        cout << arr[i] << "   ";
    }

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
