#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int get_repeating_target_first_index(vector<int> &arr, int target)
{
    int start = 0, ans = -1;
    int end = arr.size() - 1;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
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

    int target = 15;
    vector<int> arr = {1, 2, 4, 4, 4, 4, 4, 4, 4, 6, 9, 9, 9, 9, 15, 15, 23};

    auto ans2 = upper_bound(arr.begin(), arr.end(), target);
    cout << "Last index of target is : " << ans2 - arr.begin() << endl;

    int repeating_target_first_idx = get_repeating_target_first_index(arr, target);
    if (repeating_target_first_idx != -1)
        cout << "Last index of target is : " << repeating_target_first_idx << endl;
    else
        cout << "No such number in the array..." << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
