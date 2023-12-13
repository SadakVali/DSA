#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> &arr, int num)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (arr[mid] == num)
            return mid;
        else if (num < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int main()
{
    int num = 5;
    vector<int> arr = {23, 2, 3, 4, 5, 6, 7, 8, 96};
    int search_index = binary_search(arr, num);
    if (search_index >= 0)
        cout << "Found the number " << num << " at position " << search_index << "." << endl;
    else
        cout << "Number " << num << " never exists in the array." << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
