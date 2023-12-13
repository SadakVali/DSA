#include <iostream>
using namespace std;

int devide(int divident, int devisor)
{
    if (devisor == 0)
        return -1;
    int start = 0;
    int end = divident;
    int mid, ans;
    while (start <= end)
    {
        mid = start + ((end - start) / 2);
        if (devisor * mid == divident)
            return mid;
        else if (devisor * mid < divident)
        {
            ans = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    return ans;
}

int main()
{
    int divident = 23;
    int divisor = 3;
    int precision = 6;
    int quotient = devide(divident, divisor);
    long double step = 0.1;

    cout << quotient << endl;
    if (divisor == 0)
        return 0;
    long double final_ans = quotient;

    for (int i = 0; i < precision; i++)
    {
        for (long double i = final_ans; i * divisor <= divident; i += step)
            final_ans = i;
        step /= 10;
    }
    cout << final_ans << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
