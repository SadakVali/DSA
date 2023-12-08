#include <iostream>
#include <vector>
using namespace std;

vector<int> get_arr_as_input () {
    int n;
    cout << "Enter the size of the input array : ";
    cin >> n;
    while (n <= 0) {
        cout << "Please enter a valid size (greater than 0): ";
        cin >> n;
    }
    vector<int> arr(n);
    cout << "Enter the " << n << " elements in the array : ";
    for (int i=0; i<arr.size(); i++) {
        cin >> arr[i];
    }
    return arr;
}

vector<pair<int, int>> find_possible_pairs (const vector<int>& arr, int sum) {
    vector<pair<int, int>> possible_pairs;
    for (int i=0; i<arr.size(); i++) {
        for (int j=i+1; j<arr.size(); j++) {
            if (arr[i]+arr[j] == sum) {
                possible_pairs.emplace_back(arr[i], arr[j]);
            }
        }
    }
    return possible_pairs;
}

int main() {

    vector<int> arr = get_arr_as_input();
    cout << "Enter pairwise sum value : ";
    int sum;
    cin >> sum;

    vector<pair<int, int>> possible_pairs = find_possible_pairs(arr, sum);
    for (const auto& pair : possible_pairs) {
        cout << "Pair: (" << pair.first << ", " << pair.second << ")" << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
