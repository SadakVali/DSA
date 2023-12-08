#include <iostream>
using namespace std;

void count_ones_and_twos (int arr[], int size, int result[]) {
    for (int i=0; i<size; i++) {
        if (arr[i] == 0) {
            result[0] += 1;
        } else if (arr[i] == 1) {
            result[1] += 1;
        }
    }
}

int main() {

    int arr[] = {1,1,1,1,1,1,1,0,0,0,0,4,6,78};
    int result[] = {0, 0};

    count_ones_and_twos(arr, 14, result);
    cout << result[0] << "   " << result[1] << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
