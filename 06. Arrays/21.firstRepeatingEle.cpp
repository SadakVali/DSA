#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int get_first_repeating_num_position1 (vector<int> & arr) {
    for (int i=0; i<arr.size(); i++) {
        for (int j=i+1; j<arr.size(); j++) {
            if (arr[i] == arr[j]) {
                return i+1;
            }
        }
    }
    return -1;
}

int get_first_repeating_num_position2 (vector<int> & arr) {
    unordered_map<int, int> hash;
    for (int i=0; i<arr.size(); i++) {
        hash[arr[i]]++;
    }
    for (int i=0; i<arr.size(); i++) {
        if (hash[arr[i]] > 1) {
            return i+1;
        }
    }
    return -1;
}

int get_first_repeating_num_position3 (vector<int> & arr) {
    vector<int> count_arr(arr.size()+1, 0);
    for (int i=0; i<arr.size(); i++) {
        count_arr[arr[i]]++;
    }
    // for (int i=0; i<count_arr.size(); i++) {
    //     cout << count_arr[arr[i]] << "   ";
    // }
    // cout << endl;
    // for (int i=0; i<count_arr.size(); i++) {
    //     cout << count_arr[i] << "   ";
    // }
    // cout << endl;
    // cout << arr[count_arr.size()] << "   " << count_arr[count_arr.size()] << endl;
    for (int i=0; i<arr.size(); i++) {
        if (count_arr[arr[i]] > 1) {
            return i+1;
        }
    }
    return -1;
}

int main() {

    vector<int> arr = {1,5,3,4,3,5,7};
    // // 1. naive method
    // int repeat_num_posi = get_first_repeating_num_position1(arr);
    // cout << "Repeating Number Position : " << repeat_num_posi << endl;

    // // 2. hashing method
    // int repeat_num_posi = get_first_repeating_num_position2(arr);
    // cout << "Repeating Number Position : " << repeat_num_posi << endl;

    // 2. count array indexing method
    int repeat_num_posi = get_first_repeating_num_position3(arr);
    cout << "Repeating Number Position : " << repeat_num_posi << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
