#include <iostream>
#include <vector>
using namespace std;

vector<int> find_k_closest_elements (vector<int> &arr, int k, int x) {
    int start = 0, end = arr.size()-1;
    while ((end - start) >= k) {
        if (abs(arr[end]-x) > abs(arr[start]-x))
            end--;
        else if (abs(arr[end]-x) < abs(arr[start]-x))
            start++;
        else if (arr[end] > arr[start])
            end--;
        else
            start++;
    }
    // vector<int> ans;
    // for (int i=start; i<=end; i++)
    //     ans.push_back(arr[i]);
    // return ans;
    return vector<int>(arr.begin()+start, arr.begin()+end+1);
}

int main() {
    int k = 4;
    int x = -1;
    vector<int> arr = {1,2,3,4,5};
    vector<int> ans = find_k_closest_elements(arr, k, x);
    for (auto value : ans)
        cout << value << "   ";
    cout << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
