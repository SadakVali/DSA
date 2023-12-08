#include <iostream>
using namespace std;

int main() {

    int arr[] = {3,7,8,9};
    // indexing
    cout << arr[3] << endl;

    cout << endl;

    // printign all the elements in the array
    for (int i=0; i<4; i++) {
        cout << arr[i] << "   ";
    }
    cout << endl;
    cout << endl;

    // taking the inputs from user
    for (int i=0; i<4; i++) {
        cin >> arr[i];
    }
    for (int i=0; i<4; i++) {
        cout << arr[i] << "   ";
    }

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
