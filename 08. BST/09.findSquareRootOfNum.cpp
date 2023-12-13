#include <iostream>
using namespace std;

int find_square_root(int num)
{
    int start = 1;
    int end = num;
    int ans, mid;
    while (start <= end)
    {
        mid = start + ((end - start) / 2);
        int square = mid * mid;
        if (square == num)
            return mid;
        else if (square > num)
            end = mid - 1;
        else
        {
            start = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main()
{
    int num = 10;

    int square_root = find_square_root(num);
    cout << "Square root of " << num << " is : " << square_root << endl;

    int precision = 5;
    long double step = 0.1;
    long double final_ans = square_root;

    for (int i = 0; i < precision; i++)
    {
        for (long double j = final_ans; j * j <= num; j += step)
            final_ans = j;
        step /= 10;
    }
    cout << "Square root of " << num << " is : " << final_ans << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
