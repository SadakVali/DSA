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

int main()
{
    // vector<int> arr = {8, 9, 10, 1, 2, 3, 4, 5};
    vector<int> arr = {1, 2, 3, 4, 5, 8, 9, 10};

    int pivote_ele_index = find_pivote_ele_index(arr);
    cout << pivote_ele_index << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
