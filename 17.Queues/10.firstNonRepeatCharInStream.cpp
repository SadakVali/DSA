#include<bits/stdc++.h>
using namespace std;

string solve(string &str) {
    // handling no input case
    string ans = "";
    if (str.size() == 0) return ans;
    // handling first character case
    deque<char> deq;
    deq.push_back(str[0]);
    ans.push_back(str[0]);
    // handling remaining chracters
    for (int i=1; i<str.size(); ++i) {
        char ch = str[i];
        deq.push_back(ch);
        // remove all the first repeating chars in the deq
        while (!deq.empty() && (deq.front() == deq.back())) {
            deq.pop_front();
            deq.pop_back();
        }
        // now find the current first non-repeating char
        ans.push_back(deq.empty() ? '#' : deq.front());
    }
    return ans;
};


// TC ===> O(n) & Sc ===> O(n)
int main() {

    string str = "zarcaazrd";
    cout << "Final ans is : " << solve(str) << endl;

    cout << endl << endl << endl;
    return 0;
}
