#include <iostream>
#include <vector>
using namespace std;

int main() {

    // 1-D array declaration
    vector<int> arr1;
    // 1-D array initialization
    vector<int> arr2{10, 20, 30, 40, 50};
    // dynamic 1-D array
    int n;
    cout << "Enter the size of the dynamic array : ";
    cin >> n;
    vector<int> arr3(n);
    // initilizing 1-D with some value
    int initial_value;
    cout << "Enter the initial value of each element in the array : ";
    cin >> initial_value;
    vector<int> arr4(n, initial_value);

    cout << "Default size of the array : " << arr1.size() << endl;
    cout << "Default capacity of the array : " << arr1.capacity() << endl;
    cout << "Default emptiness state of the array : " << arr1.empty() << endl;
    cout << "Default memory size of the array : " << sizeof(arr1) << endl;
    cout << "Default memory size of the int : " << sizeof(int) << endl;
    cout << "sizeof(arr1) / sizeof(int) : " << (sizeof(arr1) / sizeof(int)) << endl;

    // TODO: replace arra2 with 3,4 values and see the difeerence
    cout << "Size of the array : " << arr2.size() << endl;
    cout << "Capacity of the array : " << arr2.capacity() << endl;
    cout << "Emptiness state of the array : " << arr2.empty() << endl;

    // chnage the size to capacity and the see the difference
    // array insertions; TODO: replace arr1 with arr2,3,4 and see the difference
    arr1.push_back(5);
    arr1.push_back(51);
    // array printing
    cout << "Printing the array after pushing 2 values : " << endl;
    for (int i=0; i<arr1.size(); i++) {
        cout << arr1[i] << "   ";
    }
    cout << endl;
    // deleting last ele in the array
    cout << "Printing the array after poping 1 value : " << endl;
    arr1.pop_back();
    for (int i=0; i<arr1.size(); i++) {
        cout << arr1[i] << "   ";
    }
    cout << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
