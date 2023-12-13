#include <iostream>
#include <vector>
using namespace std;

int find_pivote_ele_index(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1;
    int mid;
    while (start <= end)
    {
        mid = start + ((end - start) / 2);
        if (start == end)
            return mid;
        else if ((mid + 1) <= end && arr[mid] > arr[mid + 1])
            return mid;
        else if ((mid - 1) >= start && arr[mid] < arr[mid - 1])
            return mid - 1;
        else if (arr[mid] < arr[0])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int binary_search(vector<int> &arr, int start, int end, int target)
{
    int mid;
    while (start <= end)
    {
        mid = start + ((end - start) / 2);
        if (target == arr[mid])
            return mid;
        if (target < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int main()
{
    // vector<int> arr = {8, 9, 10, 1, 2, 3, 4, 5};
    vector<int> arr = {1, 2, 3, 4, 5, 8, 9, 10};

    int pivote_ele_index = find_pivote_ele_index(arr);
    // cout << pivote_ele_index << endl;
    int target = 20;
    int target_idx;
    if (target >= arr[0] && target <= arr[pivote_ele_index])
        target_idx = binary_search(arr, 0, pivote_ele_index, target);
    else
        target_idx = binary_search(arr, pivote_ele_index + 1, arr.size() - 1, target);

    cout << "Target element index : " << target_idx << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
