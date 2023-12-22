#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

// set<pair<int, int>> find_num_of_unique_pairs(vector<int> &arr, int k) {
//     sort(arr.begin(), arr.end());
//     set<pair<int, int>> unique_pairs;
//     for (int i = 0; i < arr.size() - 1; i++) {
//         for (int j = i + 1; j < arr.size(); j++) {
//             if (abs(arr[j] - arr[i]) == k)
//                 unique_pairs.insert({arr[i], arr[j]});
//         }
//     }
//     return unique_pairs;
// }

// set<pair<int, int>> find_num_of_unique_pairs(vector<int> &arr, int k) {
//     sort(arr.begin(), arr.end());
//     set<pair<int, int>> unique_pairs;
//     for (int i = 0; i < arr.size() - 1; i++) {
//         for (int j = i + 1; j < arr.size(); j++) {
//             if ((arr[j] - arr[i]) == k) {
//                 unique_pairs.insert({arr[i], arr[j]});
//                 break;
//             }
//             if ((arr[j] - arr[i]) > k)
//                 break;
//         }
//     }
//     return unique_pairs;
// }

int binary_search(vector<int> &arr, int start, int end, int target) {
    int mid;
    while (start <= end) {
        mid = start+((end-start)/2);
        if (arr[mid] == target)
            return mid;
        else if (target > arr[mid])
            start = mid+1;
        else
            end = mid-1;
    }
    return -1;
}

set<pair<int, int>> find_num_of_unique_pairs(vector<int> &arr, int k) {
    sort(arr.begin(), arr.end());
    set<pair<int, int>> unique_pairs;
    for (int i=0; i<arr.size()-1; i++) {
        int ele_idx = binary_search(arr, i+1, arr.size()-1, k+arr[i]);
        if (ele_idx != -1) 
            unique_pairs.insert({arr[i], arr[ele_idx]});
    }
    return unique_pairs;
}

int main() {
    vector<int> arr = {3, 1, 4, 1, 5};
    int k=2;

    set<pair<int, int>> unique_pairs = find_num_of_unique_pairs(arr, k);
    for (auto value : unique_pairs)
        cout << '(' << value.first << ", " << value.second << ')' << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
