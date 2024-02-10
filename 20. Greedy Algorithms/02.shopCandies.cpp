#include<bits/stdc++.h>
using namespace std;

int solve(int prices[], int &n) {
    int amount = 0;
    if (n == 0) return amount;
    int slow = 0, fast = n-1;
    sort(prices, prices+n);
    while (slow <= fast) {
        amount += prices[slow++];
        fast -= 2;
    }
    return amount;
};


// N trains, Activity Selection, N meetings in 1 Room Problems are same
int main() {

    int n = 6;
    int prices[] = {2,8,6,9,4,7};

    int ans = solve(prices, n);
    cout << "Less Amount Needed to Buy all candies : " << ans << endl;

    cout << endl << endl << endl;
    return 0;
}
