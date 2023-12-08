#include <iostream>
#include <vector>
using namespace std;

int find_unique_num (vector<int> arr) {
    int ans = 0;
    for (int i=0; i<arr.size(); i++) {
        ans ^= arr[i];
    }
    return ans;
}

int main() {

    int n;
    cout << "Enter the size of the input array : ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements in the array : ";
    for (int i=0; i<arr.size(); i++) {
        cin >> arr[i];
    }

    int unique_ele = find_unique_num(arr);
    cout << "Unique element is : " << unique_ele << endl; 

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
