#include <iostream>
#include <vector>
using namespace std;

int find_peak_element(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid;
    while (true)
    {
        mid = start + ((end - start) / 2);
        if ((arr[mid] > arr[mid - 1]) && (arr[mid] > arr[mid + 1]))
            return mid;
        else if (arr[mid] > arr[mid + 1])
            end = mid;
        else
            start = mid;
    }
}

int main()
{
    vector<int> arr = {0, 1, 2, 3, 10, 5, 4, 2};

    int peak_num = find_peak_element(arr);
    cout << "The peak element in the array is : " << peak_num << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
