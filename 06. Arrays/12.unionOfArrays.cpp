// Allow repetitions , don't allow repetitions
#include <iostream>
#include <vector>
using namespace std;

void print_arr (vector<int> arr) {
    for (auto value : arr) {
        cout << value << "   ";
    }
    cout << endl;
}

vector<int> union_of_arrays (vector<int> arr1, vector<int> arr2) {
    vector<int> union_arr(arr1.size() + arr2.size());
    int i=0;
    for (; i<arr1.size(); i++) {
        union_arr[i] = arr1[i];
    }
    for (int j=0; j<arr2.size(); j++) {
        union_arr[i+j] = arr2[j];
    }
    return union_arr;
}

int main() {

    int n1;
    cout << "Enter the size of the first input array : ";
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Enter the elements in the first array : ";
    for (int i=0; i<arr1.size(); i++) {
        cin >> arr1[i];
    }

    int n2;
    cout << "Enter the size of the second input array : ";
    cin >> n2;
    vector<int> arr2(n2);
    cout << "Enter the elements in the first array : ";
    for (int i=0; i<arr2.size(); i++) {
        cin >> arr2[i];
    }

    // Considering no intersection elements exists for 2 arrays
    vector<int> union_arr = union_of_arrays(arr1, arr2);
    print_arr(union_arr);

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
