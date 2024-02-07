#include<bits/stdc++.h>
using namespace std;

// SC ===> O(n) 
class StackWithQueues {
    queue<int> q;
    public:
        // TC ===> O(n) 
        void push(int x) {
            q.push(x);
            for (int i=0; i<q.size()-1; ++i) {
                q.push(q.front());
                q.pop();
            }
        };
        // TC ===> O(1) 
        int pop() {
            int pop = q.front();
            q.pop();
            return pop;
        };
        // TC ===> O(1) 
        int top() {
            return q.front();
        };
        // TC ===> O(1) 
        bool empty() {
            return q.empty();
        };
};


// https://leetcode.com/problems/implement-queue-using-stacks/description/
int main() {

    StackWithQueues st;
    st.push(10);
    st.push(20);
    cout << st.top() << endl;
    cout << st.pop() << endl;
    cout << st.empty() << endl;

    cout << endl << endl << endl;
    return 0;
};
