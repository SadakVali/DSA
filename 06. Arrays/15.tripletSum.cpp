#include <iostream>
#include <vector>
#include <tuple>
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

vector<tuple<int, int, int>> find_possible_triplets (const vector<int>& arr, int sum) {
    vector<tuple<int, int, int>> possible_triplets;
    int n = arr.size();
    for (int i=0; i<(n-2); i++) {
        for (int j=i+1; j<(n-1); j++) {
            for (int k=j+1; k<n; k++) {
                if (arr[i]+arr[j]+arr[k] == sum) {
                    possible_triplets.emplace_back(arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    return possible_triplets;
}


int main() {

    vector<int> arr = get_arr_as_input();
    cout << "Enter triplet sum value : ";
    int sum;
    cin >> sum;

    vector<tuple<int, int, int>> triplets = find_possible_triplets(arr, sum);
    for (const auto& triplet : triplets) {
        cout << "Triplet : (" << get<0>(triplet) << ", " << get<1>(triplet) << ", " << get<2>(triplet) << ")" << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
