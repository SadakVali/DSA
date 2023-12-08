#include <iostream>
using namespace std;

int main() {

    // array declaration
    int arr1[10];
    char arr2[100];
    bool arr3[12];
    cout << "Array created Successfully : " << arr1 << "   " << &arr1 << endl;

    // array initializatioon
    int arr4[] = {2, 4, 6, 9, 12};
    int arr5[] = {2, 4, 6, 9, 12};
    int arr6[10] = {2, 4, 6, 9, 12};
    // int arr7[3] = {2, 4, 6, 9, 12}; This line rises error
    cout << "Array created Successfully : " << arr4 << "   " << &arr4 << endl;
    char strArr[10] = {'a', 'b', 'c'}; 

    int arrSmart[10] = {0}; // this will work
    int arrSmart[10] = {1}; // this won't work. understand memset.

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
