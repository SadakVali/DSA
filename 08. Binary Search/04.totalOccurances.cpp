#include <iostream>
#include <vector>
using namespace std;

int get_target_first_index(vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid, ans = 1;
    while (start <= end)
    {
        mid = start + ((end - start) / 2);
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (target < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return ans;
}

int get_target_last_index(vector<int> &arr, int target)
{
    int start = 0, end = arr.size() - 1;
    int ans = -1;
    int mid;
    while (start <= end)
    {
        mid = start + ((end - start) / 2);
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (target < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return ans;
}

int main()
{
    int target = 4;
    vector<int> arr = {1, 2, 4, 4, 4, 4, 4, 4, 4, 6, 9, 9, 9, 9, 15, 15, 23};

    int target_first_index = get_target_first_index(arr, target);
    cout << target_first_index << endl;
    int target_last_index = get_target_last_index(arr, target);
    cout << target_last_index << endl;
    int num_of_occu = target_last_index - target_first_index + 1;
    cout << "The number of occurances of the " << target << " is : " << num_of_occu << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
