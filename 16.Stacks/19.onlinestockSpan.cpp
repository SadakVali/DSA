#include<bits/stdc++.h>
using namespace std;

class StockSpanner {
    public:
        stack<pair<int, int>> st;
        StockSpanner() {};

        int next(int price) {
            int span = 1;
            while (!st.empty() && st.top().first <= price) {
                span += st.top().second;
                st.pop();
            }
            st.push({price, span});
            return span;
        };
};


// https://leetcode.com/problems/online-stock-span/description/
// TC ===> O(n) & SC ===> O(n) when price comes from decreasing array
// worst case for SC ===> [9,8,7,6,5,4,3,2,1] ===> O(n)
// best case for SC ===> [9,8,7,6,5,4,3,2,1] ===> O(1)
int main() {

    StockSpanner ss;
    // cout << ss.next(9) << endl;
    // cout << ss.next(8) << endl;
    // cout << ss.next(7) << endl;
    // cout << ss.next(6) << endl;
    // cout << ss.next(5) << endl;
    // cout << ss.next(4) << endl;
    // cout << ss.next(3) << endl;
    // cout << ss.next(2) << endl;
    // cout << ss.next(1) << endl;

    cout << ss.next(1) << endl;
    cout << ss.next(2) << endl;
    cout << ss.next(3) << endl;
    cout << ss.next(4) << endl;
    cout << ss.next(5) << endl;
    cout << ss.next(6) << endl;
    cout << ss.next(7) << endl;
    cout << ss.next(8) << endl;
    cout << ss.next(9) << endl;

    cout << endl << endl << endl;
    return 0;
}
