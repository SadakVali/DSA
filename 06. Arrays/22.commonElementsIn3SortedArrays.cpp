#include <iostream>
#include <vector>
#include <set>

using namespace std;

// TIME COMPLEXITY => O(n1+n2+n3) when there is no common element
// SPACE COMPLEXITY => O(n1) where n1 = MIN(n1, n2, n3)

set<int> get_common_elements (vector<int> & arr1, vector<int> & arr2, vector<int> & arr3) {
    int i, j, k; // int i = 0, j = 0, k = 0;
    i = j = k = 0;
    set<int> ans;
    while ((i < arr1.size()) && (j < arr2.size()) && (k < arr3.size())) {
        if ((arr1[i] == arr2[j]) && (arr2[j] == arr3[k])) {
            ans.insert(arr1[i]);
            i++, j++, k++;
        }
        else if (arr1[i] < arr2[j]) {
            i++;
        }
        else if (arr2[j] < arr1[i]) {
            j++;
        }
        else {
            k++;
        }
    }
    return ans;
}

void print_arr (set<int> & ans) {
    for (auto value: ans) {
        cout << value << "   ";
    }
    cout << endl;
}

int main() {

    vector<int> arr1 = {1,5,10,20,40,80};
    vector<int> arr2 = {6,7,20,80,100};
    vector<int> arr3 = {3,4,15,20,30,70,80,120};

    set<int> ans = get_common_elements(arr1, arr2, arr3);
    print_arr(ans);

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
