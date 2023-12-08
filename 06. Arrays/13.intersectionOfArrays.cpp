#include <iostream>
#include <vector>
using namespace std;

// Generic printing function for any vector type
template <typename T>
void print_arr(const vector<T>& arr) {
    cout << "Printing the array elements: ";
    for (const auto& value : arr) {
        cout << value << "   ";
    }
    cout << endl;
}

vector<int> intersection_of_arrays (vector<int> arr1, vector<int> arr2) {
    vector<int> intersection_arr;
    for (int i=0; i<arr1.size(); i++) {
        for (int j=0; j<arr2.size(); j++) {
            if (arr1[i] == arr2[j]) {
                intersection_arr.push_back(arr1[i]);
                break;
            }
        } 
    }
    return intersection_arr;
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
    vector<int> intersection_arr = intersection_of_arrays(arr1, arr2);
    print_arr(intersection_arr);

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
