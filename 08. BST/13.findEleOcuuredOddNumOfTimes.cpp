#include <iostream>
#include <vector>
using namespace std;

int find_num_occured_odd_num_of_times(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid, ans;
    while (start <= end)
    {
        mid = start + ((end - start) / 2);
        if (start == end)
            return mid;
        if (mid & 1) // mid is odd
        {
            if (arr[mid] == arr[mid - 1])
                start = mid + 1;
            else
                end = mid - 1;
        }
        else // mid is even
        {
            if (arr[mid] == arr[mid + 1])
                start = mid + 2;
            else
                end = mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {0, 1, 1, 2, 2, 3, 3, 4, 4, 3, 3, 5, 5};
    int index_of_num_occured_odd_num_of_times = find_num_occured_odd_num_of_times(arr);
    cout << index_of_num_occured_odd_num_of_times << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
