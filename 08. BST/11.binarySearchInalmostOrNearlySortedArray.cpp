#include <iostream>
#include <vector>
using namespace std;

int binary_search_on_nearly_sorted_array(vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid;
    while (start <= end)
    {
        mid = start + ((end - start) / 2);
        if (arr[mid] == target)
            return mid;
        else if ((mid + 1) <= end && arr[mid + 1] == target)
            return mid + 1;
        else if ((mid - 1) >= 0 && arr[mid - 1] == target)
            return mid - 1;
        else if (target < arr[mid - 1])
            end = mid - 2;
        else
            start = mid + 2;
    }
    return -1;
}

int main()
{
    // vector<int> arr = {10, 3, 40, 20, 50, 80, 70};
    vector<int> arr = {10, 3};
    int target = 3;

    int target_idx = binary_search_on_nearly_sorted_array(arr, target);

    target_idx != -1 ? cout << "target present at index : " << target_idx : cout << "target is not available in the array";

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
