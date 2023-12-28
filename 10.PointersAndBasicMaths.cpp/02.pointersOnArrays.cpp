#include <iostream>
using namespace std;

int main () {
    int arr[5] = {12,3,4,6,54};

    cout << arr << endl;
    cout << arr[0] << endl;
    cout << &arr << endl;
    cout << &arr[0] << endl;

    int *ptr = arr;
    // int *ptr = &arr; // This won't work
    // int *ptr = &arr[0];
    cout << ptr << endl;
    cout << &ptr << endl;

    cout << "*arr -> " << *arr << endl;
    cout << "*arr + 1 -> " << *arr + 1 << endl;
    cout << "*(arr) + 1 -> " << *(arr) + 1 << endl;
    cout << "*(arr+1) -> " << *(arr+1) << endl;
    cout << "*(1+arr) -> " << *(1+arr) << endl;
    cout << "arr[1] -> " << arr[1] << endl; // arr[i] ===> *(arr+i)
    cout << "1[arr] -> " << 1[arr] << endl; // i[arr] ===> *(i+arr)
    // arr = arr + 2; // this will rise an error
    ptr = ptr + 2; // Here ptr is being used to obeserve subparts of an array
    int *p = arr;
    int *q = arr+1;
    cout << *(q + 1) << endl; // arr[3] => 4
    cout << *(q + 4) << endl; // arr[7] out of bound
    // difference between the pointer and the array variable that acts like pointer
    cout << sizeof(arr) << endl;
    cout << sizeof(p) << endl;

    cout << endl << endl << endl;
    return 0;
}
